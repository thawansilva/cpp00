#include "Phonebook.hpp"

std::string getInput(std::basic_istream<char> &inputStream, std::string prompt)
{
	std::string input;
	bool valid = false;

	while (!valid)
	{
		std::cout << prompt;
		std::getline(inputStream, input);
		if (std::cin.eof())
		{
			std::cout << "\nEOF detected, closing the program." << std::endl;
			exit(0);
		}
		else if(!input.empty())
			valid = true;
		else
			std::cout << "Empty input is not allowed, try again." << std::endl;
	}
	return input;
}

int main(void)
{
	Phonebook phonebook;
	Contact contact;
	std::string command;

	std::cout << "WELCOME TO PHONEBOOK!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT\n" << std::endl;
	while (1)
	{
		std::cout << "Choose the command: ";
		command = getInput(std::cin, "");
		for (int i = 0; i < (int)command.length(); i++)
			command[i] = std::toupper(command[i]);
		if (command == "EXIT")
		{
			std::cout << "Ending the program, bye bye!" << std::endl;
			break ;
		}
		else if (command == "ADD")
		{
			std::cout << "FILL THE FOLLOWING INFORMATIONS:" << std::endl;
			contact.setFirstName(getInput(std::cin, "First name: "));
			contact.setLastName(getInput(std::cin, "Last name: "));
			contact.setNickname(getInput(std::cin, "Nickname: "));
			contact.setPhoneNumber(getInput(std::cin, "Phone number: "));
			contact.setDarkestSecret(getInput(std::cin, "Darkest secret: "));
			phonebook.addContact(contact);
			std::cout << "\nContact added sucessfully!" << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::cout << "Search Operation" << std::endl;
		}
		else
		{}
	}
	return 0;
}

//int main(void)
//{
//	Phonebook phonebook;
//	Contact contact;
//	contact.setFirstName("Thawan");
//	contact.setLastName("P.");
//	contact.setNickname("Apelido");
//	contact.setPhoneNumber("123456");
//	contact.setDarkestSecret("nothin");
//	phonebook.addContact(contact);
//	Contact contact2;
//	contact2.setFirstName("Thawan");
//	contact2.setLastName("P.");
//	contact2.setNickname("Apelido");
//	contact2.setPhoneNumber("123456");
//	contact2.setDarkestSecret("nothin");
//	phonebook.addContact(contact2);
//	phonebook.showContacts();
//	return 0;
//}
