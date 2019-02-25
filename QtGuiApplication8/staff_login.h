/*staff登录后的界面
功能:
1.提供所有你管理的动物的信息
2.接收老板发来的通知
*/

#pragma once
#include<qdialog.h>
#include"Zoo.h"
#include<qwidget.h>
#include<iostream>
#include"ui_staff.h"

class staff_login :public QDialog, public Ui::Dialogstaff
{
	Q_OBJECT
public:
	staff_login(QWidget* parent = 0);
	void setStaff(staff*);//初始化staff

	private slots:

	//为每种动物添加槽
	void getImformation_dog();
	void getImformation_cat();
	void getImformation_tiger();
	void getImformation_lion();
	void getImformation_leopard();
	void getImformation_crocodile();
	void getImformation_eagle();
	void getImformation_rabit();
	void getImformation_swallow();
	void getImformation_mouse();

	void get_boss();
	//获取boss的信息

private:
	staff* you;
	int num;
};
