#pragma once
#ifndef MOUSE_H
#define MOUSE_H
#include<iostream>
#include<string>
#include"people.h"
#include"animal.h"
#include"staff.h"

class Mouse :public Animal
{
public:
	Mouse(unsigned int = 1, double = 0.0, const std::string& = "",
		bool = true, bool = true, const std::string& = "", int = 0);
	// age, weight, birth place, hobbies, sex, married or not
	void setAge(unsigned int);
	int getAge()	const;

	void setWeight(double);
	double getWeight() const;

	void setBirthPlace();
	std::string getBirthPlace() const;

	void setHobbies(const std::string&);
	std::string getHobbies()const;

	void setSex(bool);
	bool getSex() const;

	void setMarry(bool);
	bool getMarry() const;

	void initial();
private:
	unsigned int Age;
	double Weight;
	std::string BirthPlace;
	std::string Hobbies;
	bool Sex;
	bool Marry;
};

#endif // !MOUSE_H
