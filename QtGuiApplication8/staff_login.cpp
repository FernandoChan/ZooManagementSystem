/*staff 登录界面
功能有查看动物信息和接受老板的信息
*/

#include"staff_login.h"

staff_login::staff_login(QWidget* parent)
//构造函数
	:QDialog(parent)
{
	setupUi(this);
	//把查看每种动物的按钮和动物信息联系起来

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

	connect(pushButton_logout, SIGNAL(clicked()), this, SLOT(close()));//登出按钮
	connect(pushButton_getboss, SIGNAL(clicked()), this, SLOT(get_boss()));//获取boss发送的信息按钮
}
//构造函数结束

void staff_login::get_boss()
{
	//获取 boss发给你的信息
	//如果没有信息 
	//显示空白
	plainTextEdit_2->setPlainText(you->getMessage().c_str());
}

void staff_login::setStaff(staff* st)
{
	//设置你登录后的staff
	//映射为内存上一个指针
	you = st;
}

void staff_login::getImformation_cat()
{
	//获取所有cat的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)
		//遍历所有animal
	{
		if (you->getPet()[i]->getType() == Cat)
		{
			buf += you->getPet()[i]->getDescription();
			//找出所有cat的信息并拼接起来
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_dog()
{
	//获取所有dog的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)
		//遍历所有animal
	{
		if (you->getPet()[i]->getType() == Dog)
		{
			buf += you->getPet()[i]->getDescription();
			//找出所有dog的信息并拼接起来
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_crocodile()
{
	//获取所有crocodile的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)
		//遍历所有animal
	{
		if (you->getPet()[i]->getType() == CROCODILE)
		{
			//找出所有crocodile的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
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
	//获取所有eagle的信息
	for (int i = 0; i < you->getPet().size(); i++)
		//遍历所有animal
	{
		if (you->getPet()[i]->getType() == EAGLE)
		{
			//找出所有eagle的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_lion()
{
	//获取所有lion的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//遍历所有animal
	{
		if (you->getPet()[i]->getType() == LION)
		{
			//找出所有lion的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
	    plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_mouse()
{
	//获取所有mouse的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//遍历所有animal
	{
		if (you->getPet()[i]->getType() == MOUSE)
		{
			//找出所有mouse的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_rabit()
{
	//获取所有rabit的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//遍历所有animal
	{
		if (you->getPet()[i]->getType() == RABIT)
		{
			//找出所有rabit的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_swallow()
{
	//获取所有swallow的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//遍历所有animal
	{
		if (you->getPet()[i]->getType() == SWALLOW)
		{
			//找出所有swallow的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_tiger()
{
	//获取所有tiger的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//遍历所有animal
	{
		//找出所有tiger的信息并拼接起来
		if (you->getPet()[i]->getType() == Tiger)
		{
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}

void staff_login::getImformation_leopard()
{
	//获取所有leopard的信息
	std::string buf = "";
	for (int i = 0; i < you->getPet().size(); i++)//遍历所有animal
	{
		if (you->getPet()[i]->getType() == LEOPARD)
		{
			//找出所有leopard的信息并拼接起来
			buf += you->getPet()[i]->getDescription();
			buf += '\n';
		}
	}
	//将plainText设置为动物信息
	if (buf != "")
		plainTextEdit->setPlainText(buf.c_str());
	else
	{
		plainTextEdit->setPlainText("Nothing");
	}
}
