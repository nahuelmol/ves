#include <iostream>
#include <ostream>

lua_State* lua_connection(){
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    lua_newtable(L);
    return L;
}

int lua_load(std::string& filename, lua_State* L){
    std::string path = "lua/" + filename + ".lua";
    const char* filepath = path.c_str();
    if (luaL_loadfile(L, filepath) || lua_pcall(L,0,0,0)){
        std::cerr << "Error" << lua_tostring(L, -1) << std::endl;
        lua_close(L);
        return 1;
    }
    return 0;
}
