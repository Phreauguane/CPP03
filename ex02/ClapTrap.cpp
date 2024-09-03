#include "ClapTrap.h"

ClapTrap::ClapTrap(): name("default"), hp(10), energy(10), damage(0)
{
	cout("ClapTrap " << name << ": ""Constructor called");
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	cout("ClapTrap " << name << " Copy constructor called");
}

ClapTrap::ClapTrap(const std::string& _name): name(_name), hp(10), energy(10), damage(0)
{
	cout("ClapTrap " << name << ": ""Constructor called");
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	name = copy.name;
	hp = copy.hp;
	energy = copy.energy;
	damage = copy.damage;
	cout("ClapTrap " << name << ": ""Assignation operator called");

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	energy--;
	cout("ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!");
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp >= amount)
		hp -= amount;
	else if (hp > 0)
		hp = 0;
	cout("ClapTrap " << name << " has been attacked and lost " << amount << " hp");
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy == 0)
		cout("ClapTrap " << name << " doesn't have enough energy to repair itself !");
	else if (hp == 0)
		cout("ClapTrap " << name << " doesn't have enough hp to repair itself !");
	else if (hp >= 10)
		cout("ClapTrap " << name << " already has " << hp << " hp !");
	else
	{
		energy--;
		hp += amount;
	}
}

ClapTrap::~ClapTrap()
{
	cout("ClapTrap " << name << ": ""Destructor called");
}