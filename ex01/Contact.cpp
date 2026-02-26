#include "Contact.hpp"

std::string truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0,9) + ".";
	return str;
}

Contact::Contact(void)
{
}

void Contact::setFirstName(const std::string &firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

std::string Contact::getLastName()
{
	return this->lastName;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return this->darkestSecret;
}

void Contact::showRowInfo(void)
{
	std::cout << std::setw(10) << truncate(this->getFirstName()) << "|";
	std::cout << std::setw(10) << truncate(this->getLastName()) << "|";
	std::cout << std::setw(10) << truncate(this->getNickname()) << "|" << std::endl;
}

void Contact::showInfo()
{
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}
