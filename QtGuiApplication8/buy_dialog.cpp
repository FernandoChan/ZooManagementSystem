//������Ʒ�Ĵ���
#include"buy_dialog.h"

buy_dialog::buy_dialog(QWidget* parent)
	:QDialog(parent)
{
	setupUi(this);//����ui
	suc = new message;//���һ��message����

	//��ʼ�����ּ۸���Ϣ
	//��ʼ��ֵΪ�ڲ������
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
	//��ʼ�����

	connect(pushButton_ice, SIGNAL(clicked()), this, SLOT(set_ice()));//������Ʒ����Ϣ����
	connect(pushButton_mascot, SIGNAL(clicked()), this, SLOT(set_mas()));//�������ťʱ

	connect(pushButton_postcard, SIGNAL(clicked()), this, SLOT(set_post()));//��Ϣ�����ʾ��Ʒ�Ľ���
	connect(pushButton_pencil, SIGNAL(clicked()), this, SLOT(set_pen()));
	connect(pushButton_sausage, SIGNAL(clicked()), this, SLOT(set_sau()));
	connect(comboBox, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(get_cost()));

	//���Ӹ�ѡ������������Ŀ��
	connect(spinBox_num, SIGNAL(valueChanged(const QString&)), this, SLOT(get_cost()));//����Ʒ����仯��ʱ��
	//�������ü۸���Ϣ
	connect(pushButton_buy, SIGNAL(clicked()), suc, SLOT(show()));//����Ʒ�����仯ʱ
	//���¼�����Ʒ�۸�

}

void buy_dialog::get_cost()//�����ܼ۸�
{
	std::string Case = comboBox->currentText().toStdString();
	int num = spinBox_num->value();
	double value;
	//��ʼ������

	if (Case == "Ice cream") //����Ʒ���ͱ仯ʱ
		//�ı���Ʒ�ļ۸�
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

	//����Ʒ�����仯ʱ
	//�ı�costֵ

	double cost = value*num;
	std::string buf = "It will cost " + std::to_string(cost)+" yuan";//֪ͨ�û�
	label_cost->setText(buf.c_str());//���ü۸�

}

void buy_dialog::set_post()//������Ʒ�����úͽ���
{
	std::string buf = "";
	buf += post.getIntroduction();
	buf += '\n';
	buf += post.getFunction();
	buf += '\n';
	
	plainTextEdit->setPlainText(buf.c_str());//��Ϣ����ʾ��Ʒ������
}


//���º������ź�����
//����������Ϣ������Ϣ
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