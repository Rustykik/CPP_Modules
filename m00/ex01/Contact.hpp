#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact();
		~Contact();

		bool set_info(int index);
		bool compare();
		void print_fields();
		void print_contact();
		void print_full_contact();
	
	private:
		int index;
		static std::string field_names[5];
		std::string field_values[5];

};