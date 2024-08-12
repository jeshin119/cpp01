#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon{
public:
	Weapon(std::string paramWeapon);
	~Weapon();
	const std::string&	getType() const;
	void				setType(const std::string &paramType);
private:
	Weapon();
	std::string			_type;
};
#endif