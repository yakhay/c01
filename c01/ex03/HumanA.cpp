/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:07:40 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:08:28 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(std::string new_name, Weapon& new_weap):name(new_name), weap(new_weap)
{
}

void HumanA::attack(void)
{
		std::cout << name ;std::cout << " attacks with their ";std::cout << weap.getType()<<std::endl;
}
