//购买物品的窗口
#include"buy_dialog.h"

buy_dialog::buy_dialog(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);//设置ui
	suc = new message;//添加一个message窗口

	//初始化各种价格信息
	//初始化值为内部定义的
	ice.setFunction();
	ice.setIntroduction();
	ice.setPrice();
	sau.setFunction();
	sau.setIntroduction();
    sau.setPrice();
	pen.setFunction();
	pen.setIntroduction();
	pen.setPrice();
	mas.setFunction();
	mas.setIntroduction();
	mas.setPrice();
	post.setFunction();
	post.setIntroduction();
	post.setPrice();
	//初始化完毕

	connect(pushButton_ice, SIGNAL(clicked()), this, SLOT(set_ice()));//连接商品和信息栏上
	connect(pushButton_mascot, SIGNAL(clicked()), this, SLOT(set_mas()));//当点击按钮时

	connect(pushButton_postcard, SIGNAL(clicked()), this, SLOT(set_post()));//信息框会显示商品的介绍
	connect(pushButton_pencil, SIGNAL(clicked()), this, SLOT(set_pen()));
	connect(pushButton_sausage, SIGNAL(clicked()), this, SLOT(set_sau()));
	connect(comboBox, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(get_cost()));

	//连接复选框和设置数量的框架
	connect(spinBox_num, SIGNAL(valueChanged(const QString&)), this, SLOT(get_cost()));//当物品种类变化的时候
	//重新设置价格信息
	connect(pushButton_buy, SIGNAL(clicked()), suc, SLOT(show()));//当物品数量变化时
	//重新计算物品价格

}

void buy_dialog::get_cost()//设置总价格
{
	std::string Case = comboBox->currentText().toStdString();
	int num = spinBox_num->value();
	double value;
	//初始化如上

	if (Case == "Ice cream") //当商品类型变化时
		//改变商品的价格
	{
		value = ice.getPrice();
	}
	else if (Case == "Sausage")
	{
		value = sau.getPrice();
	}
	else if (Case == "Pencil")
	{
		value = pen.getPrice();
	}
	else if (Case == "Postcard")
	{
		value = post.getPrice();
	}
	else
	{
		value = mas.getPrice();
	}

	//当商品数量变化时
	//改变cost值

	double cost = value*num;
	std::string buf = "It will cost " + std::to_string(cost)+" yuan";//通知用户
	label_cost->setText(buf.c_str());//设置价格

}

void buy_dialog::set_post()//设置商品的作用和介绍
{
	std::string buf = "";
	buf += post.getIntroduction();
	buf += '\n';
	buf += post.getFunction();
	buf += '\n';
	
	plainTextEdit->setPlainText(buf.c_str());//信息栏显示商品的作用
}


//以下函数与信号连接
//负责设置信息栏的信息
void buy_dialog::set_sau()
{
	std::string buf = "";
	buf += sau.getIntroduction();
	buf += '\n';
	buf += sau.getFunction();
	buf += '\n';

	plainTextEdit->setPlainText(buf.c_str());
}

void buy_dialog::set_mas()
{
	std::string buf = "";
	buf += mas.getIntroduction();
	buf += '\n';
	buf += mas.getFunction();
	buf += '\n';

	plainTextEdit->setPlainText(buf.c_str());
}

void buy_dialog::set_ice()
{
	std::string buf = "";
	buf += ice.getIntroduction();
	buf += '\n';
	buf += ice.getFunction();
	buf += '\n';

	plainTextEdit->setPlainText(buf.c_str());
}

void buy_dialog::set_pen()
{
	std::string buf = "";
	buf += pen.getIntroduction();
	buf += '\n';
	buf += pen.getFunction();
	buf += '\n';

	plainTextEdit->setPlainText(buf.c_str());
}