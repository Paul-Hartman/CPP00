/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:27:09 by phartman          #+#    #+#             */
/*   Updated: 2025/02/10 14:27:10 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
