#include<iostream>
#include"animal.h"
#include"Lion.h"
using namespace std;


Lion::Lion(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, LION)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void Lion::initial()
{
	string buf = "Type: Lion";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void Lion::setAge(unsigned int a)
{
	Age = a;
}

int Lion::getAge()const
{
	return Age;
}

void Lion::setWeight(double a)
{
	Weight = a;
}

double Lion::getWeight()const
{
	return Weight;
}

void Lion::setBirthPlace()
{
	BirthPlace = "In China";
}

string Lion::getBirthPlace()const
{
	return BirthPlace;
}

void Lion::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string Lion::getHobbies()const
{
	return Hobbies;
}

void Lion::setSex(bool a)
{
	Sex = a;
}

bool Lion::getSex()const
{
	return Sex;
}

void Lion::setMarry(bool a)
{
	Marry = a;
}

bool Lion::getMarry()const
{
	return Marry;
}
