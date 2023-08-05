/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:26:56 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/10 13:50:46 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
	{
		std::cout << "invalid num" <<std::endl;
		return (NULL);
	}
	Zombie *tab_Zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		tab_Zombie[i].setname(name);
	}
	return (tab_Zombie);
}
