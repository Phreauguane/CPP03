#include "ClapTrap.h"

int main()
{
	ClapTrap meow("meow");
	ClapTrap george("George");

	meow.attack("George");
	george.takeDamage(1);
	meow.beRepaired(1);
	george.attack("meow");
	meow.takeDamage(1);
	return 0;
}