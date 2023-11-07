/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:02:55 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:03:00 by luciefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(void){
    std::string str = "Zombie";
    std::string str2 = "randomChump";
    std::string str3 = "zombieHorde";
    Zombie* zombie = newZombie(str);
    
    randomChump(str2);
    zombie->announce();
    delete zombie;
    return (0);
}
