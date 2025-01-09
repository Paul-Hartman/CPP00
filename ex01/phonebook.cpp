#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	m_contactCount = 0;
}

PhoneBook::~PhoneBook() {}


void PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	m_contacts[m_contactCount] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	m_contactCount++;
	std::cout << "Contact added successfully\n" << std::endl;
	std::cout << m_contacts[m_contactCount - 1].getFirstName() << std::endl;
	if(m_contactCount >= 8)
		m_contactCount = 0;
}
