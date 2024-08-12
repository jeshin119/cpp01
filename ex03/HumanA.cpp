#include "HumanA.hpp"

HumanA::HumanA(const std::string &paramName, Weapon &paramWeapon){
	_name = paramName;
	_Weapon = &paramWeapon;
}
HumanA::~HumanA(){
}
void	HumanA::attack(){
	std::cout<<_name<<" attacks with their "<<_Weapon->getType()<<"\n";
}
