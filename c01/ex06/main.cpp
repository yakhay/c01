/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:08:17 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/05 17:48:29 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int return_index(std::string level)
{
	if (level == "DEBUG")
		return (0);
	else if (level == "INFO")
		return (1);
	else if (level == "WARNING")
		return (2);
	else if (level == "ERROR")
		return (3);
	return (4);
}

int main(int ac ,char **av)
{
	if (ac != 2)
	{
		std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
		return (0);
	}
	Harl obj;
	obj.complain(av[1]);
}
