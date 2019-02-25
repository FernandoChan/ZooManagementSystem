//登录界面
//主界面

#include "QtGuiApplication8.h"

QtGuiApp::QtGuiApp(QWidget *parent)
//构造函数并初始化
	: QDialog(parent)
{
	
	setupUi(this);
	
	setWindowTitle("Login");//设置窗口名字为login
	
	registe = new regist;//初始化regist
	QRegExp regExp("[0-9][0-9]?[0]?");
	//因为账号只能为数字切由系统分配
	//所以账号只能为1-100
	lineEdit_num->setValidator(new QRegExpValidator(regExp, this));//设置正则表达式

	login_t = new tourist_login;
	login_m = new master_login;
	login_s = new staff_login;
	//添加三个窗口
	//登录不同的账号会打开这三个窗口
	

	QObject::connect(pushbutton_login, SIGNAL(clicked()),this, SLOT(can_login()));//联系注册界面
	//不同类型的账号有不痛的界面
	QObject::connect(pushbutton_register, SIGNAL(clicked()), this, SLOT(Register()));//联系注册和界面

	//初始化其他界面中的数据成员
	login_t->setZoo(&(registe->zoo));
	login_m->setZoo(&(registe->zoo));
	login_m->setMaster(registe->zoo.getMaster().back());
	//login_m->addCase();
	login_s->setStaff(registe->zoo.getStaff().back());
}

void QtGuiApp::Register()
//登录函数
{
	//显示注册函数
	registe->show();
}

void QtGuiApp::can_login()
{
	//获取用户输入的账号
	int number = lineEdit_num->text().toInt();
	std::string password = lineEdit_pass->text().toStdString();//获取密码

	//判断账号的类型：
	if (lineEdit_job->text() == "Tourist")//类型为游客
	{
		user = TOURIST;
	}
	else if (lineEdit_job->text() == "Staff")
	{
		user = STAFF;
	}
	else
	{
		user = MASTER;
	}

	if (registe->zoo.login(number, password))//判断是否能登录成功
		//增加判断账号所处的区间
	{
		num = number;
		if (num >= 41 && num <= 100 && user == TOURIST)//41-100之间的账号为tourist账号
		{
			
			login_t->show();//显示tourist登录窗口
			registe->zoo.addTourist(new Tourist(num, password, registe->lineEdit_name_regi->text().toStdString()));
			//在zoo中添加一个新的tourist
			login_t->setTourist((registe->zoo.getTourist())[num-41]);
			//设置tourist登录窗口类中的数据成员zoo
		}
		else if (num >= 11 && num <= 40 && user == STAFF)//11-40之间的账号为staff账号
		{
			login_s->show();//显示staff登录窗口
			login_s->setStaff(registe->zoo.getStaff()[num - 11]);//设置staff登录窗口类中的数据成员zoo
		}
			
		else if (num >= 1 && num <= 10 && user == MASTER)//1-10之间的账号为master账号
		{
			login_m->setMaster(registe->zoo.getMaster()[num - 1]);//设置master登录窗口类中的数据成员zoo
			login_m->addCase();//初始化master中的comboBox
			login_m->show();//显示master登录窗口
		}
		else
		{
			label_alarm->setText(tr("No such account"));
			//没有这个账号
			//输出对用户的提示
		}
	}
	else
	{
		label_alarm->setText(tr("No such account"));
		//
		//没有这个账号
		//输出对用户的提示
	}
}

