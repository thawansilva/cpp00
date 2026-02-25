#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP 

#include "Contact.hpp"
#include <ostream>
#define PHONEBOOK_SIZE 8

class Phonebook
{
	public:
		Phonebook(void);
		int count;
		int oldestIndex;

		bool isFull(void);
		void showContacts(void);
		void displayContact(int index);
		void addContact(Contact &newContact);
		int getTotalContacts(void);

	private:
		Contact contacts[PHONEBOOK_SIZE];
};
#endif
