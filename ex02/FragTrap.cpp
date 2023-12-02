#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << this->name << " is Constructed\n";
	this->HitPoints = 100;
	this->energyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " Deconstructed\n";
}

FragTrap::FragTrap(const FragTrap& frag)
{
	std::cout << "FragTrap "<< this->name << "copy constructor called\n";
	*this = frag;
}

FragTrap& FragTrap::operator=(const FragTrap& frag)
{
	std::cout << "FragTrap " << frag.name << " is copied\n";
	this->name = frag.name;
	this->AttackDamage = frag.AttackDamage;
	this->energyPoints = frag.energyPoints;
	this->HitPoints = frag.HitPoints;
	return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->name << " is Constructed\n";
	this->HitPoints = 100;
	this->energyPoints = 100;
	this->AttackDamage = 30;
}

void	FragTrap::attack(const std::string target)
{
	if (!this->energyPoints)
	{
		noMoreEnergie("ATTACK", this->name);
		return ;
	}
	this->energyPoints--;
	std::cout << "FragTrap" << this->name << " attacks, ";
	std::cout << target << " causing " << this->AttackDamage << " points of damage!\n";
	std::cout << "Energie : " << this->energyPoints << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " High Fives\n";
}
