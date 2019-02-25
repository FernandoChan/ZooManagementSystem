#include"addAnimal.h"
//添加新动物的类

addAnimal::addAnimal(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);//set the ui
	dis = new distribution;//设置分发的窗口
	
	connect(pushButton, SIGNAL(clicked()), this, SLOT(add()));
	connect(pushButton, SIGNAL(clicked()), dis, SLOT(show()));
	connect(pushButton, SIGNAL(clicked()), this, SLOT(close()));//connect the signal and the slot
	QRegExp regExp("[0-9]+");
	lineEdit_age->setValidator(new QRegExpValidator(regExp, this));//设置正则表达式
	lineEdit_weight->setValidator(new QRegExpValidator(regExp, this));//set the reguler expresstion

	//正则规定只能使用数字
}

void addAnimal::setZoo(Zoo* z)
{
	zoo = z;
	dis->setZoo(z);
}//设置zoo

std::vector<Animal*> addAnimal::get_animal()
{
	//返回一个animal的列表
	return mast;
}

void addAnimal::add()
{
	std::string type = comboBox->currentText().toStdString();
	std::string name = lineEdit_name->text().toStdString();
	//获取type和动物名字的信息

	int age = lineEdit_age->text().toInt();
	double weight = lineEdit_weight->text().toDouble();//获取动物的体重和年龄信息
	std::string hobby = lineEdit_hobbies->text().toStdString();//获取动物的爱好信息
	if (type == "Cat")//多个ifelse语句判断动物的类型
	//初始化添加到动物的列表中去
	{
		Animal* an = new cat(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Dog")
	{
		Animal* an = new dog(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Tiger")
	{
		Animal* an = new tiger(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Lion")
	{
		Animal* an = new Lion(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Eagle")
	{
		Animal* an = new Eagle(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Crocodile")
	{
		Animal* an = new Crocodile(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Swallow")
	{
		Animal* an = new Swallow(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Rabit")
	{
		Animal* an = new Rabit(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else if (type == "Mouse")
	{
		Animal* an = new Mouse(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
	else
	{
		Animal* an = new Leopard(age, weight, hobby, true, true, name);//添加一个新的动物
		dis->setAnimal(an);//设置动物类型
		mast.push_back(an);
	}
}
//程序结束