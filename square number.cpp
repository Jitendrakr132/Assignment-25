#include<iostream>
using namespace std;
class Square
{
private:
    int n;
public:
    void setvalue(int x)
    {
        n=x;
    }
    int getvalue()
    {
        return n;
    }
    int  square()
    {
        return n*n;
    }
};
int main()
{
    Square s;
    s.setvalue(5);
    cout<<s.getvalue()<<" "<<"sqaure is="<<s.square();
}
