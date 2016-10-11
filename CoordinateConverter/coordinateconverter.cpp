#include "coordinateconverter.h"

CoordinateConverter::CoordinateConverter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Longitude = 0, Latitude = 0;
	X = 0, Y = 0;
	a = 6378137;
	b = 6356752.3142;
	f = 1 / 298.257223563;
	e1 = 0.00669437999013;
	e2 = 0.006739496742227;
	PI = 3.141592654;
}

CoordinateConverter::~CoordinateConverter()
{

}
void CoordinateConverter::calculate_WtoB()
{
	QString Latitude_str = this->ui.lineEdit_Latitude->text();
	Latitude = Latitude_str.toDouble(&ok);
	QString Longitude_str = this->ui.lineEdit_Longitude->text();
	Longitude = Longitude_str.toDouble(&ok);
	double n = floor(Longitude / 6) + 1;		//投影带号
	double L0 = n * 6 - 3;						//投影带中央子午线
	//度转弧度
	L0 = L0*PI / 180;
	Longitude = Longitude*PI / 180;
	Latitude = Latitude*PI / 180;

	double t = tan(Latitude);
	double q = pow(e2*cos(Latitude), 2);		//卯酉圈分量的平方
	double m = cos(Latitude)*(Longitude - L0);

	double m0 = a*(1 - e1);
	double m2 = 3*e1*m0 / 2;
	double m4 = 5*e1*m2 + 4;
	double m6 = 7*e1*m4 / 6;
	double m8 = 9*e1*m6 / 8;

	double a0 = m0 + m2 / 2 + 3*m4 / 8 + 5*m6 / 16 + 35*m8 / 128;
	double a2 = m2 / 2 + m4 / 2 + 15 * m6 / 32 + 7 * m8 / 16;
	double a4 = m4 / 8 + 3 * m6 / 16 + 7 * m8 / 32;
	double a6 = m6 / 32 + m8 / 16;
	double a8 = m8 / 128;

	double A0 = a0;
	double B0 = a2;
	double C0 = a4;
	double D0 = a6;
	double E0 = a8;

	double S = (A0*Latitude - B0*sin(2 * Latitude) / 2 + C0*sin(4 * Latitude) / 4 - D0*sin(6 * Latitude) / 6 + E0*sin(8 * Latitude) / 8);
	double N = a / sqrt(1 - pow(e1, 2)*pow(sin(Latitude), 2));		//卯酉圈曲率半径

	X = S + N*t*((0.5 + ((5 - t*t + 9 * q + 4 * q*q) / 24 + (61 - 58 * t*t + pow(t, 4))*m*m / 720)*m*m)*m*m);
	Y = N*((1 + ((1 - t*t + q) / 6 + (5 - 18 * t*t + pow(t, 4) + 14 * q - 58 * q*t*t)*m*m / 120)*m*m)*m);
	//西移500公里
	Y = 1000000 * n + 500000 + Y;

	sprintf_s(buffer, "%f", X);
	QString X_str = buffer;
	sprintf_s(buffer, "%f", Y);
	QString Y_str = buffer;
	this->ui.lineEdit_X->setText(X_str);
	this->ui.lineEdit_Y->setText(Y_str);
}