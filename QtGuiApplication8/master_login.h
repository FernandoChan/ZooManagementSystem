/*master��¼��Ľ���
�ṩ�Ĺ��ܣ�
1.�鿴����Ա������Ϣ
2.�鿴����Ա������Ϣ
3.�鿴�㶯��԰�����ж������Ϣ
4.������Ϣ���������Ա��
5.������԰�й��ö���
6.�ǳ�����
*/

#pragma once
#include"master.h"
#include"Zoo.h"
#include"getHead.h"
#include"ui_master.h"
#include<qdialog.h>
#include<string>
#include"addAnimal.h"

class master_login :public QDialog, public Ui::Dialogmaster
{
	Q_OBJECT
public:
	std::vector<Animal*>animals;
	master_login(QWidget* parent = 0);//Ĭ�Ϲ��캯��
	void setZoo(Zoo*);//��ʼ��zoo���ݳ�Ա
	//��֤zoo������ָ��ָ��ͬһ���ڴ��
	void setMaster(master*);//����Ŀǰ�������ڵ�master

	void addCase();//������е�Ա����combobox��
	private slots:
	//�����ť������źŵĲ�
	void setImformation();//���Ա������Ϣ
	void sentMessage();//���͸�����Ա��֪ͨ
	void get_animals_information();//ȡ������԰�ж������Ϣ
	//end of 
private:
	master* maste;
	int num;
	Zoo* zoo;
	std::string message;//��Ϣ
	addAnimal* add;
};