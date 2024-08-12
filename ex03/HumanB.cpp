#include "HumanB.hpp"

HumanB::HumanB(){
	_Weapon=0;
}
HumanB::HumanB(const std::string &paramName){
	_name=paramName;
}
HumanB::HumanB(const std::string &paramName, Weapon &paramWeapon){
	_name=paramName;
	_Weapon=&paramWeapon;
}
HumanB::~HumanB(){
}
void	HumanB::attack(){
	std::cout<<_name<<" attacks with their "<<_Weapon->getType()<<"\n";
}
void	HumanB::setWeapon(Weapon &paramWeapon){
	_Weapon=&paramWeapon;
}