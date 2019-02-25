#include "ice-cream.h"


void icecream::setPrice()
{
	price=1.0;
}
//set price

int icecream::getPrice()
{
	return price;
}
//get price function

void icecream::setNumber(int a)
{
	number=a;
}
//definition of function setNumber

int icecream::getNumber()
{
	return number;
}
//definition of getNumber function 

int icecream::TotalPrice()
{
	return price*number;
}
//definition of function for total price 

void icecream::setIntroduction()
{
	introduction="Ice-cream is a cool food in summer";
}
//introduction function

std::string icecream::getIntroduction()
{
	return introduction;
}
//definition of getIntroduction

void icecream::setFunction()
{
	function="Ice-cream can cool people";
}
//set "function" function

std::string icecream::getFunction()
{
	return function;
}
//definition of getFunction
