/*
主界面
实现功能：
1.联系所有人登录后的界面
2.提供每个人登录
3.联系游客注册(只有游客可以注册，其余园长和员工必须内部定义账号和数据)
4.提供登出功能
5.判断账号是否正确并且存在
*/

#pragma once

#include <QtWidgets/QDialog>
#include "ui_QtGuiApplication8.h"
#include<iostream>
#include<string>
#include"regi.h"
#include"Zoo.h"
#include"tourist_login.h"
#include"master_login.h"
#include"staff_login.h"

class QtGuiApp : public QDialog, public Ui::QtGuiApplication8Class
{
	Q_OBJECT

public:
	QtGuiApp(QWidget *parent = Q_NULLPTR);//将父指针设置为空
	//构造函数
	//默认初始化父指针

	private slots:
	//槽
	void can_login();//点击按钮后判断是否能注册
	//并跳转页面
	void Register();
	//跳转到注册页面

private:
	regist* registe;//链接注册界面
	int num;
	description user;
	//上面是用户信息
	tourist_login* login_t;
	master_login* login_m;
	staff_login* login_s;
	//指向页面的数据成员
};
