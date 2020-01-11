/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalytvyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:53:13 by yalytvyn          #+#    #+#             */
/*   Updated: 2019/09/30 11:53:14 by yalytvyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
  public:
	Contact();
	~Contact();
	void setFirstName(std::string);
	void setLastName(std::string);
	void setNickname(std::string);
	void setLogin(std::string);
	void setPostal(std::string);
	void setPhone(std::string);
	void setBirthday(std::string);
	void setMeal(std::string);
	void setColor(std::string);
	void setSecret(std::string);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getLogin(void);
	std::string getPostal(void);
	std::string getPhone(void);
	std::string getBirthday(void);
	std::string getMeal(void);
	std::string getColor(void);
	std::string getSecret(void);
	void drawContact(int32_t);
	void drawContactFull(void);

  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postallAdress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underweatColor;
	std::string _darkestSecret;
};

#endif