#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::complain(std::string level){
	std::string cmp = "DEBUG,INFO,WARNING,ERROR";
	void (Harl::*ftab[4])()={&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	switch (cmp.find(level)){
		case 0:
			std::cout<<"[ DEBUG ]\n";
			(this->*ftab[0])();
			std::cout<<"\n";
		case 6:
			std::cout<<"[ INFO ]\n";
			(this->*ftab[1])();
			std::cout<<"\n";
		case 11:
			std::cout<<"[ WARNING ]\n";
			(this->*ftab[2])();
			std::cout<<"\n";
		case 19:
			std::cout<<"[ ERROR ]\n";
			(this->*ftab[3])();
			std::cout<<"\n";
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]\n";
	}
}

void	Harl::_debug(void){
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"<<"\n";
}

void	Harl::_info(void){
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<"\n";
}

void	Harl::_warning(void){
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<"\n";
}

void	Harl::_error(void){
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<"\n";
}