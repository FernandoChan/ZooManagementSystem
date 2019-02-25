#include "QtGuiApplication8.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApp* w=new QtGuiApp;

	w->show();
	return a.exec();
}
