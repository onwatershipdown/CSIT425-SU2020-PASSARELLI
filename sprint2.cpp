#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class CarRental
{


private:
	int bodytype=2; //1 for convertible, 2 for coupe, 3 for sedan, 4 for liftback, 5 for van, 6 for suv, 7 for truck
	int doorcount=2; //2 for coupe, 3 for 2-door hatch, 4 for sedan, 5 for 4-door hatch
	bool electric=1;
	bool manualtrans=1;
	int drivetype=1; //1 for front, 2 for rear, 3 for awd, 4 for 4wd
	int cylinders=0;
	bool sunroof=1;


public:


	int getbodytype()
	{
		return bodytype;
	}
	int getdoorcount()
	{
		return doorcount;	
	}	
	int getelectric()
	{
		return electric;
	}
	int gettransmission()
	{
		return manualtrans;
	}	
	int getdrivetype()
	{
		return drivetype;
	}
	int getcylinders()
	{
		return cylinders;
	}
	int getsunroof()
	{
		return sunroof;
	}
};


int main()
{

CarRental Bolt;


ofstream CarFile;
CarFile.open ("CarList.txt");
CarFile<< Bolt.getbodytype()<< endl;


return 0;
}
