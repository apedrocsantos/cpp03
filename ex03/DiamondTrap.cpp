/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2024/02/04 05:50:03 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap default constructor called with address " << this << "\n";
    std::cout << "Hey, I'm nobody, and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy points, " << this->_attack_damage << " attack damage.\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    FragTrap::_hit_points = 100;
    ScavTrap::_energy_points = 50;
    FragTrap::_attack_damage = 30;
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap named constructor called with address " << this << "\n";
    std::cout << "Hey, I'm " << this->_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy points, " << this->_attack_damage << " attack damage.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap & that) : ClapTrap(that), FragTrap(that), ScavTrap(that)
{
    std::cout << this->_name << " DiamondTrap copy constructor called\n";
    this->_name = that._name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
}

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
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Hey, I'm " << this->_name << ", my grandfather is " << ClapTrap::_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
}