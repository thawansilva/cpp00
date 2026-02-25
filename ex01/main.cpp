#include "Phonebook.hpp"

std::string getLine(std::basic_istream<char> &input)
{
	std::string command;
	bool valid = false;

	while (!valid) {
		input >> command;
		// Finish this part
		return command;
	}
	return "";
}

int main(void)
{
	Phonebook phonebook;
	Contact contact;
	std::string command;

	std::cout << "Welcome to Phonebook!" << std::endl;
	std::cout << "Avaliable commands: ADD, SEARCH, EXIT\n" << std::endl;
	while (1)
	{
		std::cout << "Choose the command: ";
		command = getLine(std::cin);
		if (command == "EXIT") {
			break ;
		}
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
