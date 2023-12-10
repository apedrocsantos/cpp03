/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/10 23:35:00 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    std::cout << this->_name << " DiamondTrap constructor called\n";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    return;
}

// DiamondTrap::DiamondTrap(const DiamondTrap & that)
// {
//     std::cout << "Copy constructor called\n";
//     *this = that;
// }

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & that)
{
    if (this != &that)
    {
        this->_attack_damage = that._attack_damage;
        this->_energy_points = that._energy_points;
        this->_hit_points = that._hit_points;
        this->_name = that._name;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << this->_name << " DiamondTrap destructor called\n";
    return;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Hey, I'm " << this->_name << ", my grandfather is " << ClapTrap::_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
}