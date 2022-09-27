#include<iostream>
using namespace std;
class Factorial
{
private :
    int n;// number
    int fact;
public:
    void setN(int a)
    {
        n=a;
    }
    int getN()
    {
        return n;
    }
    int  getfactorial()
    {
        return fact;
    }
    void caculatefacto()
    {
        int f=1,i=1;
        if(n<=0)
        {
            fact=1;
            return;
        }
        while(i<=n)
        {
            f=f*i;
            i++;
        }
        fact=f;
    }
};
int main()
{
    Factorial f;
    f.setN(5);
    f.caculatefacto();
    cout<<"factorial of "<<f.getN()<<" is "<<f.getfactorial();
}
