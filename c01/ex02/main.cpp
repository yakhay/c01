/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:43:25 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/01 15:17:06 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
	std::string khay = "HI THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &khay;
	std::string &stringREF = khay;


	std::cout << &khay << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;


	std::cout << khay << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
