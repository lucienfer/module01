/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciefer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:04:36 by luciefer          #+#    #+#             */
/*   Updated: 2023/10/05 14:04:39 by luciefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(void){
    std::string str3 = "test";
    int N = 3;
    Zombie* zombie2 = zombieHorde(N, str3);
    
    delete [] zombie2;
    return (0);
}
