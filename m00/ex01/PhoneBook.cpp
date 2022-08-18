#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->max = 8;
	this->current = 0;
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::add(void)
{
	if (this->current == this->max)
		this->current = 0;
	if (!(this->contact_list[this->current].set_info(this->current)))
	{
		std::cout << "Empty contact is not added\n";
		return ;
	}
	this->current++;
}

void	PhoneBook::print(int index)
{
	if (index == -1)
	{
		this->contact_list[this->current - 1].print_contact();
		return;
	}
	this->contact_list[index].print_contact();
}

void	PhoneBook::search(void)
{
	std::string str;
	std::stringstream stringstream;
	int ind;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->max; i++)
		if (this->contact_list[i].compare())
			this->contact_list[i].print_contact();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "$ index of the entry to display: ";
	std::getline(std::cin, str);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Invalid index" << std::endl;
			return ; 
		}
	}
	stringstream << str;
	stringstream >> ind;
	if (ind < 0 || ind > this->max)
	{
		std::cout << "Invalid index" << std::endl;
		return ; 
	}
	this->contact_list[ind].print_full_contact();
}