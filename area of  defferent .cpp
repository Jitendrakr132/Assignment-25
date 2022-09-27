#include<iostream>
using namespace std;
class Area
{
private:
    int r;//radius of circle
    int a;
    public :
    void setvalue(int x,int e)
    {
        r=x;
        a=e;
    }
    void area( Area a,Area x)
    {
        cout<<"Area of circle ="<<3.14*r*r<<endl;
        cout <<"Area of square ="<<a.r*a.r<<endl;
        cout<<"Area of Rectangle="<<x.r*x.a;
    }

};
int main()
{
    Area a,a1,a2;
    a.setvalue(4,0);
    a1.setvalue(5,0);
    a2.setvalue(2,5);
    a.area(a1,a2);
}


