#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->HitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap Default Constructor Called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " is constructed\n";
	this->HitPoints = 100;
	this->energyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	std::cout << "copy of " << scav.name << " Created\n";
	*this = scav;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "ScavTrap " << this->name << " is copying from " << scav.name << std::endl;
	this->name = scav.name;
	this->HitPoints = scav.HitPoints;
	this->AttackDamage = scav.AttackDamage;
	this->energyPoints = scav.energyPoints;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " <<  this->name <<" Destructor Called\n";
}

void	ScavTrap::attack(const std::string target)
{
	if (!this->energyPoints)
	{
		noMoreEnergie("ATTACK", this->name);
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks, ";
	std::cout << target << " causing " << this->AttackDamage << " points of damage!\n";
	std::cout << "Energie : " << this->energyPoints << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout <<  "ScavTrap " <<this->name<< " is now in Gate keeper mode.\n";
}
