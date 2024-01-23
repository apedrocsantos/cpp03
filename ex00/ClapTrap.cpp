/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:01:01 by anda-cun          #+#    #+#             */
/*   Updated: 2024/01/23 07:09:34 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Hey, I'm " << this->_name << " and i have " << this->_hit_points << " hit points, " << this->_energy_points << " energy points and " << this->_attack_damage << " attack damage.\n";
    return ;
}

ClapTrap::ClapTrap(const ClapTrap & that)
{
    std::cout << "Copy constructor called\n";
    *this = that;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & that)
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

// Destructor
ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string & target)
{
    if (this->_hit_points <= 0 || this->_energy_points <= 0)
    {
        std::cout << "Sorry, I'm too weak to attack...\n";
        std:: cout << this->_hit_points << " hit points and " << this->_energy_points << " energy points.\n";
        return;
    }
    this->_energy_points--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage.\n";
    std::cout << this->_hit_points << " hitpoints remaining, and " << this->_energy_points << " energy points remaining.\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->_name << " gets " << amount << " damage, " << this->_hit_points << " hit points remaining.\n";
    return;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points <= 0 || this->_energy_points <= 0)
    {
        std::cout << "Sorry, I'm too weak to repair...\n";
        std:: cout << this->_hit_points << " hit points and " << this->_energy_points << " energy points.\n";
        return;
    }
    this->_energy_points--;
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->_name << " repaired itsel with " << amount << " points, now has " << this->_hit_points << " hit points and " << this->_energy_points << " energy points.\n";
    return;
}
