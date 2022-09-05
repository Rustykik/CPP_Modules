#include "Brain.hpp"

const std::string Brain::THOUGTH_CAT = std::string("NEON CAT IS COOL");
const std::string Brain::THOUGTH_DOG = std::string("First we gonna rock, then we gonna roll");
const std::string Brain::THOUGTH_DEF = std::string("LET ME THINK DEFAULT");


Brain::Brain() {
	for (int i = 0; i < 100; ++i) {
		ideas[i] = THOUGTH_DEF;
	}
	std::cout << "Def brain created" << std::endl;
}

Brain::Brain(const std::string &type) {
	std::string thnk;
	if (type == "Cat")
		thnk = THOUGTH_CAT;
	else if (type == "Dog")
		thnk = THOUGTH_DOG;
	else
		thnk = THOUGTH_DEF;

	for (int i = 0; i < 100; ++i) {
		ideas[i] = thnk;
	}
	std::cout << type << " brain created" << std::endl;
}

Brain::Brain(const Brain &b) {
	for (int i = 0; i < 100; ++i) {
		ideas[i] = b.ideas[i];
	}
	std::cout << "DUP brain created" << std::endl;
}

Brain &Brain::operator= (const Brain &b) {
	for (int i = 0; i < 100; ++i) {
		ideas[i] = b.ideas[i];
	}
	std::cout << "ASSIGN brain created" << std::endl;
	return (*this);
}


Brain::~Brain() {
	std::cout << "Brain is going to vocation" << std::endl;
}