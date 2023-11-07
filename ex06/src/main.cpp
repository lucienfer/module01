#include "../Harl.hpp"

int main(int ac, char **av) {
    Harl    Harl;

    if (ac != 2)
        return (0);
    std::string level = av[1];
    Harl.complain(level);
    return (0);
}
