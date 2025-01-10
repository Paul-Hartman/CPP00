
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
		std::getline(std::cin, firstName);
		trimWhitespace(firstName);
	}
	while (lastName.empty())
	{
		std::cout << "Please enter Last Name:" << std::endl;
		std::getline(std::cin, lastName);
		trimWhitespace(lastName);
	}
	while (nickname.empty())
	{
		std::cout << "Please enter nickname:" << std::endl;
		std::getline(std::cin, nickname);
		trimWhitespace(nickname);
	}
	while(phoneNumber.empty())
	{
		std::cout << "Please enter Phone Number:" << std::endl;
		std::getline(std::cin, phoneNumber);
		trimWhitespace(phoneNumber);
	}
	while (darkestSecret.empty())
	{
		std::cout << "Please enter Darkest Secret:" << std::endl;
		std::getline(std::cin, darkestSecret);
		trimWhitespace(darkestSecret);
	}
	phoneBook.addContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	PhoneBook phoneBook = PhoneBook();
	while (1)
	{
		std::string input;
		std::cout << "Enter a command(ADD, SEARCH or EXIT): " << std::endl;
		std::getline(std::cin, input);
		if(input == "EXIT")
			break;
		else if(input == "ADD")
			addContact(phoneBook);
		else if(input == "SEARCH")
		{
			phoneBook.printContacts();
			std::cout << "Choose the index of desired Contact" << std::endl;
			std::getline(std::cin, input);
			std::cout << std::endl;
			phoneBook.displayContact(std::atoi(input.c_str()));
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}

