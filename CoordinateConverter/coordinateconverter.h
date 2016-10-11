#ifndef COORDINATECONVERTER_H
#define COORDINATECONVERTER_H

#include <QtWidgets/QMainWindow>
#include "ui_coordinateconverter.h"

class CoordinateConverter : public QMainWindow
{
	Q_OBJECT

protected:
	double Longitude, Latitude;
	double X, Y;
	double a, b;
	double f, e1, e2;
	char buffer[20];
	bool ok;
	double PI;

public:
	CoordinateConverter(QWidget *parent = 0);
	~CoordinateConverter();

private:
	Ui::CoordinateConverterClass ui;

private slots:
    void calculate_WtoB();
};

#endif // COORDINATECONVERTER_H
