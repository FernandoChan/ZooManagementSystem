/*�ṩ�ο͵�¼��Ľ���
ʵ�ֹ���:
1.�οͿ��Բ鿴���ж���԰�ﶯ�����Ϣ

2.�οͿ��Թ�����Ʒ
3.ͨ��ָ�����ӵ����򴰿�
*/

#pragma once
#include<string>
#include"ui_tourist.h"
#include"tourist.h"
#include"Zoo.h"
#include"getHead.h"
#include<qdialog.h>
#include"buy_dialog.h"

class tourist_login :public QDialog, public Ui::Dialog
{
	Q_OBJECT
public:
	tourist_login(QWidget* parent = 0);
	//���캯��

	void setZoo(Zoo*);
	//����zooָ��

	void setNum(int);
	void setTourist(Tourist*);
	int getNum()const;
	Tourist* getTourist()const;
	//��ʼ���ͻ�ȡ����

	private slots:
	//���ð�ť���ӵĲ�
	void getInformation_tiger();
	void getInformation_swallow();
	void getInformation_rabit();
	void getInformation_leopard();
	void getInformation_lion();
	void getInformation_mouse();

	void getInformation_dog();
	void getInformation_eagle();
	void getInformation_crocodile();

	void getInformation_cat();
	//�����Ӧ�İ�ť���ú���
private:

	int num;
	Tourist* you;
	Zoo* zoo;
	buy_dialog* buy;
};