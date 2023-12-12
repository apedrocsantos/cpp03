/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/12 17:25:23 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
    this->_name = name;
    std::cout << this->_name << " DiamondTrap named constructor called\n";
    ClapTrap::_name = name + "_clap_name";
    ClapTrap::_hit_points = 10;
    ClapTrap::_energy_points = 10;
    ClapTrap::_attack_damage = 0;
    FragTrap::_hit_points = 100;
    FragTrap::_energy_points = 100;
    FragTrap::_attack_damage = 30;
    ScavTrap::_hit_points = 100;
    ScavTrap::_energy_points = 50;
    ScavTrap::_attack_damage = 20;
    this->_hit_points = ScavTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = ScavTrap::_attack_damage;
}

// DiamondTrap::DiamondTrap(const DiamondTrap & that) : ClapTrap(that), ScavTrap(that), FragTrap(that)
// {
//     std::cout << "DiamondTrap copy constructor called\n";
//     this->_name = that._name;
//     this->_hit_points = FragTrap::_hit_points;
//     this->_energy_points = ScavTrap::_energy_points;
//     this->_attack_damage = FragTrap::_attack_damage;
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
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Hey, I'm " << this->_name << ", my grandfather is " << ClapTrap::_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
}