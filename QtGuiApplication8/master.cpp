#include"master.h"
#include<vector>
#include"staff.h"
#include<iostream>
#include<string>

using namespace std;

master::master(int number, const string& password, const string &name)
	:people(name, number, password, MASTER)
{

}
/*definition for constructor of class master
containing the reference of the constuctor of people */

//string master::getMessage()const
//{
//	return message;
//}

void master::send_to(int index, const string& message)
{
	index = index%staffs.size();
	staffs[index]->setMessage(message);
}
//definition for function send_to
//master send a message to a staff
//staff has been fixed

void master::send_all(const string& message)
{
	for (auto a : staffs)
	{
		a->setMessage(message);
	}
}
//deinition of function send_all
//master send messages to all staffs

master::~master()
{
	staffs.clear();
}
//definition of destuctor of class master
//clear this class object's memory


void master::add(staff* a)
{
	staffs.push_back(a);
}
//function which push back a staff reference

void master::setStaff(const vector<staff*>&staff)
{
	staffs = staff;
}
//function which is used to set staff

vector<staff*> master::getStaff()const
{
	return staffs;
}
//function which is used to get staff

int master::getIndexOf(const string& name)const
{
	for (int i = 0; i < staffs.size(); i++)
	{
		if (staffs[i]->getName() == name)
			return i;
	}

	return -1;
}
//function which is used to sentence whose name has been refered

vector<staff*> master::sub_vec(int begin, int end)const
{
	vector<staff*>sub;
	if (begin > end || begin < 0 || end >= staffs.size())
		return sub;
	else
	{
		for (int i = begin; i < end; i++)
		{
			sub.push_back(staffs[i]);
		}

		return sub;
	}
}
//function which is used to push back the staff

vector<staff*> master::sub_vec(int begin)const
{
	return sub_vec(begin, staffs.size() - 1);
}
//function which is used to return a sub_vec

string master::list_of_name()const
{
	string buf = "";
	for (auto i : staffs)
	{
		buf += i->getName() + " ";
	}
	buf += '\n';
	return buf;
}
//function which is used to get the list name

string master::list_of_imformation()const
{
	string buf = "";
	for (auto i : staffs)
	{
		buf += i->getDescription();
		buf += '\n';
	}
	return buf;
}
//function which is used to give the information

string master::animal_of(const std::string& name)const
{
	return staffs[getIndexOf(name)]->name_of_animal();
}
//function which is used to get the name;