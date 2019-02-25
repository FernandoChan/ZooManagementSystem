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
/* tourist.h
* class of tourist is to use as the base class of tourist.
* The main function of this class is feeding and access the animal's data constantly,
* This header file includes a private data member
* that is a vector consists of the pointers to animal class.
* In this class, you can manipulate this vector.
* For example, you can add animals via adding pointers to animals.
* You can also access certain kinds  of animal with acknowledging its index.
* index_of member function allows you to input the name of animal and return its index in the vector.
*/

#pragma once

// Define the class name to prevent redefined .
#ifndef TOURIST_H
#define TOURIST_H
// include the library document.
#include<iostream>
#include<string>
#include<vector>
#include"people.h"
#include"animal.h"


class Tourist :public people
{
public:
	Tourist(int = 0, const std::string & = "", const std::string& = "");

	std::vector<Animal*> getAnimal_of(Animals_class);//返回 只有形参这一种动物的 animal容器
	int index_first(Animals_class);  // 获取（形参所代表的）动物类型的第一个动物的序号
	int index_of(const std::string&);// 输入一个动物的名字，返回这个动物在里面动物的vector里面的编号

	std::string getImformation(Animals_class);  //获得当前动物的信息牌
	std::vector<Animal*> getAnimals()const;     //获得当前类的整个动物指针容器

	int getImformation_of_Num(Animals_class); // 调用getImformation函数, 查找这种动物的总量.

											  //往动物容器里面添加一个指针指向的动物	
	void add(Animal*);

	//重新清洗animal 容器
	void setAnimals(const std::vector<Animal*>&animal);

private:
	std::vector<Animal*>animals;
};
#endif // !TOURIST_h#pragma once
