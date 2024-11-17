#include<iostream>
#include <string>
using namespace std;
class Employee
{ 
    private:
    int id;
    string name;
    float fees;
    public: 
    Employee(int i, string n)
    { 
        this->id = i;
        this->name = n;

    }

    Employee(int i, string n, float f):
        Employee(id,name)
    {
        this->fees = f;
    }

    void display()
    {
        cout<<"id: "<<id<<" name: "<<name<<" fees: "<<fees<<endl;
    }
};

int main()
{ 
    Employee e1(1,"amit");
    Employee e2(2,"sumit",2000);
    e1.display();
    e2.display();

    
    return 0;
}
