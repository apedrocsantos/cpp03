/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/09 22:25:56 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << this->_name << " constructor called\n";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "Hey, I'm " << this->_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << this->_name << " destructor called\n";
    return;
}

void ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode.\n";
}