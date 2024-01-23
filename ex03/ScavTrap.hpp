/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:27 by anda-cun          #+#    #+#             */
/*   Updated: 2024/01/23 07:26:46 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & that);
        ScavTrap &operator=(const ScavTrap & that);
        ~ScavTrap(void);
        void guardGate();
};

#endif