#pragma once
#ifndef PEOPLE_H
#define PEOPLE_H
#include<string>
#include<iostream>
enum description { STAFF, MASTER, TOURIST };
//declaration of enum type object

class people
{
private:
	int number;
	std::string password;
	description DES;
	std::string name;
public:
	people(const std::string& = "", int = 0, const std::string& = "", description = TOURIST);
	//constructor for class people  

	bool setName(const std::string &);
	//bool type function setname
	bool setNumber(int);
	//bool type function setnumber
	bool setPassword(const std::string&);
	//bool type function setPassword
	bool setDescription(description);
	//bool type function setDescription

	std::string getName()const;
	//string type function getname
	int getNumber()const;
	//int type function getnumber
	std::string getPassword()const;
	//string type function getPassword

	description getDescription()const;
	//description type function getDescription
	bool login(int, const std::string&)const;
	//bool type function login
};
#endif