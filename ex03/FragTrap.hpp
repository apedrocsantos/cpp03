/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:27 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/10 23:37:54 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    int _highFives;
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap & that);
        FragTrap &operator=(const FragTrap & that);
        void highFivesGuys(void);
        ~FragTrap(void);
};

#endif