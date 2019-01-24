#include <iostream>
using namespace std;

class encapsulation
{
    private :
    int pri_var;
    
    public:
    void pub_fun(int acc_var);
    
    int get_var(void);

};

void encapsulation :: pub_fun(int acc_var)
{
    pri_var = acc_var;
}

int encapsulation :: get_var(void)
{
   return pri_var; 
}

int main() 
{
    encapsulation obj;
    
    obj.pub_fun(10);
    
    cout << "pri_var is : "<< obj.get_var();
}
