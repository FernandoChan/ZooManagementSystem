/*功能：为master提供添加新动物的功能
并且将动物分配给已经存在的员工
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
	addAnimal(QWidget* parent = 0);//构造
	void setZoo(Zoo*);//设置一个zoo指针
	std::vector<Animal*> get_animal();//返回数据成员animal
	private slots:
	void add();//添加给staff动物的类
private:
	std::vector<Animal*> mast;
	Zoo* zoo;
	distribution* dis;
};