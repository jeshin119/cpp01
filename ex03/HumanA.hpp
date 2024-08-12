#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA{
public:
	HumanA(const std::string &paramName, Weapon &paramWeapon);
	~HumanA();
	void	attack();
private:
	HumanA();
	Weapon	*_Weapon;
	std::string	_name;
};
#endif