#pragma once
/*
* zoo.h
*
*/

#ifndef ZOO_H
#define ZOO_H

#include"animal.h"
#include"people.h"
#include"tiger.h"
#include"staff.h"
#include"tourist.h"
#include"master.h"
#include<vector>
#include<fstream>

class Zoo
{
private:
	description user;
	void initial();

	std::string path;

	std::vector<staff*>staffs;   //create a vector to store the staffs pointers
	std::vector<Tourist*>tour;  //create a vector to store the Tourist pointers
	std::vector<Animal*>animals;//create a vector to store the Animal pointers
	std::vector<master*>masters;//create a vector to store the master (manager) pointers

	
	class account
	{
	public:
		account(int num = 0, const std::string& i = "")
		{
			number = num;
			setPassword(i);
		}
		int number;
		char password[30];
		void setPassword(const std::string& pass)
		{
			int length = pass.size() >= 29 ? 29 : pass.size();
			for (int i = 0; i < length; i++)
			{
				password[i] = pass[i];
			}
			password[length] = '\0';
		}
	};
	//description type(int)const;
	bool login_t(int, std::string);  // if logining in as a tourist
	bool login_m(int, std::string);  // if logining in as a master
	bool login_s(int, std::string);  // if logining in as a staff

	void setDescription(description);

public:
	static int num_s;  // the number of staffs
	static int num_t;  // the number of tourists
	static int num_m;  // the number of masters

					   //Use combination to include another class into zoo class.
					   // account class is used to store the account info,
	std::fstream file;

	// input from file
	Zoo(const std::string& = "files.txt");

	~Zoo();

	int enroll(int, const std::string&, const std::string&);

	bool login(int, std::string);
	
	int getNext_tourist();

	std::string getPath()const;
	void setPath();
	void add_staff(staff*);
	void add_Master(master*);
	void add_Tourist(Tourist*);

	std::string getImformation(Animals_class)const;
	std::vector<Animal*> get_Vecof(Animals_class)const;

	void setStaff(const std::vector<staff*>&);
	std::vector<staff*> getStaff()const;
	void addStaff(staff*);

	void setTourist(const std::vector<Tourist*>&);
	std::vector<Tourist*> getTourist()const;
	void addTourist(Tourist*);

	void setMaster(const std::vector<master*>&);
	std::vector<master*>getMaster()const;
	void addMaster(master*);

	void setAnimal(const std::vector<Animal*>&);
	std::vector<Animal*> getAnimals()const;
	void addAnimal(Animal*);
	
	void registerStaff(int, const std::string&,master* ,std::string);
};
#endif // !ZOO_H



