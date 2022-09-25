//
// Created by Deadshot Gizzard on 7/11/22.
//

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
public:
	ClapTrap();
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


#endif //CLAPTRAP_H
