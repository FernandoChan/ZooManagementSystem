/*提供游客登录后的界面
实现功能:
1.游客可以查看所有动物园里动物的信息

2.游客可以购买商品
3.通过指针连接到购买窗口
*/

#pragma once
#include<string>
#include"ui_tourist.h"
#include"tourist.h"
#include"Zoo.h"
#include"getHead.h"
#include<qdialog.h>
#include"buy_dialog.h"

class tourist_login :public QDialog, public Ui::Dialog
{
	Q_OBJECT
public:
	tourist_login(QWidget* parent = 0);
	//构造函数

	void setZoo(Zoo*);
	//设置zoo指针

	void setNum(int);
	void setTourist(Tourist*);
	int getNum()const;
	Tourist* getTourist()const;
	//初始化和获取数据

	private slots:
	//设置按钮连接的槽
	void getInformation_tiger();
	void getInformation_swallow();
	void getInformation_rabit();
	void getInformation_leopard();
	void getInformation_lion();
	void getInformation_mouse();

	void getInformation_dog();
	void getInformation_eagle();
	void getInformation_crocodile();

	void getInformation_cat();
	//点击相应的按钮调用函数
private:

	int num;
	Tourist* you;
	Zoo* zoo;
	buy_dialog* buy;
};