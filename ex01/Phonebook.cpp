#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->count = 0;
	this->oldestIndex = 0;
}

int Phonebook::getCount(void)
{
	return (this->count);
}

bool Phonebook::isEmpty(void)
{
	return (this->count == 0);
}

bool Phonebook::isFull(void)
{
	return (this->count == PHONEBOOK_SIZE);
}

void Phonebook::addContact(Contact &newContact)
{
	if (this->isFull()) {
		this->contacts[this->oldestIndex] = newContact;
		if (this->oldestIndex == PHONEBOOK_SIZE - 1)
			this->oldestIndex = -1;
		this->oldestIndex++;
		return ;
	}
	this->contacts[this->count] = newContact;
	this->count++;
}

void Phonebook::displayContact(int index)
{
	if (index < 0 || index >= this->count) {
		std::cout << "Invalid index or inexistent contact" << std::endl;
		return ;
	}
	Contact contact = this->contacts[index];
	contact.showInfo();
}

void Phonebook::showContacts(void)
{
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first Name";
	std::cout << "|" << std::setw(10) << "last Name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "|" << std::setfill('-') << std::setw(11);
	std::cout << "|" << std::setfill('-') << std::setw(11);
	std::cout << "|" << std::setfill('-') << std::setw(11);
	std::cout << "|" << std::setw(11) << "|" << std::endl;
	std::cout << std::setfill(' ');

	int i = -1;
	while (++i < this->count)
	{
		Contact contact = this->contacts[i];
		std::cout << "|" << std::setw(10) << i << "|";
		contact.showRowInfo();
		std::cout << "|" << std::setfill('-') << std::setw(11);
		std::cout << "|" << std::setfill('-') << std::setw(11);
		std::cout << "|" << std::setfill('-') << std::setw(11);
		std::cout << "|" << std::setw(11) << "|" << std::endl;
		std::cout << std::setfill(' ');
	}
}
