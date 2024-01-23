/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:01:10 by anda-cun          #+#    #+#             */
/*   Updated: 2024/01/23 07:36:59 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/inheritance-in-c/
// https://stackoverflow.com/questions/14184341/c-constructor-destructor-inheritance

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ScavTrap scav("Scavvy");
    scav.attack("coiso");
    scav.guardGate();
    std::cout << "\n================> assignment operator\n\n";
    ScavTrap scav2("Scav2");
    scav2.set_values(0, 0, 0);
    scav = scav2;
    scav.get_values();
    std::cout << "\n================> copy constructor\n\n";
    ScavTrap scav3(scav2);
    scav3.get_values();
}