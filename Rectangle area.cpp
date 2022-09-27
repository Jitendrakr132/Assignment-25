#include<iostream>
using namespace std;
class Area
{
private:
    int l;//length of rectangle
    int b;//breath of rectangle
public :
    void setvalue(int x,int y)
    {
        l=x;
        b=y;
    }
    void area()
    {
        cout<<"Area of rectanlge ="<<l*b;
    }
};
int main()
{
    Area a;
    a.setvalue(4,6);
    a.area();
}
