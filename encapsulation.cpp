#include <iostream>
using namespace std;

class encapsulation
{
    private :
    int pri_var;
    
    public:
    void pub_fun(int acc_var);

};

void encapsulation :: pub_fun(int acc_var)
{
    pri_var = acc_var;
    cout << "pri_var is : " << pri_var;
}
int main() 
{
    encapsulation obj;
    
    obj.pub_fun(10);
}
