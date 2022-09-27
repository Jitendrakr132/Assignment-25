#include<iostream>
using namespace std;
class Number
{
private:
    int a,b,c; //three instance memebers variable
public:
    void setvalue(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void greatN()
    {
        if(a>b&&a>c)
            cout<<a;
        else if(a<b&&b>c)
            cout<<b;
        else
            cout<<c;
    }

};
int main()
{
    Number n;
    n.setvalue(30,6,4);
    cout<<"Greatest numbers"<<n.greatN();
}
