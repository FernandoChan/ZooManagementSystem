/*master登录后的界面
提供的功能：
1.查看所有员工的信息
2.查看单个员工的信息
3.查看你动物园中所有动物的信息
4.发送消息给你的所有员工
5.往动物园中购置动物
6.登出功能
*/

#pragma once
#include"master.h"
#include"Zoo.h"
#include"getHead.h"
#include"ui_master.h"
#include<qdialog.h>
#include<string>
#include"addAnimal.h"

class master_login :public QDialog, public Ui::Dialogmaster
{
	Q_OBJECT
public:
	std::vector<Animal*>animals;
	master_login(QWidget* parent = 0);//默认构造函数
	void setZoo(Zoo*);//初始化zoo数据成员
	//保证zoo和所有指针指向同一个内存段
	void setMaster(master*);//设置目前操作窗口的master

	void addCase();//添加所有的员工到combobox中
	private slots:
	//点击按钮后接受信号的槽
	void setImformation();//获得员工的信息
	void sentMessage();//发送给所有员工通知
	void get_animals_information();//取得所有园中动物的信息
	//end of 
private:
	master* maste;
	int num;
	Zoo* zoo;
	std::string message;//信息
	addAnimal* add;
};