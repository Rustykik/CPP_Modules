#pragma once

#include <string>
#include <iostream>


class Brain {

		static const std::string THOUGTH_CAT;
		static const std::string THOUGTH_DOG;
		static const std::string THOUGTH_DEF;

		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &b);
		Brain &operator=(const Brain &b);
		Brain(const std::string &type);

		~Brain();

};