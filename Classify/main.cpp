#include "stdafx.h"
#include "mainwindow.hpp"
#include <QtWidgets/QApplication>

#if _DEBUG
#include <vld.h>
#endif

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	MainWindow wnd;
	wnd.show();
	return app.exec();
}
