#include "sausage.h"


void sausage::setPrice()
{
	price=1.0;
}
//set price

int sausage::getPrice()
{
	return price;
}
//get price function

void sausage::setNumber(int a)
{
	number=a;
}
//definition of function setNumber

int sausage::getNumber()
{
	return number;
}
//definition of getNumber function 

int sausage::TotalPrice()
{
	return price*number;
}
//definition of function for total price 

void sausage::setIntroduction()
{
	introduction="Sausage is a food which is a long thing";
}
//introduction function

std::string sausage::getIntroduction()
{
	return introduction;
}
//definition of getIntroduction

void sausage::setFunction()
{
	function="Sausages is made of meat which can give people energy";
}
//set "function" function

std::string sausage::getFunction()
{
	return function;
}
//definition of getFunction
