#include <iostream>
using namespace std;
#include<string>

class student{
public:
    int id =0 ;
    string name;
    void setname(string name)
    {
        this->name = name;
    }
    void setid(int id)
    {
        this->id = id;
    }
    void print()
    {
        cout<<this->id <<endl;
        cout<<this->name<<endl;
        cout<<"====================\n";
    }
};

class print{
public:
    print()
    {
         cout<<"My name Is Mohamed \n";
    }

};
int main()
{
    print p;
    student s1;
    s1.setid(111);
    s1.setname("Mohamed");
    s1.print();
}
