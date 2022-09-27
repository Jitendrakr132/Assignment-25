#include<iostream>
using namespace std;
class Time
{
private :
    int m;  //mintues
    int s;  //second
    int h; //hour
public :
    void setvalue_of_time(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void printvalue_of_time()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
};
int main()
{
    Time t1,t2;
    t1.setvalue_of_time(3,40,50);
    t2.setvalue_of_time(4,42,14);
    t1.printvalue_of_time();
    t2.printvalue_of_time();
}
