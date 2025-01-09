#include "contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	m_firstName = first_name;
	m_lastName = last_name;
	m_nickname = nickname;
	m_phoneNumber = phone_number;
	m_darkestSecret = darkest_secret;
}

std::string Contact::getFirstName()
{
	return m_firstName;
}

std::string Contact::getLastName()
{
	return m_lastName;
}

std::string Contact::getnickname()
{
	return m_nickname;
}

std::string Contact::getPhoneNumber()
{
	return m_phoneNumber;
}

std::string Contact::getSecret()
{
	return m_darkestSecret;
}

Contact::~Contact() {}