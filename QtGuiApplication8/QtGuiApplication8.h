/*
������
ʵ�ֹ��ܣ�
1.��ϵ�����˵�¼��Ľ���
2.�ṩÿ���˵�¼
3.��ϵ�ο�ע��(ֻ���οͿ���ע�ᣬ����԰����Ա�������ڲ������˺ź�����)
4.�ṩ�ǳ�����
5.�ж��˺��Ƿ���ȷ���Ҵ���
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
	QtGuiApp(QWidget *parent = Q_NULLPTR);//����ָ������Ϊ��
	//���캯��
	//Ĭ�ϳ�ʼ����ָ��

	private slots:
	//��
	void can_login();//�����ť���ж��Ƿ���ע��
	//����תҳ��
	void Register();
	//��ת��ע��ҳ��

private:
	regist* registe;//����ע�����
	int num;
	description user;
	//�������û���Ϣ
	tourist_login* login_t;
	master_login* login_m;
	staff_login* login_s;
	//ָ��ҳ������ݳ�Ա
};
