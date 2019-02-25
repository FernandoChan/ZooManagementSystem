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
	//����������ж���
	// ���ҽ���Щ����ȫ������private ��Աvector���棬 �����Ժ����
}

int Tourist::getImformation_of_Num(Animals_class des)
{
	//�������ֶ��������
	//����getImformation����
	return getAnimal_of(des).size();
}

//����ֻ���β�ָ������һ�ֶ��������
vector<Animal*> Tourist::getAnimal_of(Animals_class des)
{
	vector<Animal*>temp;// ������һ����ʱ��vector����洢animalָ��
	for (int i = 0; i < animals.size(); i++)
	{
		if (animals[i]->getType() == des)
		{
			temp.push_back(animals[i]);
		}
	}
	return temp;
	// ����һ����ʱ��vector����
}


// Ŀ�����ҵ���vector�����һ����ǰ��Ҫ�ҵĶ�������
int Tourist::index_first(Animals_class des)
{
	for (int i = 0; i < animals.size(); i++)
	{
		//�ж�����������ö��������type����animal�����涨�壩
		//Ϊ�βε����ͣ���ô�ͷ��ص�ǰ�����λ�á�
		if (animals[i]->getType() == des)
		{
			return i;
		}
	}
	return -1;
}


// ����һ����������֣�����������������涯���vector����ı��
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
		//�жϣ� ���������������һ�ֶ���Ļ�
	{
		//��������Լ���getDescription������
		//���ҽ�string ���͵�buf ��ֵΪ�Լ�����Ϣ���������Ϣ��
		buf = animals[i]->getDescription();
	}
	return buf;
}


vector<Animal*> Tourist::getAnimals()const
{
	return animals;
}

//�����������������һ������ָ��
void Tourist::add(Animal* ani_Ptr)
{
	animals.push_back(ani_Ptr);
}

//������ϴanimal ����
void Tourist::setAnimals(const vector<Animal*>& animal)
{
	animals = animal;
}
