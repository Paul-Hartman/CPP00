/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:26:08 by phartman          #+#    #+#             */
/*   Updated: 2025/02/10 14:26:09 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	if(argc > 1)
	{
		std::string str;
		for(int i = 1; i < argc; i++)
			str += argv[i];
		for (size_t i = 0; i < str.length(); i++)
			str[i] = std::toupper(str[i]);
		std::cout << str;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}
