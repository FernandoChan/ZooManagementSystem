/*�ṩ�ο͵�¼
ȷ���˺ŵ���ȷ��
*/

#pragma once
#include"ui_untitled.h"
#include<QtWidgets\qdialog.h>
#include"Zoo.h"

class regist :public QDialog, public Ui::Dialog_register
{
	Q_OBJECT
public:
	Zoo zoo;//Ψһ��zooֵ


	regist(QWidget* parent = 0);//���캯��
	//Ĭ�ϳ�ʼ��
	private slots:
	void getNumber_password();
	//ע���˺�

	void setNumber();
	//�����˺ŵĺ���
private:
	int number;
	std::string password;
	std::string name;

};