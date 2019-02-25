//tourist��¼��Ľ���
//���� �鿴���ж�����Ϣ

#include"tourist_login.h"
#include"animal.h"
#include<string>

tourist_login::tourist_login(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);

	label_hello->setText("Hello, my tourist");//���ô�����
	setWindowTitle("Hello, my tourist");//��ӭ����
	buy = new buy_dialog;
	//����buy����

	//��������Ϣ���ú������ӵ���ť��
	connect(pushButton_cat, SIGNAL(clicked()), this, SLOT(getInformation_cat()));//��������Ϣ���ú������ӵ���ť��

	connect(pushButton_dog, SIGNAL(clicked()), this, SLOT(getInformation_dog()));//��������Ϣ���ú������ӵ���ť��

	connect(pushButton_crocodil, SIGNAL(clicked()), this, SLOT(getInformation_crocodile()));//��������Ϣ���ú������ӵ���ť��

	connect(pushButton_Eagle, SIGNAL(clicked()), this, SLOT(getInformation_eagle()));//��������Ϣ���ú������ӵ���ť��

	connect(pushButton_Leopard, SIGNAL(clicked()), this, SLOT(getInformation_leopard()));//��������Ϣ���ú������ӵ���ť��
	connect(pushButton_Lion, SIGNAL(clicked()), this, SLOT(getInformation_lion()));//��������Ϣ���ú������ӵ���ť��
	connect(pushButton_mouse, SIGNAL(clicked()), this, SLOT(getInformation_mouse()));//��������Ϣ���ú������ӵ���ť��
	connect(pushButton_Rabit, SIGNAL(clicked()), this, SLOT(getInformation_rabit()));//��������Ϣ���ú������ӵ���ť��
	connect(pushButton_swallow, SIGNAL(clicked()), this, SLOT(getInformation_swallow()));//��������Ϣ���ú������ӵ���ť��
	connect(pushButton_Tiger, SIGNAL(clicked()), this, SLOT(getInformation_tiger()));//��������Ϣ���ú������ӵ���ť��
	
	connect(pushButton_buy, SIGNAL(clicked()), buy, SLOT(show()));//��buy���ڵĴ����ӵ���ť��
	connect(pushButton_logout, SIGNAL(clicked()), this, SLOT(close()));//�ǳ�
	//you=new Tourist()
}

void tourist_login::setNum(int i)
{
	num = i;
	//����tourist���˺�
}

void tourist_login::setTourist(Tourist* t)
{
	you = t;
	//����tourist
}

int tourist_login::getNum()const
{
	return num;
	//��ȡtourist���˺�
}

Tourist* tourist_login::getTourist()const
{
	return you;
	//��ȡtourist
}

void tourist_login::setZoo(Zoo* zo)
{
	zoo = zo;
	//����zooָ��ָ���zoo

}

void tourist_login::getInformation_cat()
{
	plainTextEdit->setPlainText(zoo->getImformation(Cat).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_dog()
{
	plainTextEdit->setPlainText(zoo->getImformation(Dog).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_tiger()
{
	plainTextEdit->setPlainText(zoo->getImformation(Tiger).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_swallow()
{
	plainTextEdit->setPlainText(zoo->getImformation(SWALLOW).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_mouse()
{
	plainTextEdit->setPlainText(zoo->getImformation(MOUSE).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_lion()
{
	plainTextEdit->setPlainText(zoo->getImformation(LION).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_leopard()
{
	plainTextEdit->setPlainText(zoo->getImformation(LEOPARD).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_eagle()
{
	plainTextEdit->setPlainText(zoo->getImformation(EAGLE).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_crocodile()
{
	plainTextEdit->setPlainText(zoo->getImformation(CROCODILE).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}

void tourist_login::getInformation_rabit()
{
	plainTextEdit->setPlainText(zoo->getImformation(RABIT).c_str());
	//���õ����ť�󴰿��ϵ���Ϣ
	//���ж������Ϣ
}