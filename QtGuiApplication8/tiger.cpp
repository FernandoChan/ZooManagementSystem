#include<iostream>
#include"animal.h"
#include"tiger.h"
using namespace std;


tiger::tiger(unsigned int age , double weight,
	const std::string& hobbies, bool sex, bool marry ,const string& name,int number)
	:Animal(name,number,Tiger)
{
	setAge(age);
	setWeight(weight);
	setBirthPlace();
	setHobbies(hobbies);
	setSex(sex);
	setMarry(marry);
	initial();
}

void tiger::initial()
{
	string buf = "Type: Tiger";
	buf += '\n';
	buf += "Name: " + getName()+'\n';
	buf += "Age: " + to_string(Age)+'\n';
	buf += "Sex: " + Sex? "Boy" : "Girl" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}

void tiger::setAge(unsigned int a)
{
	Age = a;
}

int tiger::getAge()const
{
	return Age;
}

void tiger::setWeight(double a)
{
	Weight = a;
}

double tiger::getWeight()const
{
	return Weight;
}

void tiger::setBirthPlace()
{
	BirthPlace = "In China";
}

string tiger::getBirthPlace()const
{
	return BirthPlace;
}

void tiger::setHobbies(const std::string& a)
{
	Hobbies = a;
}

string tiger::getHobbies()const
{
	return Hobbies;
}

void tiger::setSex(bool a)
{
	Sex = a;
}

bool tiger::getSex()const
{
	return Sex;
}

void tiger::setMarry(bool a)
{
	Marry = a;
}

bool tiger::getMarry()const
{
	return Marry;
}
