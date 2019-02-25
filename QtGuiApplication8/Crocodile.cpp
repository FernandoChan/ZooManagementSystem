#include<iostream>
#include"animal.h"
#include"Crocodile.h"
using namespace std;


Crocodile::Crocodile(unsigned int age, double weight,
	const std::string& hobbies, bool sex, bool marry, const string& name, int number)
	:Animal(name, number, CROCODILE)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void Crocodile::initial()
{
	string buf = "Type: Crocodile";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Male" : "Female" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void Crocodile::setAge(unsigned int a)
{
	Age = a;
}

int Crocodile::getAge()const
{
	return Age;
}

void Crocodile::setWeight(double a)
{
	Weight = a;
}

double Crocodile::getWeight()const
{
	return Weight;
}

void Crocodile::setBirthPlace()
{
	BirthPlace = "In China";
}

string Crocodile::getBirthPlace()const
{
	return BirthPlace;
}

void Crocodile::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string Crocodile::getHobbies()const
{
	return Hobbies;
}

void Crocodile::setSex(bool a)
{
	Sex = a;
}

bool Crocodile::getSex()const
{
	return Sex;
}

void Crocodile::setMarry(bool a)
{
	Marry = a;
}

bool Crocodile::getMarry()const
{
	return Marry;
}
