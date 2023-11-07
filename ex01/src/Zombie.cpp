/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:04:23 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:04:24 by luciefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
    std::cout << "# Zombie constructor #" << std::endl;
    return ;
}

Zombie::Zombie(std::string str) : name(str) 
{
    std::cout << "# Zombie constructor #" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << name << ": is dead" << std::endl;
    return ;
}

void    Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
    return ;
}

void    Zombie::setName(std::string str)
{
    name = str;
    return ;
}
