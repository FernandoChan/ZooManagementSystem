/*Ϊ�û��ṩ������Ʒ�Ĵ���
��Ʒ�ǳ����ڲ������
*/

#pragma once
#include"ice-cream.h"
#include"sausage.h"
#include"pencil.h"
#include"postcard.h"
#include"mascot.h"
#include<qdialog.h>
#include"ui_buy.h"
#include"message.h"

class buy_dialog :public QDialog, public Ui::Dialogbuy
{
	Q_OBJECT
public:
	buy_dialog(QWidget* parent = 0);//Ĭ�Ϲ��캯��
	private slots://���Ӹ�����ť���ź�
	void set_ice();
	void set_sau();
	void set_post();
	void set_pen();
	void set_mas();

	void get_cost();//֪ͨ�û�����ļ۸�

private:
	icecream ice;
	sausage sau;
	postcard post;
	mascot mas;
	pencil pen;
	message* suc;//֪ͨ�û�����ɹ�
};