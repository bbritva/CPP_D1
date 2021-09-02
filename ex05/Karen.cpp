//
// Created by Gregorio Velva on 8/29/21.
//

#include "Karen.hpp"

void Karen::debug()
{
	std::cout << DEBUG_MSG << std::endl;
}
void Karen::info()
{
	std::cout << INFO_MSG << std::endl;
}
void Karen::warning()
{
	std::cout << WARNING_MSG << std::endl;
}
void Karen::error()
{
	std::cout << ERROR_MSG << std::endl;
}

void Karen::complain( std::string level )
{
	int i;
	std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "Unknown level"};

	i = 0;
	while (levels[i] != level && i < 4)
		i++;
	while (i < 4)
	{
		typedef void (Karen::*Funcs[])(void);
		Funcs funcs = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
		(this->*(funcs[i]))();
		return;
	}
	std::cout << levels[i] << std::endl;
}

Karen::Karen()
{}

Karen::~Karen()
{
	std::cout << "me died :'(" << std::endl;
}


