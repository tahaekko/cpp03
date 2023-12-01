#include "ClapTrap.hpp"
#include "unistd.h"

int main()
{
	ClapTrap clap("taha");

	clap.attack("smn");
	clap.takeDamage(5);
	clap.takeDamage(5);

	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");
	clap.attack("smn");

	ClapTrap cp = clap;
	cp.beRepaired(5);
}
