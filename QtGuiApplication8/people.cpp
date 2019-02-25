#include"people.h"
#include<string>
using namespace std;



bool people::login(int num, const std::string& pass)const
{
	return num == number&&pass == password;
}
//definition for login function of class people

people::people(const string&n, int num, const std::string& pass, description des)
{
	setNumber(num);
	setDescription(des);
	setName(n);
	setPassword(pass);
}
//definition for constructor of class people
//initialize the number,description,name,password

bool people::setName(const std::string& n)
{
	//set name
	//and be sure that 
	//the name is true patten
	name = n;

	return true;
}
//definition for function setname of class people

bool people::setDescription(description des)
{
	if (des >= STAFF&&des <= TOURIST)
	{
		DES = des;
		return true;
	}
	else
		return false;
}
//definition for setDescription 
//sentence if the des is valid and initialize the DES

bool people::setNumber(int num)
{
	if (num>0)
	{
		number = num;
		return true;
	}
	else
		return false;
}
//definition for function setNumber
//sentence if the number is bigger than 0 and initialize number

bool people::setPassword(const std::string& pass)
{

	password = pass;
	return true;

}
//definition for function setPassword
//initialize the passwoord

description people::getDescription()const
{
	return DES;
}
//definition for function getDescription
//return bool DES 

int people::getNumber()const
{
	return number;
}
//definition for function getNumber
//return number

string people::getPassword()const
{
	return password;
}
//definition for function getPassword
//return password

string people::getName()const
{
	return name;
}
//definition for getName
//return name