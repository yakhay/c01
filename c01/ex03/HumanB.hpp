/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:02:03 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:41:50 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

#include "Weapon.hpp"

class HumanB {
	private :
	std::string name;
	Weapon	*weap;

	public :
	HumanB(std::string new_name);
	void setweap(Weapon &new_weap);
	void attack(void);
};

#endif
