/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:33 by anda-cun          #+#    #+#             */
/*   Updated: 2024/01/23 07:10:59 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called\n";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    this->_highFives = 0;
    return;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called with address " << this << "\n";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    this->_highFives = 0;
    std::cout << "Hey, I'm " << this->_name << " and I have " << this->_hit_points << " hit points, " << this->_energy_points << " energy damage and " << this->_attack_damage << " attack damage.\n";
    return;
}

FragTrap::FragTrap(const FragTrap & that) : ClapTrap(that)
{
    std::cout << "FragTrap copy constructor called\n";
    *this = that;
}

FragTrap & FragTrap::operator=(const FragTrap & that)
{
    std::cout << "FragTrap assignment operator called\n";
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
    std::cout << "FragTrap destructor called\n";
    return;
}

void FragTrap::highFivesGuys(void)
{
    this->_highFives++;
    std::cout << this->_name << " is requesting a high five. Total requests: " << this->_highFives << "\n";
}