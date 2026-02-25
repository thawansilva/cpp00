#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->count = 0;
	this->oldestIndex = 0;
}

bool Phonebook::isFull(void)
{
	return (this->count == PHONEBOOK_SIZE - 1);
}

void Phonebook::addContact(Contact &newContact)
{
	if (this->isFull()) {
		this->contacts[this->oldestIndex] = newContact;
		if (this->oldestIndex == 7)
			this->oldestIndex = -1;
		this->oldestIndex++;
		return ;
	}
	this->contacts[this->count] = newContact;
	this->count++;
}

void Phonebook::displayContact(int index)
{
	Contact contact = this->contacts[index];
	contact.showInfo();
}

void Phonebook::showContacts(void)
{
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first Name";
	std::cout << "|" << std::setw(10) << "last Name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;

	int i = -1;
	while (++i <= this->count)
	{
		Contact contact = this->contacts[i];
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << "|" << std::setw(10) << contact.showRowInfo() << "|";
		std::cout << "|";
		std::cout << std::setfill('-') << std::setw(44) << "|" << std::endl;
	}
}
