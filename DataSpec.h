#ifndef DATASPEC_H
#define DATASPEC_H
#include <iostream>
#include <string>
using namespace std;
class DataSpec
{
	public:
		DataSpec(string,double,double,double);
		void setFX(double);
		void setFY(double);
		void setFZ(double);
		void setName(string);
		double getFX(void) const;
		double getFY(void) const;
		double getFZ(void) const;
		string getName(void) const;
		void print(void) const;
	private:
		double featureX;
		double featureY;
		double featureZ;
		string dataName;
};

#endif
