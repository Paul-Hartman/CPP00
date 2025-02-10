/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:26:57 by phartman          #+#    #+#             */
/*   Updated: 2025/02/10 16:59:31 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdlib> 
#include "PhoneBook.hpp"

std::string trimWhitespace(std::string &str)
{
	size_t start = 0;
	size_t end = str.length();
	while (start < str.length())
	{
		if (std::isspace(static_cast<unsigned char>(str[start])))
			start++;
		else
			break;
	}
	while (end > 0)
	{
		if (std::isspace(static_cast<unsigned char>(str[end - 1])))
			end--;
		else
			break;
	}
	str.erase(end);
	str.erase(0, start);
	return str;
}

void addContact(PhoneBook &phoneBook)
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	while (firstName.empty())
	{
		std::cout << "Please enter First Name:" << std::endl;
		if(!std::getline(std::cin, firstName)) exit(1);
		trimWhitespace(firstName);
	}
	while (lastName.empty())
	{
		std::cout << "Please enter Last Name:" << std::endl;
		if(!std::getline(std::cin, lastName)) exit(1);
		trimWhitespace(lastName);
	}
	while (nickname.empty())
	{
		std::cout << "Please enter nickname:" << std::endl;
		if(!std::getline(std::cin, nickname)) exit(1);
		trimWhitespace(nickname);
	}
	while(phoneNumber.empty())
	{
		std::cout << "Please enter Phone Number:" << std::endl;
		if(!std::getline(std::cin, phoneNumber)) exit(1);
		trimWhitespace(phoneNumber);
	}
	while (darkestSecret.empty())
	{
		std::cout << "Please enter Darkest Secret:" << std::endl;
		if(!std::getline(std::cin, darkestSecret)) exit(1);
		trimWhitespace(darkestSecret);
	}
	phoneBook.addContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	int index;
	PhoneBook phoneBook = PhoneBook();
	while (1)
	{
		std::string input;
		std::cout << "Enter a command(ADD, SEARCH or EXIT): " << std::endl;
		if(!std::getline(std::cin, input)) return 1;
		if(input == "EXIT")
			break;
		else if(input == "ADD")
			addContact(phoneBook);
		else if(input == "SEARCH")
		{
			phoneBook.printContacts();
			std::cout << "Choose the index of desired Contact" << std::endl;
			if(!std::getline(std::cin, input)) return 1;
			std::cout << std::endl;
			index = atoi(input.c_str());
			if(index == 0 && input != "0")
				std::cout << "Invalid index" << std::endl;
			else
				phoneBook.displayContact(index);
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}

