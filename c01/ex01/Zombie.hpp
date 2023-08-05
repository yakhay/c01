/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:49:47 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 18:03:47 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <stdlib.h>

#include <iostream>
#include <string.h>

class Zombie{
	public :
		std::string name;
	public :
	Zombie();
	~Zombie();
	void setname(std::string namee);
	void announce(void);
};
Zombie* zombieHorde( int N, std::string name );

#endif
