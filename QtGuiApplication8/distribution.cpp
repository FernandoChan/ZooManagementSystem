//�ַ�����Ķ����Ա������

#include"distribution.h"

distribution::distribution(QWidget* parent)
//���캯��
	:QDialog(parent)//��ʼ���б�
{
	setupUi(this);//����ui����
	connect(pushButton, SIGNAL(clicked()), this, SLOT(close()));//ȷ�Ϻ���
	connect(pushButton, SIGNAL(clicked()), this, SLOT(dis()));//�ַ�
}

void distribution::setZoo(Zoo* z)//����zoo
{
	zoo = z;
	//anm = animal;
	for (int i = 0; i < zoo->getStaff().size(); i++)
	{
		comboBox->addItem(zoo->getStaff()[i]->getName().c_str());
	}
	//��comboBox�е��ΪԱ������
}

void distribution::setAnimal(Animal* a)
{
	anm = a;
	//��ʼ��anmimal
}

void distribution::dis()
{
	//distribute the animals to staffs
	std::string name = comboBox->currentText().toStdString();//find the index
	std::vector<staff*>staffs = zoo->getStaff();//copy the staff
	for (int i = 0; i < zoo->getStaff().size(); i++)
	{
		if (zoo->getStaff()[i]->getName() == name)//re
		{
			staffs[i]->add(anm);//add a new type of staff
		}
	}
	zoo->setStaff(staffs);//reset the staff
	zoo->addAnimal(anm);//���һ���¶��ﵽzoo��
	//��δ����Ķ������
	//������֮�󽫶����zoo����
}