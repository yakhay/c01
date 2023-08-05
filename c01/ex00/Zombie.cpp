/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:30 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 14:37:52 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nam)
{
	name = nam;
}

Zombie::~Zombie(){
	std::cout << "Destructor called for " << name << std::endl;
}

void Zombie::setname(std::string namee)
{
	name = namee;
}

void Zombie::announce( void )
{
	std::cout << name ;std::cout <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
