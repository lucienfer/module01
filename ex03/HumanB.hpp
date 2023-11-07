#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class   HumanB
{
    private:
    Weapon*  weapon;
    std::string name;

    public:
    HumanB(std::string str);
    ~HumanB(void);
    
    void    attack(void);
    void    setWeapon(Weapon& tmp);
};

#endif