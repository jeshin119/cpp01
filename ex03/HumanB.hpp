#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB{
public:
	HumanB();
	HumanB(const std::string &paramName);
	HumanB(const std::string &paramName, Weapon &paramWeapon);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &paramWeapon);
private:
	Weapon	*_Weapon;
	std::string	_name;
};
#endif