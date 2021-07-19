#include <iostream>

using namespace std;

class CarRental
{


private:
	string bodytype();
	bool electric;
	bool manualtrans;
	int drivetype; //1 for front, 2 for rear, 3 for awd, 4 for 4wd
	int cylinders;
	bool sunroof;


public:
	void getelectric();
	void gettransmission();
	void getdrivetype();
	void getcylinders();
	void getsunroof();
};



int main()
{


return 0;
}
