#pragma once
#ifndef MASTER_H_
#define MASTER_H_
#include"people.h"
#include"staff.h"
#include<iostream>
#include<string>
#include<vector>
class master :public people
	//class for master
{
public:
	master(int = 0, const std::string& = "", const std::string& = "");
	//constructor for class master 
	
	~master();
	//destructor for class master
	void send_to(int, const std::string&);
	//function prototype for send_to
	void send_all(const std::string &);
	//function prototype for send_all
	void add(staff*);
	//function prototype for add
	void setStaff(const std::vector<staff*>&);
	//function prototype for setStaff
	std::vector<staff*>getStaff()const;
	//function prototype for get staff
	int getIndexOf(const std::string&)const;
	//function prototype for getIndexOf
	std::vector<staff*>sub_vec(int, int)const;
	//function prototype for sub_vec which accept 2 int number
	std::vector<staff*>sub_vec(int)const;
	//function prototype for sub_vec which accept 1 int number
	std::string list_of_name()const;
	//function prototype for list_of_name
	std::string list_of_imformation()const;
	//function prototype for list_of_information
	std::string animal_of(const std::string&)const;
	//function prototype for animal_of

private:
	std::vector<staff*>staffs;
	//"vector" type's private data
};
#endif // !MASTER_H

