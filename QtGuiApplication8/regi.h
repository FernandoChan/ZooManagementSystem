/*提供游客登录
确认账号的正确性
*/

#pragma once
#include"ui_untitled.h"
#include<QtWidgets\qdialog.h>
#include"Zoo.h"

class regist :public QDialog, public Ui::Dialog_register
{
	Q_OBJECT
public:
	Zoo zoo;//唯一的zoo值


	regist(QWidget* parent = 0);//构造函数
	//默认初始话
	private slots:
	void getNumber_password();
	//注册账号

	void setNumber();
	//设置账号的号码
private:
	int number;
	std::string password;
	std::string name;

};