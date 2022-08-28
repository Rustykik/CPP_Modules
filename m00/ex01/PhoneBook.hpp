#pragma once

#include <iostream>
#include <string>

#include <sstream>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact_list[8];
		int max;
		int current;

	public:
		PhoneBook();
		~PhoneBook();

		void add(void);
		void search(void);
};