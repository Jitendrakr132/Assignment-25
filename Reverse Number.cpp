#include<iostream>
using namespace std;
class Reverse
{
private:
    int n;
public:
    void setvalue(int x)
    {
        n=x;
    }
    void reverse()
    {
        int r,s=0;
        while(n!=0)
        {
        r=n%10;
        s=s*10+r;
        n=n/10;
        }
        cout<<s;
    }

};
int main()
{
    Reverse r1;
    r1.setvalue(359);
    r1.reverse();
}
