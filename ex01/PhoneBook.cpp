#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_contactCount = 0;
	_index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::printColumn(std::string str)
{
	int len = str.length();
	if(len > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		for(int i = len; i < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}

void PhoneBook::printContacts()
{
	for(int i = 0; i < _contactCount; i++)
	{
		
		std::cout << "|         " << i << "|";
		printColumn(_contacts[i].getFirstName());
		printColumn(_contacts[i].getLastName());
		printColumn(_contacts[i].getNickname());
		std::cout << std::endl;
	}
}

void PhoneBook::displayContact(int index)
{
	if(index < 0 || index >= _contactCount)
	{
		std::cout << "Invalid index\n" << std::endl;
		return;
	}
	std::cout << _contacts[index].getFirstName() << std::endl;
	std::cout << _contacts[index].getLastName() << std::endl;
	std::cout << _contacts[index].getNickname() << std::endl;
	std::cout << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << _contacts[index].getFirstName() << std::endl;
	std::cout << _contacts[index].getSecret() << std::endl;
	std::cout << std::endl;
}
	


void PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_contacts[_index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	_index = (_index + 1) % 8;
	if(_contactCount < 8)
		_contactCount++;
	std::cout << "Contact added successfully\n" << std::endl;
}
