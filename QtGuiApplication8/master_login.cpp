//master��¼����

#include"master_login.h"

master_login::master_login(QWidget* parent)//���캯��
//��ʼ�����ݳ�Ա
//���Ӹ����ۺ��ź�
	:QDialog(parent)
{
	setupUi(this);//����ui

	setWindowTitle("Hello, master!");//����������Ϊhello master

	add = new addAnimal;//���Ӵ���add
	//add->set_mast(this);
	connect(pushButton_getAnimal, SIGNAL(clicked()), this, SLOT(get_animals_information()));
	//�����ť���ȡ������Ϣ

	connect(pushButton_talkto, SIGNAL(clicked()), this, SLOT(sentMessage()));
	//�����ť���͸�����Ա����ϵ

	connect(pushButton_get, SIGNAL(clicked()), this, SLOT(setImformation()));
	//�����ť���ȡ����Ա����Ϣ
	connect(pushButton_logout, SIGNAL(clicked()), this, SLOT(close()));
	//����ǳ�֮��ǳ�

	connect(pushButton_animal, SIGNAL(clicked()), add, SLOT(show()));
	//�����ť��ת����Ӷ������
}

void master_login::setMaster(master* m)
{
	//��ʼ��master
	//�ṩmaster���еĲ���
	maste = m;
}

void master_login::setZoo(Zoo* t)
{
	//��ʼ��zoo
	//����add�е�zoo��ʼ��Ϊzoo
	zoo = t;
	add->setZoo(t);
}

void master_login::setImformation()
{

	//��ʼ��comboBox��cases
	std::string cas = comboBox_get->currentText().toStdString();
	//���ÿ��case�������Ϣ
	if (cas=="All staffs")
	{
		std::string buf = "";
		for (int i = 0; i < zoo->getStaff().size(); i++)
		{
			buf += zoo->getStaff()[i]->toString();
			buf += '\n';
		}
		plainTextEdit_imformations->setPlainText(buf.c_str());
		//����Ϣ����Ϊ����staffs������
		//ֻ�ṩstaff��������Ϣ
	}

	else
	{
		//�жϺ���
		//�ж�case������
		//����ȡ��staff��ȷ����Ϣ
		for (int i = 0; i < zoo->getStaff().size(); i++)
		{
			if (zoo->getStaff()[i]->getName() == cas)
			{
				plainTextEdit_imformations->setPlainText(zoo->getStaff()[i]->toInformation().c_str());
				break;
				//��ȡ��Ϣ�ɹ�֮���˳�
			}
		}
	}
}

void master_login::sentMessage()
{
	maste->send_all(plainTextEdit_talk->toPlainText().toStdString());
}

void master_login::get_animals_information()
{
	std::string buf = "";

	for (int i = 0; i < zoo->getAnimals().size(); i++)
	{
		buf += zoo->getAnimals()[i]->getDescription();
		buf += '\n';
	}

	plainTextEdit_imformations->setPlainText(buf.c_str());
}


void master_login::addCase()
{
	for (int i = 0; i < zoo->getStaff().size(); i++)
	{
		comboBox_get->addItem(zoo->getStaff()[i]->getName().c_str());
	}
}