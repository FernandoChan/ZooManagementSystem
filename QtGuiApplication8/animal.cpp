/* C++ Group Project
* Zoo management system
* Presented By Group:
* Member list:
*	 16计联：
*		陈星宇
*		杨喆
*	 16计创：
*      蒋怿
*      陈效威
*/

/* animal.cpp
* The base class of each derived class of different species of animal class
* The private member is number name and the type name.
* And the main feature of this class is set and get the information above.
*/

#include"animal.h"
#include<iostream>
#include<string>
using namespace std;

Animal::Animal(const string& n, int number, Animals_class cla)
{
	setNumber(number);
	setName(n);
	setType(cla);
}

bool Animal::setNumber(int numb)
{
	if (numb > 0)
	{
		number = numb;
		return true;
	}
	else
		return false;
}

bool Animal::setName(const string &names)
{
	name = names;
	return true;
}

bool Animal::setType(Animals_class clas)
{
	if (clas >= Tiger&&clas <=RABIT)
	{
		type = clas;
		return true;
	}
	return false;
}

int Animal::getNumber()const
{
	return number;
}

Animals_class Animal::getType()const
{
	return type;
}

string Animal::getName()const
{
	return name;
}


string Animal::getDescription()const
{
	return description;
}

void Animal::setDescription(const string& des)
{
	description = des;
}