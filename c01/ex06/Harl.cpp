/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:03:15 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/10 14:22:12 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void  Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void  Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void  Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void  Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
	{
		std::string table[4] = {"DEBUG","INFO","WARNING","ERROR"};
		void (Harl::*arr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		int choice = return_index(level);
		switch (choice) {
			case 0:
				for (int i = 0; i < 4; i++) {
					std::cout << "[" << table[i] << "]" << std::endl;
					(this->*arr[i])();
					std::cout << "\n";
				}
				break;
			case 1:
				for (int i = 1; i < 4; i++) {
					std::cout << "[" << table[i] << "]" << std::endl;
					(this->*arr[i])();
					std::cout << "\n";
				}
				break;
			case 2:
				for (int i = 2; i < 4; i++) {
					std::cout << "[" << table[i] << "]" << std::endl;
					(this->*arr[i])();
					std::cout << "\n";
				}
				break;
			case 3:
				for (int i = 3; i < 4; i++) {
					std::cout << "[" << table[i] << "]" << std::endl;
					(this->*arr[i])();
					std::cout << "\n";
				}
				break;
			case 4:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
	}
}


