#include <iostream>
using namespace std;

class vehicle
{
    public :
    
    void fuelamount()
    {
        cout << "we are in fuel amount function" << endl;
    }
    
    void capacity()
    {
        cout << "we are in capacity function" << endl;
    }
};

// class car inherited from vehicle
class car : public vehicle
{
    public :
    string carName;
};

//class bus inherited from vehicle
class bus : public vehicle
{
    public :
    int busNumber;
};

int main() 
{
    //object of class car
	car BMW;
	bus bus1;
	
	BMW.carName = "BMW";
	BMW.fuelamount();
	
	bus1.busNumber = 123;
	bus1.capacity();
	
	cout << "car name : " << BMW.carName << endl;
}
