#include <iostream>
using namespace std;

class students
{
    public :
    int id;
    string name;
    
    void printDetil()
    {
        cout << "Student name is" << name <<endl;    
    }
    
    //Default constructore
    students()
    {
        cout << "we are in default constructor" << endl;
    }
    
    //Perametric constructor
    students(int stu_id)
    {
        cout << "we are in parametric constructor" << endl;
        cout << "student id is :" << stu_id;
    }
    
    //Destructor
    ~students()
    {
        cout << "destructore called" << " " <<id << endl;
    }
};
int main() 
{
    // stu1 object will call default constructor
    students stu1;
    stu1.id = 14;
    
    //stu2 will call perametric constructor
    students stu2(12);
}
