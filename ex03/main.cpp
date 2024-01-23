/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:01:10 by anda-cun          #+#    #+#             */
/*   Updated: 2024/01/23 07:38:40 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/multiple-inheritance-in-c/

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    DiamondTrap diamond("diddy");
    diamond.whoAmI();
    diamond.attack("teste");
    diamond.highFivesGuys();

    ClapTrap a = DiamondTrap("TESTE");
}