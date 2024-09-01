#include "ScavTrap.h"


ScavTrap::ScavTrap(): ClapTrap()
{
	hp = 100;
	energy = 50;
	damage = 20;
	gate = false;
	cout("ScavTrap " << name << ": ""Constructor called");
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	cout("ScavTrap " << name << ": ""Copy constructor called");
}

ScavTrap::ScavTrap(const std::string& _name): ClapTrap(_name)
{
	hp = 100;
	energy = 50;
	damage = 20;
	gate = false;
	cout("ScavTrap " << name << ": ""Constructor called");
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	name = copy.name;
	hp = copy.hp;
	energy = copy.energy;
	damage = copy.damage;
	gate = copy.gate;
	cout("ScavTrap " << name << ": ""Assignation operator called");

	return *this;
}