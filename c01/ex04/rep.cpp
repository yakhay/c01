/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:33:23 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/10 13:54:35 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rep.hpp"

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2){
	  std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open input file: " << filename << std::endl;
        return;
    }

    // Open the output file
    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open()) {
        std::cerr << "Failed to create output file: " << filename << ".replace" << std::endl;
        return;
    }
	std::string line;
	while (std::getline(inputFile,line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1,pos)) != std::string::npos)
		{
			line = line.substr(0,pos) + s2 + line.substr(pos + s1.length());
			pos = pos + s2.length();
		}
		outputFile << line << std::endl;
	}
	std::cout << "Replacement completed successfully. Modified content saved in " << filename << ".replace" << std::endl;
}
