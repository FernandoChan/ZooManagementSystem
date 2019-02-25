#include<iostream>
#include"animal.h"
#include"Mouse.h"
using namespace std;


Mouse::Mouse(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, MOUSE)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void Mouse::initial()
{
	string buf = "Type: Mouse";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void Mouse::setAge(unsigned int a)
{
	Age = a;
}

int Mouse::getAge()const
{
	return Age;
}

void Mouse::setWeight(double a)
{
	Weight = a;
}

double Mouse::getWeight()const
{
	return Weight;
}

void Mouse::setBirthPlace()
{
	BirthPlace = "In China";
}

string Mouse::getBirthPlace()const
{
	return BirthPlace;
}

void Mouse::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string Mouse::getHobbies()const
{
	return Hobbies;
}

void Mouse::setSex(bool a)
{
	Sex = a;
}

bool Mouse::getSex()const
{
	return Sex;
}

void Mouse::setMarry(bool a)
{
	Marry = a;
}

bool Mouse::getMarry()const
{
	return Marry;
}
