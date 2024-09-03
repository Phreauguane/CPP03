#include "FragTrap.h"


FragTrap::FragTrap(): ClapTrap()
{
	hp = 100;
	energy = 100;
	damage = 30;
	cout("FragTrap " << name << " Constructor called");
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy)
{
	cout("FragTrap " << name << " Copy constructor called");
}

FragTrap::FragTrap(const std::string&): ClapTrap(name)
{
	hp = 100;
	energy = 100;
	damage = 30;
	cout("FragTrap " << name << " Constructor called");
}

void FragTrap::highFivesGuys()
{
	cout("FragTrap " << name << " wants a High Five");
}

FragTrap::~FragTrap()
{
	cout("FragTrap " << name << " Destructor called");
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	name = copy.name;
	hp = copy.hp;
	energy = copy.energy;
	damage = copy.damage;
	cout("FragTrap " << name << " Assignation opertor called");
	return *this;
}