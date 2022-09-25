//
// Created by rubicon on 19.09.2022.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	_name = " ";
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &a){
	(void)a;
	std::cout << "Copy constructor called " << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &a){
	(void)a;
	std::cout << "Assignment operator called " << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (_ep > 0 && _hp > 0){
		std::cout << "ClapTrap attacks " << target << " and causes "
				  << _ad << " damage" << std::endl;
		_ep -= 1;
	}

}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "Oof! " << _name << " takes " << amount
				<<	" damage " << std::endl;
	_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_ep > 0 && _hp > 0){
		std::cout << _name << " repairs himself on " << amount
				  << " hp!" << std::endl;
		_hp += amount;
		_ep -= 1;
	}

}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}