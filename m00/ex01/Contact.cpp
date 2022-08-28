#include "Contact.hpp"

std::string Contact::field_names[5] = {
        "First name",
        "Last name",
        "Nichkname",
        "Phone number",
        "Darkest secret"
};

Contact::Contact() {
	for (size_t i = 0; i < 5; ++i) {
        this->field_values[i] = std::string();
    }
}

Contact::~Contact() {}

bool Contact::set_info(int index) {
    this->index = index;
    for (size_t i = 0; i < 5; ++i) {
        std::cout << "> " << Contact::field_names[i] << ": ";
        std::getline(std::cin, this->field_values[i]);
    }
    for (size_t i = 0; i < 5; ++i) {
        if (this->field_values[i].length() == 0) {
            for (size_t i = 0; i < 5; ++i) {
                this->field_values[i] = std::string();
			}
            return (false);
        }
    }
    return (true);
}

void Contact::print_contact() {
    std::cout << "|" << std::setw(10) << this->index;
    for (size_t i = 0; i < 3; ++i)
    {
        std::cout << "|";
        if (this->field_values[i].length() > 10)
            std::cout << this->field_values[i].substr(0,9) << '.';
        else
            std::cout << std::setw(10) << this->field_values[i];
    }
    std::cout << "|" << std::endl;
}

void Contact::print_full_contact() {
	if (this->field_values[0].length() == 0) {
		std::cout << "invalid index" << std::endl;
		return ;
	}
	for (int i = 0; i < 5; ++i) {
		std::cout << this->field_names[i] << " : " << this->field_values[i] << std::endl;
	}
}

bool Contact::compare()
{
	if (this->field_values[0].length() > 0)
		return (true);
	return (false);
}
