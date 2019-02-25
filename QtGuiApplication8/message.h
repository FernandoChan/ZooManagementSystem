//一个简短的通知窗口
#pragma once
#include<qdialog.h>
#include"ui_message.h"

class message :public QDialog, public Ui::Dialog_m
{

	Q_OBJECT

public:
	message(QWidget* parent = 0);
	//通知窗口
};