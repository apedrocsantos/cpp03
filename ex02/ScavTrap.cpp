/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2024/01/23 07:10:10 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called\n";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called with address " << this << "\n";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "Hey, I'm " << this->_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
    return;
}

ScavTrap::ScavTrap(const ScavTrap & that) : ClapTrap(that)
{
    std::cout << "ScavTrap copy constructor called\n";
    *this = that;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & that)
{
    std::cout << "ScavTrap assignment operator called\n";
    if (this != &that)
    {
        this->_attack_damage = that._attack_damage;
        this->_energy_points = that._energy_points;
        this->_hit_points = that._hit_points;
        this->_name = that._name;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called\n";
    return;
}

void ScavTrap::attack(const std::string & target)
{
    std::cout << "================> attacking\n";
    if (this->_hit_points <= 0 || this->_energy_points <= 0)
    {
        std::cout << "Sorry, I'm too weak to attack... I have ";
        std:: cout << this->_hit_points << " hit points and " << this->_energy_points << " energy points.\n";
        return;
    }
    this->_energy_points--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage.\n";
    std::cout << this->_hit_points << " hitpoints remaining, and " << this->_energy_points << " energy points remaining.\n";
}

void ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode.\n";
}