#include "ClapTrap.hpp"

void	noMoreEnergie(std::string str, std::string name)
{
	std::cout << name << " has No more Energie to " << str << "\n";
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor Called\n";
	this->name = "default";
	this->HitPoints = 10;
	this->energyPoints = 10;
	this->AttackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "ClapTrap copy Constructor Called\n";
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "ClapTrap copy assignment operator called\n";
	this->name = clapTrap.name;
	this->HitPoints= clapTrap.HitPoints;
	this->AttackDamage= clapTrap.AttackDamage;
	this->energyPoints= clapTrap.energyPoints;
	return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
	this->HitPoints = 10;
	this->energyPoints = 10;
	this->AttackDamage = 0;
	this->name = name;
	std::cout << "Constructor " << this->name << " called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->energyPoints)
	{
		noMoreEnergie("ATTACK", this->name);
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks, ";
	std::cout << target << " causing " << this->AttackDamage << " points of damage!\n";
	std::cout << "Energie : " << this->energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints <= 0)
	{
		std::cout << "WA BARAKA 2IKHAN\n";
		return ;
	}
	if ((int)(this->HitPoints - amount) < 0)
		this->HitPoints = 0;
	else
		this->HitPoints -= amount;
	std::cout << this->name << " takes " << amount << " of damage turning his healt to " << this->HitPoints <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
		noMoreEnergie("REPAIR", this->name);
	else
	{
		this->energyPoints--;
		int curr = this->HitPoints;
		this->HitPoints += amount;
		std::cout <<  this->name << " Repaired, Hit points " << curr << " updated to: " << this->HitPoints << std::endl;
		std::cout << "Energie : " << this->energyPoints << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " Destructor Called\n";
}
