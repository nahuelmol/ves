
#include <vector>
#include <string>
#include "objs/cmd.cpp"

void command_builder(std::string cmdstring) {
    std::string command = "";
    std::vector<std::string> words;
    for (char c : cmdstring) {
        if (c == ' ') {
            words.push_back(command);
            command = "";
        } else {
            command.push_back(c);
        }
    }
    if (!command.empty()) {
        words.push_back(command);
    }
    Command cmd(words);
    if (cmd.build() == false) {
        std::cout << "command cannot be created" << std::endl;
    } else {
        std::cout << "command created" << std::endl;
    };
}
