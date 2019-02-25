//分发新买的动物给员工窗口

#include"distribution.h"

distribution::distribution(QWidget* parent)
//构造函数
	:QDialog(parent)//初始化列表
{
	setupUi(this);//设置ui窗口
	connect(pushButton, SIGNAL(clicked()), this, SLOT(close()));//确认函数
	connect(pushButton, SIGNAL(clicked()), this, SLOT(dis()));//分发
}

void distribution::setZoo(Zoo* z)//设置zoo
{
	zoo = z;
	//anm = animal;
	for (int i = 0; i < zoo->getStaff().size(); i++)
	{
		comboBox->addItem(zoo->getStaff()[i]->getName().c_str());
	}
	//将comboBox中的项化为员工名字
}

void distribution::setAnimal(Animal* a)
{
	anm = a;
	//初始化anmimal
}

void distribution::dis()
{
	//distribute the animals to staffs
	std::string name = comboBox->currentText().toStdString();//find the index
	std::vector<staff*>staffs = zoo->getStaff();//copy the staff
	for (int i = 0; i < zoo->getStaff().size(); i++)
	{
		if (zoo->getStaff()[i]->getName() == name)//re
		{
			staffs[i]->add(anm);//add a new type of staff
		}
	}
	zoo->setStaff(staffs);//reset the staff
	zoo->addAnimal(anm);//添加一个新动物到zoo中
	//将未分配的动物分配
	//分配完之后将动物给zoo管理
}