/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:26:51 by phartman          #+#    #+#             */
/*   Updated: 2025/02/10 14:33:09 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
: _firstName(first_name), _lastName(last_name), _nickname(nickname), _phoneNumber(phone_number), _darkestSecret(darkest_secret){
}

Contact::~Contact() {}

std::string Contact::getFirstName()
{
	return _firstName;
}

std::string Contact::getLastName()
{
	return _lastName;
}

std::string Contact::getNickname()
{
	return _nickname;
}

std::string Contact::getPhoneNumber()
{
	return _phoneNumber;
}

std::string Contact::getSecret()
{
	return _darkestSecret;
}

