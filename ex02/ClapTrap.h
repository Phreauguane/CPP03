#pragma once

#include <iostream>
#include <string>

#define cout(x) std::cout << x << std::endl

class ClapTrap
{
protected:
	std::string name;
	unsigned int hp, energy, damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap(const std::string&);
	ClapTrap& operator=(const ClapTrap&);
	void attack(const std::string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);
	virtual ~ClapTrap();
};
