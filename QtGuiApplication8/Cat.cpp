#include<iostream>
#include"animal.h"
#include"Cat.h"
using namespace std;


cat::cat(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, Cat)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void cat::initial()
{
	string buf = "Type: Cat";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void cat::setAge(unsigned int a)
{
	Age = a;
}

int cat::getAge()const
{
	return Age;
}

void cat::setWeight(double a)
{
	Weight = a;
}

double cat::getWeight()const
{
	return Weight;
}

void cat::setBirthPlace()
{
	BirthPlace = "In China";
}

string cat::getBirthPlace()const
{
	return BirthPlace;
}

void cat::setHobbies(const std::string& a = "likes to eat fish? or not, we don't know")
{
	Hobbies = a;
}

string cat::getHobbies()const
{
	return Hobbies;
}

void cat::setSex(bool a)
{
	Sex = a;
}

bool cat::getSex()const
{
	return Sex;
}

void cat::setMarry(bool a)
{
	Marry = a;
}

bool cat::getMarry()const
{
	return Marry;
}
