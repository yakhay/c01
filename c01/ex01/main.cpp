/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:34:57 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/10 14:18:05 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	int N;
	N = 10;
	Zombie *Zombie = zombieHorde(N, "yass");
	if (!Zombie)
		return (0);
	for (int i = 0; i < N; i++)
	{
		Zombie[i].announce();
	}
	delete [] Zombie;
	return (0);
}

