/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:34:57 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 14:29:20 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie1 = newZombie("yassine");
	Zombie1->announce();
	randomChump("khay");
	delete (Zombie1);
}
