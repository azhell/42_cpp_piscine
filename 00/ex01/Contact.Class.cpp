/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:53:07 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/09/30 11:53:09 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact()
{
	return;
}
Contact::~Contact()
{
	return;
}

void Contact::drawContact(int32_t id)
{
	std::cout << std::setw(10) << id;
	std::cout << "|";
	if (_firstName.length() > 10)
	{
		std::cout << std::setw(10) << _firstName.substr(0, 9) + ".|";
	}
	else
	{
		std::cout << std::setw(11) << _firstName + "|";
	}
	if (_lastName.length() > 10)
	{
		std::cout << std::setw(10) << _lastName.substr(0, 9) + ".|";
	}
	else
	{
		std::cout << std::setw(11) << _lastName + "|";
	}
	if (_nickname.length() > 10)
	{
		std::cout << std::setw(10) << _nickname.substr(0, 9) + ".|";
	}
	else
	{
		std::cout << std::setw(11) << _nickname + "|";
	}
	std::cout << std::endl;
}

void Contact::drawContactFull()
{
	std::cout << getFirstName() + "\n";
	std::cout << getLastName() + "\n";
	std::cout << getNickname() + "\n";
	std::cout << getLogin() + "\n";
	std::cout << getPostal() + "\n";
	std::cout << getPhone() + "\n";
	std::cout << getBirthday() + "\n";
	std::cout << getMeal() + "\n";
	std::cout << getColor() + "\n";
	std::cout << getSecret() + "\n";
}

void Contact::setFirstName(std::string str)
{
	this->_firstName = str;
}

void Contact::setLastName(std::string str)
{
	this->_lastName = str;
}

void Contact::setNickname(std::string str)
{
	this->_nickname = str;
}

void Contact::setLogin(std::string str)
{
	this->_login = str;
}

void Contact::setPostal(std::string str)
{
	this->_postallAdress = str;
}

void Contact::setPhone(std::string str)
{
	this->_phoneNumber = str;
}

void Contact::setBirthday(std::string str)
{
	this->_birthdayDate = str;
}

void Contact::setMeal(std::string str)
{
	this->_favoriteMeal = str;
}

void Contact::setColor(std::string str)
{
	this->_underweatColor = str;
}

void Contact::setSecret(std::string str)
{
	this->_darkestSecret = str;
}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getLastName()
{
	return (this->_lastName);
}

std::string Contact::getNickname()
{
	return (this->_nickname);
}

std::string Contact::getLogin()
{
	return (this->_login);
}

std::string Contact::getPostal()
{
	return (this->_postallAdress);
}

std::string Contact::getPhone()
{
	return (this->_phoneNumber);
}

std::string Contact::getBirthday()
{
	return (this->_birthdayDate);
}

std::string Contact::getMeal()
{
	return (this->_favoriteMeal);
}

std::string Contact::getColor()
{
	return (this->_underweatColor);
}

std::string Contact::getSecret()
{
	return (this->_darkestSecret);
}