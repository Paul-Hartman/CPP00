#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP



#include <iostream>

class PhoneBook {
	public: 
		PhoneBook();
		~PhoneBook();

		void addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		void search();

	private:
		Contact contacts[7];
		
}

#endif