#include<iostream>
#include"animal.h"
#include"Eagle.h"
using namespace std;


Eagle::Eagle(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, EAGLE)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void Eagle::initial()
{
	string buf = "Type: Eagle";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void Eagle::setAge(unsigned int a)
{
	Age = a;
}

int Eagle::getAge()const
{
	return Age;
}

void Eagle::setWeight(double a)
{
	Weight = a;
}

double Eagle::getWeight()const
{
	return Weight;
}

void Eagle::setBirthPlace()
{
	BirthPlace = "In China";
}

string Eagle::getBirthPlace()const
{
	return BirthPlace;
}

void Eagle::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string Eagle::getHobbies()const
{
	return Hobbies;
}

void Eagle::setSex(bool a)
{
	Sex = a;
}

bool Eagle::getSex()const
{
	return Sex;
}

void Eagle::setMarry(bool a)
{
	Marry = a;
}

bool Eagle::getMarry()const
{
	return Marry;
}
