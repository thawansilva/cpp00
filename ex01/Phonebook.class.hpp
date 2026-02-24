#include "Contact.class.hpp"

#ifndef PHONEBOOK.CLASS.HPP
#define PHONEBOOK.CLASS.HPP 
class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);

		bool isFull();
		void showContacts();
		void search(int index);
		void add(Contact &newContact);
		int getTotalContacts();

	private:
		Contact contacts[8];
};
#endif
