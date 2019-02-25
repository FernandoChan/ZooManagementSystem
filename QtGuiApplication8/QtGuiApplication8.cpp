//��¼����
//������

#include "QtGuiApplication8.h"

QtGuiApp::QtGuiApp(QWidget *parent)
//���캯������ʼ��
	: QDialog(parent)
{
	
	setupUi(this);
	
	setWindowTitle("Login");//���ô�������Ϊlogin
	
	registe = new regist;//��ʼ��regist
	QRegExp regExp("[0-9][0-9]?[0]?");
	//��Ϊ�˺�ֻ��Ϊ��������ϵͳ����
	//�����˺�ֻ��Ϊ1-100
	lineEdit_num->setValidator(new QRegExpValidator(regExp, this));//����������ʽ

	login_t = new tourist_login;
	login_m = new master_login;
	login_s = new staff_login;
	//�����������
	//��¼��ͬ���˺Ż������������
	

	QObject::connect(pushbutton_login, SIGNAL(clicked()),this, SLOT(can_login()));//��ϵע�����
	//��ͬ���͵��˺��в�ʹ�Ľ���
	QObject::connect(pushbutton_register, SIGNAL(clicked()), this, SLOT(Register()));//��ϵע��ͽ���

	//��ʼ�����������е����ݳ�Ա
	login_t->setZoo(&(registe->zoo));
	login_m->setZoo(&(registe->zoo));
	login_m->setMaster(registe->zoo.getMaster().back());
	//login_m->addCase();
	login_s->setStaff(registe->zoo.getStaff().back());
}

void QtGuiApp::Register()
//��¼����
{
	//��ʾע�ắ��
	registe->show();
}

void QtGuiApp::can_login()
{
	//��ȡ�û�������˺�
	int number = lineEdit_num->text().toInt();
	std::string password = lineEdit_pass->text().toStdString();//��ȡ����

	//�ж��˺ŵ����ͣ�
	if (lineEdit_job->text() == "Tourist")//����Ϊ�ο�
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

	if (registe->zoo.login(number, password))//�ж��Ƿ��ܵ�¼�ɹ�
		//�����ж��˺�����������
	{
		num = number;
		if (num >= 41 && num <= 100 && user == TOURIST)//41-100֮����˺�Ϊtourist�˺�
		{
			
			login_t->show();//��ʾtourist��¼����
			registe->zoo.addTourist(new Tourist(num, password, registe->lineEdit_name_regi->text().toStdString()));
			//��zoo�����һ���µ�tourist
			login_t->setTourist((registe->zoo.getTourist())[num-41]);
			//����tourist��¼�������е����ݳ�Աzoo
		}
		else if (num >= 11 && num <= 40 && user == STAFF)//11-40֮����˺�Ϊstaff�˺�
		{
			login_s->show();//��ʾstaff��¼����
			login_s->setStaff(registe->zoo.getStaff()[num - 11]);//����staff��¼�������е����ݳ�Աzoo
		}
			
		else if (num >= 1 && num <= 10 && user == MASTER)//1-10֮����˺�Ϊmaster�˺�
		{
			login_m->setMaster(registe->zoo.getMaster()[num - 1]);//����master��¼�������е����ݳ�Աzoo
			login_m->addCase();//��ʼ��master�е�comboBox
			login_m->show();//��ʾmaster��¼����
		}
		else
		{
			label_alarm->setText(tr("No such account"));
			//û������˺�
			//������û�����ʾ
		}
	}
	else
	{
		label_alarm->setText(tr("No such account"));
		//
		//û������˺�
		//������û�����ʾ
	}
}

