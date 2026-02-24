#ifndef CONTACT.CLASS.HPP
#define CONTACT.CLASS.HPP
class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		void setFirstName(const std::string firstName);
		void setLastName(const std::string lastName);
		void setNickname(const std::string nickname);
		void setPhoneNumber(const std::string phoneNumber);
		void setDarkestSecret(const std::string darkestSecret);

		void getFirstName();
		void getLastName();
		void getNickname();
		void getPhoneNumber();
		void getDarkestSecret();
		void showInfo();
};
#endif
