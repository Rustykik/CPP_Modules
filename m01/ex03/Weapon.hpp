#pragma once
#include <string>

class Weapon {
	public:
		Weapon();
		Weapon( std::string name );
		~Weapon();
		void setType( std::string type );
		// why const
		std::string const &getType( void ) const;
	private:
		std::string type;
};