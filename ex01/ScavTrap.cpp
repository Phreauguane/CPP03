#include "ScavTrap.h"


ScavTrap::ScavTrap(): ClapTrap()
{
	hp = 100;
	energy = 50;
	damage = 20;
	gate = false;
	cout("ScavTrap " << name << ": ""Constructor called");
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	gate = copy.gate;
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

void ScavTrap::attack(const std::string& target)
{
	energy--;
	cout("ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!");
}

void ScavTrap::guardGate()
{
	if (gate)
	{
		cout("ScavTrap " << name << " is already in Gate keeper mode");
		return ;
	}
	gate = true;
	cout("ScavTrap " << name << " is now in Gate keeper mode");
}

ScavTrap::~ScavTrap()
{
	cout("ScavTrap " << name << ": ""Destructor called");
}