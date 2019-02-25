/*staff ��¼����
�����в鿴������Ϣ�ͽ����ϰ����Ϣ
*/

#include"staff_login.h"

staff_login::staff_login(QWidget* parent)
//���캯��
	:QDialog(parent)
{
	setupUi(this);
	//�Ѳ鿴ÿ�ֶ���İ�ť�Ͷ�����Ϣ��ϵ����

	connect(pushButton_cat, SIGNAL(clicked()), this, SLOT(getImformation_cat()));

	connect(pushButton_dog, SIGNAL(clicked()), this, SLOT(getImformation_dog()));

	connect(pushButton_crocodile, SIGNAL(clicked()), this, SLOT(getImformation_crocodile()));

	connect(pushButton_tiger, SIGNAL(clicked()), this, SLOT(getImformation_tiger()));
	connect(pushButton_lion, SIGNAL(clicked()), this, SLOT(getImformation_lion()));
	connect(pushButton_rabit, SIGNAL(clicked()), this, SLOT(getImformation_rabit()));
	connect(pushButton_mouse, SIGNAL(clicked()), this, SLOT(getImformation_mouse()));
	connect(pushButton_leopard, SIGNAL(clicked()), this, SLOT(getImformation_leopard()));
	connect(pushButton_eagle, SIGNAL(clicked()), this, SLOT(getImformation_eagle()));
	connect(pushButton_swallow, SIGNAL(clicked()), this, SLOT(getImformation_swallow()));

	connect(pushButton_logout, SIGNAL(clicked()), this, SLOT(close()));//�ǳ���ť
	connect(pushButton_getboss, SIGNAL(clicked()), this, SLOT(get_boss()));//��ȡboss���͵���Ϣ��ť
}
//���캯������

void staff_login::get_boss()
{
	//��ȡ boss���������Ϣ
	//���û����Ϣ 
	//��ʾ�հ�
	plainTextEdit_2->setPlainText(you->getMessage().c_str());
}

void staff_login::setStaff(staff* st)
{
	//�������¼���staff
	//ӳ��Ϊ�ڴ���һ��ָ��
	you = st;
}

void staff_login::getImformation_cat()
{
	//��ȡ����cat����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)
		//��������animal
	{
		if (you->getPet()[i]->getType() == Cat)
		{
			buf += you->getPet()[i]->getDescription();
			//�ҳ�����cat����Ϣ��ƴ������
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_dog()
{
	//��ȡ����dog����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)
		//��������animal
	{
		if (you->getPet()[i]->getType() == Dog)
		{
			buf += you->getPet()[i]->getDescription();
			//�ҳ�����dog����Ϣ��ƴ������
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_crocodile()
{
	//��ȡ����crocodile����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)
		//��������animal
	{
		if (you->getPet()[i]->getType() == CROCODILE)
		{
			//�ҳ�����crocodile����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_eagle()
{
	std::string buf = "";
	//��ȡ����eagle����Ϣ
	for (int i = 0; i < you->getPet().size(); i++)
		//��������animal
	{
		if (you->getPet()[i]->getType() == EAGLE)
		{
			//�ҳ�����eagle����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_lion()
{
	//��ȡ����lion����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//��������animal
	{
		if (you->getPet()[i]->getType() == LION)
		{
			//�ҳ�����lion����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
	    plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_mouse()
{
	//��ȡ����mouse����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//��������animal
	{
		if (you->getPet()[i]->getType() == MOUSE)
		{
			//�ҳ�����mouse����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_rabit()
{
	//��ȡ����rabit����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//��������animal
	{
		if (you->getPet()[i]->getType() == RABIT)
		{
			//�ҳ�����rabit����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_swallow()
{
	//��ȡ����swallow����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//��������animal
	{
		if (you->getPet()[i]->getType() == SWALLOW)
		{
			//�ҳ�����swallow����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_tiger()
{
	//��ȡ����tiger����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//��������animal
	{
		//�ҳ�����tiger����Ϣ��ƴ������
		if (you->getPet()[i]->getType() == Tiger)
		{
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_leopard()
{
	//��ȡ����leopard����Ϣ
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//��������animal
	{
		if (you->getPet()[i]->getType() == LEOPARD)
		{
			//�ҳ�����leopard����Ϣ��ƴ������
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//��plainText����Ϊ������Ϣ
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}
