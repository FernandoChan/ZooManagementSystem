
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
// ʹ��ö��������ʾ���ָ����Ķ�������
class Animal
{

public:
	// Constructor
	Animal(const std::string& = "", int = 0, Animals_class = Tiger);

	// �������������Ϣ��
	std::string getDescription()const;

	// ���ö��ڶ����������Ϣ
	virtual void setDescription(const std::string&);//�麯��
	//������������ʵ��

	// ���ö����Ա����
	bool setName(const std::string&);
	// ���õ�ǰ���Ͷ�������
	bool setNumber(int);
	//�޸Ķ�������͵���ʵ�Σ�ָ���Ķ�������
	bool setType(Animals_class);

	// ��õ�ǰ���������
	std::string getName()const;
	// ��õ�ǰ���������
	int getNumber()const;
	//��õ�ǰ�������������
	Animals_class getType()const;

private:

	std::string name;
	std::string description;
	Animals_class type;
	int number;

};
#endif // !ANIMAL_H