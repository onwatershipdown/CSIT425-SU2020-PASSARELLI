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

	void storebodytype(int x)
	{
		bodytype=x;
	}
	int getbodytype()
	{
		return bodytype;
	}
	void storedoorcount(int x)
	{
		doorcount=x;
	}
	int getdoorcount()
	{
		return doorcount;	
	}
	void storeelectric(int x)
	{
		electric=x;
	}	
	int getelectric()
	{
		return electric;
	}

	void storetransmission(int x)
	{
		manualtrans=x;
	}
	int gettransmission()
	{
		return manualtrans;
	}
	void storedrivetype(int x)
	{
	drivetype=x;
	}	
	int getdrivetype()
	{
		return drivetype;
	}
	void storecylinders(int x)
	{
		cylinders=x;
	}
	int getcylinders()
	{
		return cylinders;
	}
	void storesunroof(int x)
	{
		sunroof=x;
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
