#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "unistd.h"

int main()
{
	ScavTrap scav("Skikiv");
	scav.attack("50");
	scav.beRepaired(40);
	scav.takeDamage(10);
	scav.guardGate();
}
