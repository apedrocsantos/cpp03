/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:01:10 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/09 22:14:49 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/inheritance-in-c/

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main(void)
{
    ScavTrap scav("scavvy");
    FragTrap frag("fraggy");
    scav.guardGate();
    frag.highFivesGuys();
    frag.highFivesGuys();
    frag.highFivesGuys();
}