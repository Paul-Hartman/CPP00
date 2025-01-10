#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_contactCount = 0;
	m_index = 0;
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
	for(int i = 0; i < m_contactCount; i++)
	{
		
		std::cout << "|         " << i << "|";
		printColumn(m_contacts[i].getFirstName());
		printColumn(m_contacts[i].getLastName());
		printColumn(m_contacts[i].getNickname());
		std::cout << std::endl;
		// std::cout << m_contacts[i].getFirstName() << std::endl;
		// std::cout << m_contacts[i].getLastName() << std::endl;
		// std::cout << m_contacts[i].getNickname() << std::endl;
		// std::cout << m_contacts[i].getPhoneNumber() << std::endl;
		// std::cout << m_contacts[i].getFirstName() << std::endl;
		// std::cout << m_contacts[i].getSecret() << std::endl;
		// std::cout << std::endl;
	}
}

void PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	m_contacts[m_index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	m_index = (m_index + 1) % 8;
	if(m_contactCount < 8)
		m_contactCount++;
	std::cout << "Contact added successfully\n" << std::endl;
	printContacts();
}
