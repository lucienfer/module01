#include "../Weapon.hpp"

Weapon::Weapon(std::string str)
{
   std::cout << "# Constructor Weapon called #" << std::endl;
    setType(str);
    return ;
}

Weapon::~Weapon(void)
{
   std::cout << "| Destructor Weapon called |" << std::endl;
    return ;
}

std::string& Weapon::getType(void)
{
    std::string&    tmp = type;
    return (tmp);
}

void    Weapon::setType(std::string str)
{
    type = str;
    return ;
}
