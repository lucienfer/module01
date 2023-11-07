/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:53:55 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:02:33 by luciefer         ###   ########.fr       */
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

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
