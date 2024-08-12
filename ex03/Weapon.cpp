#include "Weapon.hpp"

Weapon::Weapon(){
}
Weapon::Weapon(std::string paramWeapon){
	setType(paramWeapon);
}
Weapon::~Weapon(){
}
const std::string&	Weapon::getType() const{
	return (_type);
}
void	Weapon::setType(const std::string &paramType){
	_type=paramType;
}