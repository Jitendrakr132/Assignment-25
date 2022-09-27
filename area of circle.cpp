#include<iostream>
using namespace std;
class Area
{
private:
    int r;//radius of circle
    public :
    void setvalue(int x)
    {
        r=x;
    }
    void area()
    {
        cout<<"Area of circle ="<<3.14*r*r;
    }
};
int main()
{
    Area a;
    a.setvalue(4);
    a.area();
}

