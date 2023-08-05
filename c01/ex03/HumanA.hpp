/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:04:53 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:11:37 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

#include "Weapon.hpp"

class HumanA {
	private :
	std::string name;
	Weapon	&weap;

	public :
	HumanA(std::string new_name, Weapon& new_weap);
	void attack(void);
};

#endif
