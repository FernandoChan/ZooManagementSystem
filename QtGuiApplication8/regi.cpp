#include"regi.h"
#include<string>
#include<iostream>

regist::regist(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);
	QRegExp regExp("[0-9][0-9]?[0]?");
	setWindowTitle("Register?");
	lineEdit_num_regi ->setValidator(new QRegExpValidator(regExp, this));//����������ʽ
	//ֻ����������

	lineEdit_num_regi->setText("12");
	
	connect(pushButton_regi, SIGNAL(clicked()), this, SLOT(getNumber_password()));//����ע�ᰴť��ע�ắ��
	//��ӽ�һ�����ο�
	
	setNumber();//���ó�ʼ���ο��˺�
}

void regist::setNumber()//��ʼ���ο��˺�
{
	std::string num = std::to_string(Zoo::num_t);//���ο��˺�����Ϊ41
	lineEdit_num_regi->setText(num.c_str());
}

void regist::getNumber_password()//slot �����ť�����  ע��һ�����˺�
{
	name = lineEdit_name_regi->text().toStdString();//�����˺ŵ�����
	password = lineEdit_pass_regi->text().toStdString();//����
	number = Zoo::num_t++;//�˺�  �����ο�����+1

	zoo.enroll(number, name, password);//��zoo�����һ���µ�tourist 
	//����д���ļ���
	setNumber();//�����ο��˺�
}