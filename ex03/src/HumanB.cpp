#include "../HumanB.hpp"

HumanB::HumanB(std::string str) : weapon(NULL), name(str)
{
    std::cout << "# Constructor HumanB called #" << std::endl;
    return ;
}

HumanB::~HumanB(void)
{
    std::cout << "| Destructor HumanB called |" << std::endl;
    return ;
}

void    HumanB::attack(void)
{
    std::cout << this->name << "attack with their " << this->weapon->getType() << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon& tmp)
{
    this->weapon = &tmp;
    return ;
}
