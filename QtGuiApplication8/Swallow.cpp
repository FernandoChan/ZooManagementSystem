#include<iostream>
#include"animal.h"
#include"Swallow.h"
using namespace std;


Swallow::Swallow(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, SWALLOW)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void Swallow::initial()
{
	string buf = "Type: Swallow";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Boy" : "Girl" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void Swallow::setAge(unsigned int a)
{
	Age = a;
}

int Swallow::getAge()const
{
	return Age;
}

void Swallow::setWeight(double a)
{
	Weight = a;
}

double Swallow::getWeight()const
{
	return Weight;
}

void Swallow::setBirthPlace()
{
	BirthPlace = "In China";
}

string Swallow::getBirthPlace()const
{
	return BirthPlace;
}

void Swallow::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string Swallow::getHobbies()const
{
	return Hobbies;
}

void Swallow::setSex(bool a)
{
	Sex = a;
}

bool Swallow::getSex()const
{
	return Sex;
}

void Swallow::setMarry(bool a)
{
	Marry = a;
}

bool Swallow::getMarry()const
{
	return Marry;
}
