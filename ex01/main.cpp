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
		{
			std::cout << input << std::endl;
			std::cout << "Empty input is not allowed, try again." << std::endl;
		}
	}
	return input;
}

void addOperation(Contact &contact, Phonebook &phonebook)
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

void searchOperation(Phonebook phonebook)
{
	if (phonebook.isEmpty())
	{
		std::cout << "Empty phonebook" << std::endl;
		return ;
	}
	phonebook.showContacts();

	int index;
	do {
		std::cout << "Enter a index of the contact: ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Not a number" << std::endl;
		}
	} while (std::cin.fail());
	std::cin.ignore();
	phonebook.displayContact(index);
}

int main(void)
{
	Phonebook phonebook;
	Contact contact;
	std::string command;

	std::cout << "WELCOME TO PHONEBOOK!" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT\n" << std::endl;
	do {
		std::cout << "Choose the command: ";
		command = getInput(std::cin, "");
		if (command == "ADD")
			addOperation(contact, phonebook);
		else if (command == "SEARCH")
		{
			if (phonebook.isEmpty())
				std::cout << "Empty phonebook" << std::endl;
			else
				searchOperation(phonebook);
		}
	} while (command != "EXIT");
	std::cout << "Ending the program, bye bye!" << std::endl;
	return 0;
}
