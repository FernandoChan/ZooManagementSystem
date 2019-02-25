#include<iostream>
#include<string>
#include"Rabit.h"
using namespace std;

Rabit::Rabit(unsigned int age, double weight,const string& hobbiet ,
	bool sex, bool marry,const string&name,int number)
	// constructor
	:Animal(name,number,RABIT)
{
	setAge(age);
	// set the age of the animal
	setWeight(weight);
	// set the weight of the animal
	setBirthPlace();
	// set the birthplace of the animal
	setHobbies(hobbiet);
	// set the hobbies of the animal
	setSex(sex);
	// set the sex of the animal
	setMarry(marry);
	// set the marry condition of the animal
	initial();
}

// set the age of the animal
void Rabit::setAge(unsigned int a)
{
	Age = a;
}

// get the age of the animal
int Rabit::getAge()const
{
	return Age;
}

// set the weight of the animal
void Rabit::setWeight(double a)
{
	Weight = a;
}

// get the weight of the animal
double Rabit::getWeight()const
{
	return Weight;
}

// set the birthplace of the animal
void Rabit::setBirthPlace()
{
	BirthPlace = "In China";
}

// get the birthplace of the animal
string Rabit::getBirthPlace()const
{
	return BirthPlace;
}

// set the hobbies of the animal
void Rabit::setHobbies(const string& hobi)
{
	Hobbies = hobi;
}

string Rabit::getHobbies()const
{
	return Hobbies;
}

// set the sex of the animal
void Rabit::setSex(bool a)
{
	Sex = a;
}

// get the sex of the animal
bool Rabit::getSex()const
{
	return Sex;
}

// set the marry condition of the animal
void Rabit::setMarry(bool a)
{
	Marry = a;
}

// get the marry condition of the animal
bool Rabit::getMarry()const
{
	return Marry;
}

void Rabit::initial()
{
	string buf = "Type: Rabit";
	buf += '\n';
	buf += "Name: " + getName() + '\n';
	buf += "Age: " + to_string(Age) + '\n';
	buf += "Sex: " + Sex ? "Boy" : "Girl" + '\n';
	buf += "BirthPlace: " + BirthPlace + '\n';
	buf += "Hobbies: " + Hobbies + '\n';
	buf += "Weight: " + to_string(Weight) + '\n';
	setDescription(buf);
}