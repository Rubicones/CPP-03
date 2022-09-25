#include <iostream>
#include "ClapTrap.h"

int main( void ) {
	ClapTrap jelezyaka("Jelezyaka");

	jelezyaka.attack("suck");
	jelezyaka.beRepaired(10);
	jelezyaka.takeDamage(20);
	jelezyaka.beRepaired(10);

	return 0;
}