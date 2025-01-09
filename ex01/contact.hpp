#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	public: 
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		~Contact();

		std::string getFirstName();
		std::string getLastName();
		std::string getnickname();
		std::string getPhoneNumber();
		std::string getSecret();
	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_nickname;
		std::string m_phoneNumber;
		std::string m_darkestSecret;
};

#endif