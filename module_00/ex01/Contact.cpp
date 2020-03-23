/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:32:19 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/16 19:32:50 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::create()
{
	std::cout << "First name: ";
	std::getline(std::cin, this->firstName);

	std::cout << "Last name: ";
	std::getline(std::cin, this->lastName);

	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);

	std::cout << "Login: ";
	std::getline(std::cin, this->login);

	std::cout << "Postal address: ";
	std::getline(std::cin, this->postal);

	std::cout << "Email: ";
	std::getline(std::cin, this->email);

	std::cout << "Phone: ";
	std::getline(std::cin, this->phone);

	std::cout << "Birthday date: ";
	std::getline(std::cin, this->birthday);

	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->meal);

	std::cout << "Underwear color: ";
	std::getline(std::cin, this->underwear);

	std::cout << "Your darkest secret: ";
	std::getline(std::cin, this->secret);

	this->index = counter++;
}

void Contact::showSnippet()
{
	std::string firstName = this->firstName;
	std::string lastName = this->lastName;
	std::string nickname = this->nickname;

	if (firstName.size() > 10)
		firstName.replace(9, firstName.size(), ".");
	if (lastName.size() > 10)
		lastName.replace(9, lastName.size(), ".");
	if (nickname.size() > 10)
		nickname.replace(9, nickname.size(), ".");

	std::cout << std::setw(10) << this->index << "|";
	std::cout << std::setw(10) << firstName << "|";
	std::cout << std::setw(10) << lastName << "|";
	std::cout << std::setw(10) << nickname;
}

void Contact::showFull()
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal << std::endl;
	std::cout << "Email: " << this->email << std::endl;
	std::cout << "Phone: " << this->phone << std::endl;
	std::cout << "Birthday date: " << this->birthday << std::endl;
	std::cout << "Favorite meal: " << this->meal << std::endl;
	std::cout << "Underwear color: " << this->underwear << std::endl;
	std::cout << "Your darkest secret: " << this->secret << std::endl;
}
