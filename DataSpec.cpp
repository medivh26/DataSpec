#include "DataSpec.h"
#include <iostream>
#include <string>
using namespace std;

DataSpec::DataSpec(string n,double fx=0.0,double fy=0.0,double fz=0.0)
{
	setName(n);
	setFX(fx);
	setFY(fy);
	setFZ(fz);
	cout<<"Constructor: "<<getName()<<endl;
}

void DataSpec::setFX(double fx)
{
	featureX=fx;
}
void DataSpec::setFY(double fy)
{
	featureY=fy;
}
void DataSpec::setFZ(double fz)
{
	featureZ=fz;
}

void DataSpec::setName(string n)
{
	dataName=n;
}

double DataSpec::getFX() const
{
	return featureX;
}
double DataSpec::getFY() const
{
	return featureY;
}
double DataSpec::getFZ() const
{
	return featureZ;
}

string DataSpec::getName() const
{
	return dataName;
}
void DataSpec::print() const
{
	cout<<getName()<<"("<<getFX()<<","<<getFY()<<","<<getFZ()<<")"<<endl;
}
