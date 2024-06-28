#include<iostream>
using namespace std;

class employee
{
  
    private:
            int a,b,c;

    public:
           int d,e;
           void setData(int a1, int b1, int c1);
            void getData()
            {
             cout<<"The value of a is"<<a<<endl;
             cout<<"The value of b is"<<b<<endl;
             cout<<"The value of c is"<<c<<endl;
             cout<<"The value of d is"<<d<<endl;
             cout<<"The value of e is"<<e<<endl;
             }
};

void employee :: setData(int a1, int b1, int c1){
    
        a=a1;
        b=b1;
        c=c1;
}


int main()
{
      employee sudip;
      sudip.d=34;
      sudip.e=45;
      sudip.setData(25,35,45);
     sudip.getData();
      return 0;

}