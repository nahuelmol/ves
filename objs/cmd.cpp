
#include <iostream>
#include <string>
#include <vector>

class Command 
{
public:
    Command(std::vector<std::string> flags) :
    flags(flags) {}

    void show_flags() {
        for (auto each : flags) {
            std::cout << "flag:" << each << std::endl;
        }
    }

    bool build() {
        cmd = flags[0];
        std::string commands[2] = {"add", "display"};
        for (auto command : commands) {
            if (cmd == command) {
                return true;
            }
        }
        return false;
        target = flags[1];
    }

    std::string get_target() {
        return target;
    }
private:
    std::vector<std::string> flags;
    std::string target;
    std::string cmd;
};



class WorkFlow
{
public:
    WorkFlow() {}

    void add_level() {
        std::string level[3] = {"raw", "CMP", "NMO"};
    }
private:
    std::vector<std::string> levels;
};
