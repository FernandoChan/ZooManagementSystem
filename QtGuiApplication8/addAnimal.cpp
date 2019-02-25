#include"addAnimal.h"
//����¶������

addAnimal::addAnimal(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);//set the ui
	dis = new distribution;//���÷ַ��Ĵ���
	
	connect(pushButton, SIGNAL(clicked()), this, SLOT(add()));
	connect(pushButton, SIGNAL(clicked()), dis, SLOT(show()));
	connect(pushButton, SIGNAL(clicked()), this, SLOT(close()));//connect the signal and the slot
	QRegExp regExp("[0-9]+");
	lineEdit_age->setValidator(new QRegExpValidator(regExp, this));//����������ʽ
	lineEdit_weight->setValidator(new QRegExpValidator(regExp, this));//set the reguler expresstion

	//����涨ֻ��ʹ������
}

void addAnimal::setZoo(Zoo* z)
{
	zoo = z;
	dis->setZoo(z);
}//����zoo

std::vector<Animal*> addAnimal::get_animal()
{
	//����һ��animal���б�
	return mast;
}

void addAnimal::add()
{
	std::string type = comboBox->currentText().toStdString();
	std::string name = lineEdit_name->text().toStdString();
	//��ȡtype�Ͷ������ֵ���Ϣ

	int age = lineEdit_age->text().toInt();
	double weight = lineEdit_weight->text().toDouble();//��ȡ��������غ�������Ϣ
	std::string hobby = lineEdit_hobbies->text().toStdString();//��ȡ����İ�����Ϣ
	if (type == "Cat")//���ifelse����ж϶��������
	//��ʼ����ӵ�������б���ȥ
	{
		Animal* an = new cat(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Dog")
	{
		Animal* an = new dog(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Tiger")
	{
		Animal* an = new tiger(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Lion")
	{
		Animal* an = new Lion(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Eagle")
	{
		Animal* an = new Eagle(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Crocodile")
	{
		Animal* an = new Crocodile(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Swallow")
	{
		Animal* an = new Swallow(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Rabit")
	{
		Animal* an = new Rabit(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else if (type == "Mouse")
	{
		Animal* an = new Mouse(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
	else
	{
		Animal* an = new Leopard(age, weight, hobby, true, true, name);//���һ���µĶ���
		dis->setAnimal(an);//���ö�������
		mast.push_back(an);
	}
}
//�������