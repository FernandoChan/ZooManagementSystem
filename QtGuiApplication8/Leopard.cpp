#include<iostream>
#include"animal.h"
#include"Leopard.h"
using namespace std;



Leopard::Leopard(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, LEOPARD)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void Leopard::initial()
{
	string buf = "Type: Leopard";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}


void Leopard::setAge(unsigned int a)
{
	Age = a;
}


int Leopard::getAge()const
{
	return Age;
}


void Leopard::setWeight(double a)
{
	Weight = a;
}


double Leopard::getWeight()const
{
	return Weight;
}


void Leopard::setBirthPlace()
{
	BirthPlace = "In China";
}


string Leopard::getBirthPlace()const
{
	return BirthPlace;
}


void Leopard::setHobbies(const std::string& a)
{
	Hobbies = a;
}


string Leopard::getHobbies()const
{
	return Hobbies;
}


void Leopard::setSex(bool a)
{
	Sex = a;
}


bool Leopard::getSex()const
{
	return Sex;
}


void Leopard::setMarry(bool a)
{
	Marry = a;
}


bool Leopard::getMarry()const
{
	return Marry;
}

