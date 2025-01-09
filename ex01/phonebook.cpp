#include phonebook.hpp

addContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	Contact contact(first_name, last_name, nickname, phone_number, darkest_secret);
	contacts.push_back(contact);
}
