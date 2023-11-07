#include "../HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& tmp) : weapon(tmp), name(str)
{
    std::cout << "# Constructor HumanA called #" << std::endl;
    return ;
}

HumanA::~HumanA()
{
    std::cout << "| Destructor HumanA called |" << std::endl;
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attack with their " << this->weapon.getType() << std::endl;
    return ;
}

