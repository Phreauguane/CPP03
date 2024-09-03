#pragma once

#include "ScavTrap.h"

class FragTrap : public ScavTrap
{
	FragTrap();
	FragTrap(const FragTrap&);
	FragTrap(const std::string&);

	void highFivesGuys();

	virtual ~FragTrap();
};