/*���ܣ�Ϊmaster�ṩ����¶���Ĺ���
���ҽ����������Ѿ����ڵ�Ա��
*/

#pragma once
#include<qdialog.h>
#include<iostream>
#include<getHead.h>
#include"ui_addAnimal.h"
#include"animal.h"
#include<vector>
#include"distribution.h"

class addAnimal :public QDialog, public Ui::Dialog_add_animal
{
	Q_OBJECT
public:
	addAnimal(QWidget* parent = 0);//����
	void setZoo(Zoo*);//����һ��zooָ��
	std::vector<Animal*> get_animal();//�������ݳ�Աanimal
	private slots:
	void add();//��Ӹ�staff�������
private:
	std::vector<Animal*> mast;
	Zoo* zoo;
	distribution* dis;
};