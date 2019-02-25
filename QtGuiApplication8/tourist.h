/* C++ Group Project
* Zoo management system
* Presented By Group:
* Member list:
*	 16������
*		������
*		�
*	 16�ƴ���
*      ����
*      ��Ч��
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

	std::vector<Animal*> getAnimal_of(Animals_class);//���� ֻ���β���һ�ֶ���� animal����
	int index_first(Animals_class);  // ��ȡ���β�������ģ��������͵ĵ�һ����������
	int index_of(const std::string&);// ����һ����������֣�����������������涯���vector����ı��

	std::string getImformation(Animals_class);  //��õ�ǰ�������Ϣ��
	std::vector<Animal*> getAnimals()const;     //��õ�ǰ�����������ָ������

	int getImformation_of_Num(Animals_class); // ����getImformation����, �������ֶ��������.

											  //�����������������һ��ָ��ָ��Ķ���	
	void add(Animal*);

	//������ϴanimal ����
	void setAnimals(const std::vector<Animal*>&animal);

private:
	std::vector<Animal*>animals;
};
#endif // !TOURIST_h#pragma once
