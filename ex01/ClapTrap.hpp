#include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int	HitPoints;
	unsigned int energyPoints;
	unsigned int AttackDamage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& clapTrap);
	ClapTrap& operator=(const ClapTrap& clapTrap);
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
