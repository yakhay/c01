/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:00:46 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 17:14:39 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

int return_index(std::string level);
class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
	void complain(std::string level);
};
#endif
