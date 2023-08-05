/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:09:19 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:10:21 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
	name = new_name;
}
void HumanB::setweap(Weapon &new_weap)
{
	weap = &new_weap;
}
void HumanB::attack(void)
{
	if ( weap == nullptr || weap->getType().empty())
	{
		std::cout <<"type not found" <<std::endl;
	}
	else{
	std::cout << name ;std::cout << " attacks with their ";std::cout << weap->getType()<<std::endl;
	}
}
