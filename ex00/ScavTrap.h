//
// Created by Deadshot Gizzard on 7/11/22.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.h"

class ScavTrap: private ClapTrap{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &a);
	ClapTrap &operator=(const ClapTrap &a);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
private:
	std::string _name;
	int	 _hp;
	int  _ep;
	int  _ad;
};


#endif //SCAVTRAP_H
