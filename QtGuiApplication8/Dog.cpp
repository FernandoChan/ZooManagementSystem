#include<iostream>
#include"animal.h"
#include"Dog.h"
using namespace std;


dog::dog(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, Dog)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void dog::initial()
{
	string buf = "Type: Dog";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void dog::setAge(unsigned int a)
{
	Age = a;
}

int dog::getAge()const
{
	return Age;
}

void dog::setWeight(double a)
{
	Weight = a;
}

double dog::getWeight()const
{
	return Weight;
}

void dog::setBirthPlace()
{
	BirthPlace = "In China";
}

string dog::getBirthPlace()const
{
	return BirthPlace;
}

void dog::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string dog::getHobbies()const
{
	return Hobbies;
}

void dog::setSex(bool a)
{
	Sex = a;
}

bool dog::getSex()const
{
	return Sex;
}

void dog::setMarry(bool a)
{
	Marry = a;
}

bool dog::getMarry()const
{
	return Marry;
}
