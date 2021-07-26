#include <iostream>
#include <string>
#include <fstream>

using namespace std;

typedef unsigned short int item;
class CarRental
{


private:
	string manufacturer;
	string model;
	item bodytype=2; //1 for convertible, 2 for coupe, 3 for sedan, 4 for liftback, 5 for van, 6 for suv, 7 for truck
	item doorcount=2; //2 for coupe, 3 for 2-door hatch, 4 for sedan, 5 for 4-door hatch
	bool electric=1;
	bool manualtrans=1;
	item drivetype=1; //1 for front, 2 for rear, 3 for awd, 4 for 4wd
	item cylinders=0;
	bool sunroof=1;


public:
	void storemanufacturer (string x);
	{
	manufacturer=x;
	}
	void storemodel (string x);
	{
	model=x;
	}


	void storebodytype(item x)
	{
		bodytype=x;
	}
	item getbodytype()
	{
		return bodytype;
	}
	void storedoorcount(item x)
	{
		doorcount=x;
	}

	string printdoorcount(ofstream &CarFile, int x)
	{
		CarFile << "This car has " << x << " doors. \n";
	}
	item getdoorcount()
	{
		return doorcount;	
	}
	void storeelectric(item x)
	{
		electric=x;
	}	
	item getelectric()
	{
		return electric;
	}

	void storetransmission(item x)
	{
		manualtrans=x;
	}
	item gettransmission()
	{
		return manualtrans;
	}
	void storedrivetype(item x)
	{
	drivetype=x;
	}	
	item getdrivetype()
	{
		return drivetype;
	}
	void storecylinders(item x)
	{
		cylinders=x;
	}
	item getcylinders()
	{

		return cylinders;
	}
	void storesunroof(item x)
	{
		sunroof=x;
	}
	item getsunroof()
	{
		return sunroof;
	}
};


int main()
{

CarRental Bolt;


ofstream CarFile;
CarFile.open ("CarList.txt");

//database transcoder
item Bodytype=Bolt.getbodytype();
item DoorCount=Bolt.getdoorcount();
switch (BodyType)
{
	case 1:	
	CarFile << "This is a convertible. \n";
	break;

	case 2:
	CarFile << "This is a coupe. \n";
	break;
	case 3:
	CarFile << "This is a sedan. \n";
	break;
	case 4:
	CarFile <<"This is a liftback/wagon. \n";
	break;
	case 5:
	CarFile << "This is a van. \n";
	break;
	case 6:
	CarFile << "This is an SUV. \n";
	break;
	case 7:
	CarFile << "This is a pickup truck. \n";
	break;
}



switch (DoorCount)
{
	case 2:
	CarFile <"This is a 



}

CarFile<< Bolt.getbodytype()<< endl;


return 0;
}
