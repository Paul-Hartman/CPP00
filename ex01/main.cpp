
#include <iostream>
#include <string>
#include "PhoneBook.hpp"


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
		{
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
			std::cout << "Please enter First Name:" << std::endl;
			std::getline(std::cin, firstName);
			std::cout << "Please enter Last Name:" << std::endl;
			std::getline(std::cin, lastName);
			std::cout << "Please enter nickname:" << std::endl;
			std::getline(std::cin, nickname);
			std::cout << "Please enter Phone Number:" << std::endl;
			std::getline(std::cin, phoneNumber);
			std::cout << "Please enter Darkest Secret:" << std::endl;
			std::getline(std::cin, darkestSecret);
			phoneBook.addContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
		}
		else if(input == "SEARCH")
		{
			// search();
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}