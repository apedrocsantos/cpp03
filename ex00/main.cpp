/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:01:10 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/09 20:29:04 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
    ClapTrap clap1("Guy1");
    clap1.attack("Some dude");
    clap1.takeDamage(9);
    clap1.attack("Some dude");
    clap1.beRepaired(1);
    clap1.takeDamage(9);
    clap1.attack("Some dude");
    clap1.beRepaired(1);
}