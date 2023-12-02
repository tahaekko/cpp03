#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap& frag);
	FragTrap& operator=(const FragTrap& frag);
	FragTrap(std::string name);
	void	attack(const std::string target);
	void highFivesGuys(void);
};
