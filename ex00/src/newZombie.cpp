/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:03:13 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:03:14 by luciefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name)
{
	Zombie* newZombie = new Zombie(name);
	return newZombie;
}
