/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:25:28 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:16:31 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP

#include <iostream>

class Weapon {
	private :
	 std::string type;

	public :
	Weapon (std::string str);
	std::string getType();
	void setType(const std::string new_type);
};

#endif
