#pragma once
#ifndef STAFF_H
#define STAFF_H
#include<iomanip>
#include"people.h"
#include"animal.h"
#include<vector>
#include<iostream>
#include<string>


class staff :public people
{

public:
	staff(const std::string& ="", int=0, const std::string& ="");
	std::string toString()const;
	std::string toInformation()const;

	int indexOf(const std::string&)const;
	int find_first_of(description)const;

	void add(Animal*);

	std::string name_of_animal()const;

	std::string getMessage()const;
	void setMessage(const std::string&);

	void setPets(const std::vector<Animal*>&);
	std::vector<Animal*> getPet()const;

private:
	std::vector<Animal*> pets;
	std::string message;
};
#endif // !STAFF_H