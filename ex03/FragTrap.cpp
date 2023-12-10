/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/10 23:33:58 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << this->_name << " FragTrap constructor called\n";
    this->_hit_points = 20;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    this->_highFives = 0;
    std::cout << "Hey, I'm " << this->_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
    return;
}

FragTrap::FragTrap(const FragTrap & that)
{
    std::cout << "Copy constructor called\n";
    *this = that;
}

FragTrap & FragTrap::operator=(const FragTrap & that)
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

FragTrap::~FragTrap(void)
{
    std::cout << this->_name << " FragTrap destructor called\n";
    return;
}

void FragTrap::highFivesGuys(void)
{
    this->_highFives++;
    std::cout << this->_name << " is requesting a high five. Total requests: " << this->_highFives << "\n";
}