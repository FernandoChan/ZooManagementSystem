#include "postcard.h"


void postcard::setPrice()
{
	price=1.0;
}
//set price

int postcard::getPrice()
{
	return price;
}
//get price function

void postcard::setNumber(int a)
{
	number=a;
}
//definition of function setNumber

int postcard::getNumber()
{
	return number;
}
//definition of getNumber function 

int postcard::TotalPrice()
{
	return price*number;
}
//definition of function for total price 

void postcard::setIntroduction()
{
	introduction="Postcards show many animals' picture";
}
//introduction function

std::string postcard::getIntroduction()
{
	return introduction;
}
//definition of getIntroduction

void postcard::setFunction()
{
	function="Postcards can be used to send messages to whoever is far from you";
}
//set "function" function

std::string postcard::getFunction()
{
	return function;
}
//definition of getFunction
