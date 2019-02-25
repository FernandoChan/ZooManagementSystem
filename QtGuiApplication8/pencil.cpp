#include "pencil.h"


void pencil::setPrice()
{
	price=1.0;
}
//set price

int pencil::getPrice()
{
	return price;
}
//get price function

void pencil::setNumber(int a)
{
	number=a;
}
//definition of function setNumber

int pencil::getNumber()
{
	return number;
}
//definition of getNumber function 

int pencil::TotalPrice()
{
	return price*number;
}
//definition of function for total price 

void pencil::setIntroduction()
{
	introduction="Pencils have many animals' picture";
}
//introduction function

std::string pencil::getIntroduction()
{
	return introduction;
}
//definition of getIntroduction

void pencil::setFunction()
{
	function="Pencil can be used to write messages";
}
//set "function" function

std::string pencil::getFunction()
{
	return function;
}
//definition of getFunction
