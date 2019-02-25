//master登录窗口

#include"master_login.h"

master_login::master_login(QWidget* parent)//构造函数
//初始化数据成员
//连接各个槽和信号
	:QDialog(parent)
{
	setupUi(this);//连接ui

	setWindowTitle("Hello, master!");//将窗口设置为hello master

	add = new addAnimal;//连接窗口add
	//add->set_mast(this);
	connect(pushButton_getAnimal, SIGNAL(clicked()), this, SLOT(get_animals_information()));
	//点击按钮后获取动物信息

	connect(pushButton_talkto, SIGNAL(clicked()), this, SLOT(sentMessage()));
	//点击按钮后发送给所有员工星系

	connect(pushButton_get, SIGNAL(clicked()), this, SLOT(setImformation()));
	//点击按钮后获取所有员工信息
	connect(pushButton_logout, SIGNAL(clicked()), this, SLOT(close()));
	//点击登出之后登出

	connect(pushButton_animal, SIGNAL(clicked()), add, SLOT(show()));
	//点击按钮后转到添加动物界面
}

void master_login::setMaster(master* m)
{
	//初始化master
	//提供master类中的操作
	maste = m;
}

void master_login::setZoo(Zoo* t)
{
	//初始化zoo
	//并将add中的zoo初始化为zoo
	zoo = t;
	add->setZoo(t);
}

void master_login::setImformation()
{

	//初始化comboBox的cases
	std::string cas = comboBox_get->currentText().toStdString();
	//添加每个case中相关信息
	if (cas=="All staffs")
	{
		std::string buf = "";
		for (int i = 0; i < zoo->getStaff().size(); i++)
		{
			buf += zoo->getStaff()[i]->toString();
			buf += '\n';
		}
		plainTextEdit_imformations->setPlainText(buf.c_str());
		//将信息设置为所有staffs的名字
		//只提供staff的缩略信息
	}

	else
	{
		//判断函数
		//判断case的种类
		//并获取该staff的确切信息
		for (int i = 0; i < zoo->getStaff().size(); i++)
		{
			if (zoo->getStaff()[i]->getName() == cas)
			{
				plainTextEdit_imformations->setPlainText(zoo->getStaff()[i]->toInformation().c_str());
				break;
				//获取信息成功之后退出
			}
		}
	}
}

void master_login::sentMessage()
{
	maste->send_all(plainTextEdit_talk->toPlainText().toStdString());
}

void master_login::get_animals_information()
{
	std::string buf = "";

	for (int i = 0; i < zoo->getAnimals().size(); i++)
	{
		buf += zoo->getAnimals()[i]->getDescription();
		buf += '\n';
	}

	plainTextEdit_imformations->setPlainText(buf.c_str());
}


void master_login::addCase()
{
	for (int i = 0; i < zoo->getStaff().size(); i++)
	{
		comboBox_get->addItem(zoo->getStaff()[i]->getName().c_str());
	}
}