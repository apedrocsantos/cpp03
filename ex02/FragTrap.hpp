/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:59:27 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/09 22:28:21 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    int _highFives;
    public:
        FragTrap(std::string name);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif