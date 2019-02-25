//tourist登录后的界面
//功能 查看所有动物信息

#include"tourist_login.h"
#include"animal.h"
#include<string>

tourist_login::tourist_login(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);

	label_hello->setText("Hello, my tourist");//设置窗口名
	setWindowTitle("Hello, my tourist");//欢迎界面
	buy = new buy_dialog;
	//设置buy界面

	//将动物信息设置函数连接到按钮上
	connect(pushButton_cat, SIGNAL(clicked()), this, SLOT(getInformation_cat()));//将动物信息设置函数连接到按钮上

	connect(pushButton_dog, SIGNAL(clicked()), this, SLOT(getInformation_dog()));//将动物信息设置函数连接到按钮上

	connect(pushButton_crocodil, SIGNAL(clicked()), this, SLOT(getInformation_crocodile()));//将动物信息设置函数连接到按钮上

	connect(pushButton_Eagle, SIGNAL(clicked()), this, SLOT(getInformation_eagle()));//将动物信息设置函数连接到按钮上

	connect(pushButton_Leopard, SIGNAL(clicked()), this, SLOT(getInformation_leopard()));//将动物信息设置函数连接到按钮上
	connect(pushButton_Lion, SIGNAL(clicked()), this, SLOT(getInformation_lion()));//将动物信息设置函数连接到按钮上
	connect(pushButton_mouse, SIGNAL(clicked()), this, SLOT(getInformation_mouse()));//将动物信息设置函数连接到按钮上
	connect(pushButton_Rabit, SIGNAL(clicked()), this, SLOT(getInformation_rabit()));//将动物信息设置函数连接到按钮上
	connect(pushButton_swallow, SIGNAL(clicked()), this, SLOT(getInformation_swallow()));//将动物信息设置函数连接到按钮上
	connect(pushButton_Tiger, SIGNAL(clicked()), this, SLOT(getInformation_tiger()));//将动物信息设置函数连接到按钮上
	
	connect(pushButton_buy, SIGNAL(clicked()), buy, SLOT(show()));//将buy窗口的打开连接到按钮上
	connect(pushButton_logout, SIGNAL(clicked()), this, SLOT(close()));//登出
	//you=new Tourist()
}

void tourist_login::setNum(int i)
{
	num = i;
	//设置tourist的账号
}

void tourist_login::setTourist(Tourist* t)
{
	you = t;
	//设置tourist
}

int tourist_login::getNum()const
{
	return num;
	//获取tourist的账号
}

Tourist* tourist_login::getTourist()const
{
	return you;
	//获取tourist
}

void tourist_login::setZoo(Zoo* zo)
{
	zoo = zo;
	//设置zoo指针指向的zoo

}

void tourist_login::getInformation_cat()
{
	plainTextEdit->setPlainText(zoo->getImformation(Cat).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_dog()
{
	plainTextEdit->setPlainText(zoo->getImformation(Dog).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_tiger()
{
	plainTextEdit->setPlainText(zoo->getImformation(Tiger).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_swallow()
{
	plainTextEdit->setPlainText(zoo->getImformation(SWALLOW).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_mouse()
{
	plainTextEdit->setPlainText(zoo->getImformation(MOUSE).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_lion()
{
	plainTextEdit->setPlainText(zoo->getImformation(LION).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_leopard()
{
	plainTextEdit->setPlainText(zoo->getImformation(LEOPARD).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_eagle()
{
	plainTextEdit->setPlainText(zoo->getImformation(EAGLE).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_crocodile()
{
	plainTextEdit->setPlainText(zoo->getImformation(CROCODILE).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}

void tourist_login::getInformation_rabit()
{
	plainTextEdit->setPlainText(zoo->getImformation(RABIT).c_str());
	//设置点击按钮后窗口上的信息
	//所有动物的信息
}