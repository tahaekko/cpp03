#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "unistd.h"

int main()
{
	FragTrap scav("🦦");
	scav.attack("🦀");
	scav.takeDamage(10);
	scav.beRepaired(40);
	scav.highFivesGuys();
}
