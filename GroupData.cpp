#include "GroupData.h"
#include "DataSpec.h"
#include <iostream>
#include <string>

GroupData::GroupData(const DataSpec &f1,const DataSpec &f2, const DataSpec &f3, double MaxXVal, double MaxYVal, double MaxZVal):f1(f1),f2(f2),f3(f3),maxX(MaxXVal),maxY(MaxYVal),maxZ(MaxZVal)
{
}
double GroupData::getMaxX() const
{
	return maxX;
}
double GroupData::getMaxY() const
{
	return maxY;
}
double GroupData::getMaxZ() const
{
	return maxZ;
}


void GroupData::print() const
{
	cout<<"MaxX= "<<getMaxX()<<endl;
	cout<<"MaxY= "<<getMaxY()<<endl;
	cout<<"MaxZ= "<<getMaxZ()<<endl;
}

void GroupData::calculateMaxFeatures()
{
	if(f1.getFX()>f2.getFX() && f1.getFX()>f3.getFX())
		maxX=f1.getFX();
		
	else if(f2.getFX()>f3.getFX() && f2.getFX()>f1.getFX())
		maxX=f2.getFX();
	else 
		maxX=f3.getFX();
			
	if(f1.getFX()>f2.getFY() && f1.getFY()>f3.getFY())
		maxY=f1.getFY();
		
	else if(f2.getFX()>f3.getFY() && f2.getFY()>f1.getFY())
		maxY=f2.getFY();
	else 
		maxY=f3.getFY();	
		
	if(f1.getFZ()>f2.getFZ() && f1.getFZ()>f3.getFZ())
		maxZ=f1.getFX();
		
	else if(f2.getFZ()>f3.getFZ() && f2.getFZ()>f1.getFZ())
		maxZ=f2.getFZ();
	else 
		maxZ=f3.getFZ();
}

bool GroupData::compare(const GroupData &f)
{
	if(maxX > f.maxX && maxY > f.maxY && maxZ > f.maxZ)
		return true;
	else
		return false;	
		
}
