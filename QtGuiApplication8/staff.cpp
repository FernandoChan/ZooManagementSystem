#include"staff.h"
#include<string>
#include"people.h"
#include<vector>
using namespace std;

staff::staff(const string& name, int n, const string& pass)
	:people(name, n, pass, STAFF)
{
	
}


string staff::toString()const
{
	string buf = "";
	buf += "Staff: " + getName() + '\n';

	return buf;
}
//definition for function toString 
//this function is used to get a string which shows the Staff's name

string staff::name_of_animal()const
{
	string buf = "";

	for (int i = 0; i < pets.size(); i++)
	{
		switch (pets[i]->getType())
		{
		case Tiger:
			buf += "Tiger ";
			break;
		case Cat:
			buf += "Cat ";
			break;
		case Dog:
			buf += "Dog ";
			break;
		case RABIT:
			buf += "Rabit";
			break;
		case LION:
			buf += "Lion";
			break;
		case MOUSE:
			buf += "Mouse";
			break;
		case SWALLOW:
			buf += "Swallow";
				break;
		case EAGLE:
			buf += "Eagle";
			break;
		case CROCODILE:
			buf += "Crocodile";
			break;
		case LEOPARD:
			buf += "Leopard";
			break;
		default:
			break;
		}
		buf += '\n';
	}

	buf += '\n';

	return buf;
}

//function which will be used to give animals' name

string staff::toInformation()const
{
	string buf = toString();
	buf += "\n";
	buf += "Your animals:";
	buf += '\n';
	for (auto a : pets)
	{
		buf += a->getDescription() + '\n';
	}
	buf += "\n";
	return buf;

}
//definition for function toInformation
//this function is used to get a description about what the staff should do

int staff::indexOf(const string& name)const
{
	int size = pets.size();
	for (int i = 0; i < size; i++)
	{
		if (name == pets[i]->getName())
			return i;
	}
	return -1;
}
//definition for function indexOf
//sentence what is the pet

int staff::find_first_of(description des)const
{
	for (int i = 0; i < pets.size(); i++)
	{
		if (des == pets[i]->getType())
			return i;
	}

	return -1;
}
//definition for function find_first_of
//sentence if des matches the animal type and return the position where it matches


void staff::add(Animal* aAnimal)
{
	pets.push_back(aAnimal);
}
//definition for function add
//out back the animal which has been used before

string staff::getMessage()const
{
	return message;
}
//definition for function getMessage
//return message

void staff::setMessage(const string& mes)
{
	message = mes;
}
//definition for function setMessage
//initialize the message

void staff::setPets(const vector<Animal*>&pet)
{
	this->pets = pet;
}
//function which will be used to set pets

vector<Animal*> staff::getPet()const
{

	return pets;
}
//function which will be used to get pets