/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:04:11 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:04:13 by luciefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(void);
    Zombie(std::string str);
    ~Zombie(void);
    void    announce(void);
    void    setName(std::string str);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
