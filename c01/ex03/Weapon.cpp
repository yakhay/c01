/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:12:23 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:13:39 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string str)
{
	type = str;
}
std::string Weapon::getType()
{
	return (type);
}
void Weapon::setType(const std::string new_type)
{
	type = new_type;
}
