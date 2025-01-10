#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP



#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	public: 
		PhoneBook();
		~PhoneBook();

		void addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		void printContacts();
		void displayContact(int index);

	private:
		void printColumn(std::string str);
		Contact m_contacts[8];
		int m_contactCount;
		int m_index;
		
};

#endif