#include "Phonebook.hpp"
#include <iomanip>
#include <limits>

Phonebook::Phonebook() : nbContact(-1)
{
}

Phonebook::~Phonebook()
{
}

int	Phonebook::Get_nbContact() {
		return nbContact;
	}

int	Phonebook::DisplayAllContact()
{
	int	i = 0;
	int	cmd;

	std::cout << std::setw(10) << "Index" << "|" << std::setw(10)
			<< "First Name" << "|" << std::setw(10) << "Last Name"
			<< "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	if (i == nbContact && contacts[i].Get_Firstname() != "")
	{
		std::cout << std::setw(10) << i
		<< "|" << std::setw(10) << contacts[i].Get_Firstname()
		<< "|" << std::setw(10) << contacts[i].Get_Lastname()
		<< "|" << std::setw(10) << contacts[i].Get_Nickname()
		<< "|" << std::endl;
		i++;
	}
	while (i <= nbContact && contacts[i].Get_Firstname() != "")
	{
		std::cout << std::setw(10) << i
		<< "|" << std::setw(10) << contacts[i].Get_Firstname()
		<< "|" << std::setw(10) << contacts[i].Get_Lastname()
		<< "|" << std::setw(10) << contacts[i].Get_Nickname()
		<< "|" << std::endl;
		i++;
	}
	std::cout << "Select contact by index :" << std::endl;
	std::cin >> cmd;
	while (std::cin.fail() || ShowContact(cmd) == 1)
	{
		if (std::cin.eof())
			return(std::cout << "END OF FILE", 1);
		std::cout << "Your choice is incorrect" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> cmd;
	}
	return (0);
}

int	Phonebook::AddContact(std::string Fn, std::string Ln, std::string Nn,
	std::string Pn, std::string Ds)
{
	if (nbContact == 8)
		nbContact = -1;

	this->nbContact++;
	this->contacts[nbContact].Set_Firstname(Fn);
	this->contacts[nbContact].Set_Lastname(Ln);
	this->contacts[nbContact].Set_Nickname(Nn);
	this->contacts[nbContact].Set_PhoneNumber(Pn);
	this->contacts[nbContact].Set_DarkestSecret(Ds);
	return (0);
}

int	Phonebook::ShowContact(int i)
{
	if (contacts[i].Get_Firstname() == "")
		return (1);
	else
	{
		std::cout << contacts[i].Get_Firstname() << std::endl;
		std::cout << contacts[i].Get_Lastname() << std::endl;
		std::cout << contacts[i].Get_Nickname() << std::endl;
		std::cout << contacts[i].Get_PhoneNumber() << std::endl;
		std::cout << contacts[i].Get_DarkestSecret() << std::endl;
	}
	return (0);
}

int	Phonebook::GetUserInfo()
{
	std::string	Firstname;
	std::string	Lastname;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkSecret;

	std::cout << "Enter Firstname :" << std::endl;
	std::getline(std::cin, Firstname);
	if (std::cin.eof())
		return(std::cout << "END OF FILE", 1);

	std::cout << "Enter Lastname"  << std::endl;
	std::getline(std::cin, Lastname);
	if (std::cin.eof())
		return(std::cout << "END OF FILE", 1);

	std::cout << "Enter Nickname"  << std::endl;
	std::getline(std::cin, Nickname);
	if (std::cin.eof())
		return(std::cout << "END OF FILE", 1);

	std::cout << "Enter PhoneNumber"  << std::endl;
	std::getline(std::cin, PhoneNumber);
	if (std::cin.eof())
		return(std::cout << "END OF FILE", 1);

	std::cout << "Enter DarkSecret"  << std::endl;
	std::getline(std::cin, DarkSecret);
	if (std::cin.eof())
		return(std::cout << "END OF FILE", 1);
	AddContact(Firstname, Lastname, Nickname,
		PhoneNumber, DarkSecret);
	return (0);
}
