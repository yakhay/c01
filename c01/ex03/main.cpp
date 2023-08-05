/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:36:36 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 17:43:27 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	Weapon club2 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setweap(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();
	return 0;
}
