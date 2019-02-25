#include "mascot.h"


void mascot::setPrice()
{
	price=1.0;
}
//set price

int mascot::getPrice()
{
	return price;
}
//get price function

void mascot::setNumber(int a)
{
	number=a;
}
//definition of function setNumber

int mascot::getNumber()
{
	return number;
}
//definition of getNumber function 

int mascot::TotalPrice()
{
	return price*number;
}
//definition of function for total price 

void mascot::setIntroduction()
{
	introduction="Mascots are virtual animals";
}
//introduction function

std::string mascot::getIntroduction()
{
	return introduction;
}
//definition of getIntroduction

void mascot::setFunction()
{
	function="Mascots are used to be played by children or as a show";
}
//set "function" function

std::string mascot::getFunction()
{
	return function;
}
//definition of getFunction
