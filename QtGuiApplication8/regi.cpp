#include"regi.h"
#include<string>
#include<iostream>

regist::regist(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);
	QRegExp regExp("[0-9][0-9]?[0]?");
	setWindowTitle("Register?");
	lineEdit_num_regi ->setValidator(new QRegExpValidator(regExp, this));//设置正则表达式
	//只能输入数字

	lineEdit_num_regi->setText("12");
	
	connect(pushButton_regi, SIGNAL(clicked()), this, SLOT(getNumber_password()));//连接注册按钮和注册函数
	//添加进一个新游客
	
	setNumber();//设置初始的游客账号
}

void regist::setNumber()//初始化游客账号
{
	std::string num = std::to_string(Zoo::num_t);//将游客账号设置为41
	lineEdit_num_regi->setText(num.c_str());
}

void regist::getNumber_password()//slot 点击按钮后调用  注册一个新账号
{
	name = lineEdit_name_regi->text().toStdString();//设置账号的名字
	password = lineEdit_pass_regi->text().toStdString();//密码
	number = Zoo::num_t++;//账号  并且游客数量+1

	zoo.enroll(number, name, password);//在zoo里添加一个新的tourist 
	//并且写入文件里
	setNumber();//设置游客账号
}