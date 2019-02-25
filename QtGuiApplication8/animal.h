
/* animal.h
* The base class of each derived class of different species of animal class
* The private member is number name and the type name.
* And the main feature of this class is set and get the information above.
*/

#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
#include<iostream>
#include<vector>
enum Animals_class { Tiger, Cat, Dog, SWALLOW, MOUSE, LION, EAGLE, CROCODILE, LEOPARD, RABIT };
// 使用枚举量来表示各种各样的动物种类
class Animal
{

public:
	// Constructor
	Animal(const std::string& = "", int = 0, Animals_class = Tiger);

	// 获得这个动物的信息牌
	std::string getDescription()const;

	// 设置对于动物的描述信息
	virtual void setDescription(const std::string&);//虚函数
	//在其他子类中实现

	// 设置动物成员名字
	bool setName(const std::string&);
	// 设置当前类型动物数量
	bool setNumber(int);
	//修改动物的类型到（实参）指定的动物类型
	bool setType(Animals_class);

	// 获得当前动物的名字
	std::string getName()const;
	// 获得当前动物的数量
	int getNumber()const;
	//获得当前动物的类型名称
	Animals_class getType()const;

private:

	std::string name;
	std::string description;
	Animals_class type;
	int number;

};
#endif // !ANIMAL_H