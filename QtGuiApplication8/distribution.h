/*һ������
��������������Ա��
*/

#pragma once
#include<qdialog.h>
#include"ui_distribution.h"
#include<string>
#include"Zoo.h"

class distribution :public QDialog, public Ui::Dialog_des
{
	Q_OBJECT
public:
	distribution(QWidget* parent = 0);//���캯��
	void setZoo(Zoo*);//��ʼ���������ݳ�Ա��ֵ
	void setAnimal(Animal*);
	private slots:
    void dis();//�����ť�����
	//���÷������Ա��
private:
	Zoo* zoo;
	Animal* anm;
};
