/*staff��¼��Ľ���
����:
1.�ṩ���������Ķ������Ϣ
2.�����ϰ巢����֪ͨ
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
	void setStaff(staff*);//��ʼ��staff

	private slots:

	//Ϊÿ�ֶ�����Ӳ�
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
	//��ȡboss����Ϣ

private:
	staff* you;
	int num;
};
