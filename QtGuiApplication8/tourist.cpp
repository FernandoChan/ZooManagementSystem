/* C++ Group Project
* Zoo management system
* Presented By Group:
* Member list:
*	 16计联：
*		陈星宇
*		杨喆
*	 16计创：
*      蒋怿
*      陈效威
*/
/* tourist.cpp
* class of tourist is to use as the base class of tourist.
* The main function of this class is feeding and access the animal's data constantly,
* This header file includes a private data member
* that is a vector consists of the pointers to animal class.
* In this class, you can manipulate this vector.
* For example, you can add animals via adding pointers to animals.
* You can also access certain kinds  of animal with acknowledging its index.
* index_of member function allows you to input the name of animal and return its index in the vector.
*/
#include<iostream>
#include<string>
#include<vector>
#include"people.h"
#include"animal.h"
#include"Zoo.h"
#include"tourist.h"
#include<algorithm>
#include<iomanip>
#include<stdexcept>
#include<map>

using namespace std;

Tourist::Tourist(int number, const string& password, const string& name)
	:people(name, number, password, TOURIST)
{
	//向内添加所有动物
	// 并且将这些动物全部放在private 成员vector里面， 方便以后检索
}

int Tourist::getImformation_of_Num(Animals_class des)
{
	//查找这种动物的总量
	//调用getImformation函数
	return getAnimal_of(des).size();
}

//返回只有形参指定的这一种动物的容器
vector<Animal*> Tourist::getAnimal_of(Animals_class des)
{
	vector<Animal*>temp;// 创建了一个临时的vector对象存储animal指针
	for (int i = 0; i < animals.size(); i++)
	{
		if (animals[i]->getType() == des)
		{
			temp.push_back(animals[i]);
		}
	}
	return temp;
	// 返回一个临时的vector对象
}


// 目的是找到在vector里面第一个当前想要找的动物类型
int Tourist::index_first(Animals_class des)
{
	for (int i = 0; i < animals.size(); i++)
	{
		//判断条件：如果该动物的类型type（在animal类里面定义）
		//为形参的类型，那么就返回当前动物的位置。
		if (animals[i]->getType() == des)
		{
			return i;
		}
	}
	return -1;
}


// 输入一个动物的名字，返回这个动物在里面动物的vector里面的编号
int Tourist::index_of(const string& name)
{
	for (int i = 0; i < animals.size(); i++)
	{
		if (animals[i]->getName() == name)
			return i;
	}

	return -1;
}

string Tourist::getImformation(Animals_class des)
{
	string buf = "";
	int i = index_first(des);
	if (i != -1)
		//判断： 如果动物里面有这一种动物的话
	{
		//动物调用自己的getDescription函数，
		//并且将string 类型的buf 赋值为自己的信息牌上面的信息。
		buf = animals[i]->getDescription();
	}
	return buf;
}


vector<Animal*> Tourist::getAnimals()const
{
	return animals;
}

//往动物容器里面添加一个动物指针
void Tourist::add(Animal* ani_Ptr)
{
	animals.push_back(ani_Ptr);
}

//重新清洗animal 容器
void Tourist::setAnimals(const vector<Animal*>& animal)
{
	animals = animal;
}
