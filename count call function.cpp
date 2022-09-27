#include<iostream>
using namespace std;
class Square
{
    private :
  int x;
  int x2;
  static int count;
    public:

        void setvalue(int a)
        {
            x=a;
        }
        int getvalue()
        {
            return x;
        }
        static int getscount()
        {
            count++;
            return count;
        }
        int getsquare()
        {
            x2=x*x;
            return x2;
        }
};
int Square::count=0;
int main()
{
    Square s1;
    s1.setvalue(5);
    s1.setvalue(6);
    cout<<s1.getvalue()<<"count  function ="<<s1.getscount()<<" Square is= "<<s1.getsquare();
}




