#ifndef GROUPDATA_H
#define GROUPDATA_H
#include "DataSpec.h"
#include <iostream>
#include <string>

class GroupData
{
	public:
		GroupData(const DataSpec &,const DataSpec &, const DataSpec &, double MaxXVal=0.0,double MaxYVal=0.0,double MaxZVal=0.0);
		double getMaxX() const;
		double getMaxY() const;
		double getMaxZ() const;
		void print() const;
		void calculateMaxFeatures();
		bool compare(const GroupData &);
		
	private:
		const DataSpec f1;
		const DataSpec f2;
		const DataSpec f3;
		double maxX;
		double maxY;
		double maxZ;
};

#endif
