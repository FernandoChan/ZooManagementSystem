/*为用户提供购买商品的窗口
商品是程序内部定义的
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
	buy_dialog(QWidget* parent = 0);//默认构造函数
	private slots://连接各个按钮的信号
	void set_ice();
	void set_sau();
	void set_post();
	void set_pen();
	void set_mas();

	void get_cost();//通知用户购买的价格

private:
	icecream ice;
	sausage sau;
	postcard post;
	mascot mas;
	pencil pen;
	message* suc;//通知用户购买成功
};