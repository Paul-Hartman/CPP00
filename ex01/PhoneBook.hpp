#pragma once

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
		Contact _contacts[8];
		int _contactCount;
		int _index;
		
};
