#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
    Weapon&  weapon;
    std::string name;

public:

    HumanA(std::string str, Weapon& weapon);
    ~HumanA(void);

    void    attack(void);
};




#endif
