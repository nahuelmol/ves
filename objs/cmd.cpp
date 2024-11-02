
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
        bool cmdok = false;
        bool targetok = false;
        cmd = flags[0];
        target = flags[1];
        std::string commands[4] = {"add", "display", "show", "close"};
        std::string windows[2] = {"wf", "projects"};
        for (auto command : commands) {
            if (cmd == command) {
                cmdok = true;
            }
        }
        for (auto window : windows) {
            if (target == window) {
                targetok=true;
            }
        }
        if (cmdok == true && targetok == true) {
            return true;
        } else {
            return false;
        }
    }

    std::string get_cmd() {
        return cmd;
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
