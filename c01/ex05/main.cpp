/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:09:04 by yakhay            #+#    #+#             */
/*   Updated: 2023/06/09 16:54:34 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl obj;
    obj.complain("DEBUG");
	obj.complain("WARNING");
	obj.complain("INFO");
	obj.complain("ER");
	return 0;
}
