/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:56:20 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/10 14:35:11 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void Harl::info( void )
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void Harl::warning( void )
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void Harl::error( void )
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain( std::string level )
	{
		std::string table[4] = {"DEBUG","INFO","WARNING","ERROR"};
		void (Harl::*arr[4]) (void)  = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		size_t i;
		for (i = 0; i < 4; i++)
		{
			if (level == table[i])
			{
				(this->*arr[i])();
				break ;
			}
		}
	}
