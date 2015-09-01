#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
	QApplication app(argc,argv);
	QLabel *label = new QLabel("Hello Qt!!");
	QLabel *label1 = new QLabel("<h2>Hello </br></i>World</h2>");
	QPushButton *button = new QPushButton("Quit");
	QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));
	label->show();
	label1->show();
	button->show();
	return app.exec();
}

