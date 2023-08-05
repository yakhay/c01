/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:58:34 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/10 14:15:05 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rep.hpp"

int main(int ac, char* av[]) {
	std::cout<<ac<<std::endl;
	if (ac != 4) {
		std::cerr << "Invalid arguments" << std::endl;
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (!s1[0]) {
		std::cerr << "Invalid arguments" << std::endl;
		return 1;
	}
	replaceStringInFile(filename, s1, s2);
	return 0;
}

// std::cout << std::string::npos << "nops" << std::endl;
// std::cout << line.find(s1,pos)<< "find" << std::endl;
