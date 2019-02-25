/*一个窗口
将动物分配给各个员工
*/

#pragma once
#include<qdialog.h>
#include"ui_distribution.h"
#include<string>
#include"Zoo.h"

class distribution :public QDialog, public Ui::Dialog_des
{
	Q_OBJECT
public:
	distribution(QWidget* parent = 0);//构造函数
	void setZoo(Zoo*);//初始化设置数据成员的值
	void setAnimal(Animal*);
	private slots:
    void dis();//点击按钮后调用
	//设置分配给的员工
private:
	Zoo* zoo;
	Animal* anm;
};
