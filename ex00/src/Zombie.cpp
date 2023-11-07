/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:03:26 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:03:37 by luciefer         ###   ########.fr       */
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
    std::cout << "| Zombie destructor |" << std::endl;
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
