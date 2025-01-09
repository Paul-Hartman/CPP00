#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP



#include <iostream>
#include "contact.hpp"

class PhoneBook {
	public: 
		PhoneBook();
		~PhoneBook();

		void addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		void search();

	private:
		Contact m_contacts[7];
		int m_contactCount;
		
};

#endif