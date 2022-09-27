#include<iostream>
using namespace std;
class complex
{
private:
    int a;  //real part
    int b;  //imaginary part
public :
    void setvalue(int x,int y)
    {
        a=x;
        b=y;
    }
    void printvalue()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }

};
int main()
{
    complex c1,c2;
    c1.setvalue(3,6);
    c2.setvalue(7,1);
    c1.printvalue();
    c2.printvalue();
}
