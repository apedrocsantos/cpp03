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
    ScavTrap scav("ScavTrap");
    scav.guardGate();
}