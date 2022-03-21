#include<iostream>
using namespace std;
class time
{
    private:
     int hr,min,sec;
    public:
     time():hr(0),min(0),sec(0){}
     time(int h,int m,int s): hr(h),min(m),sec(s){}
     void display()
     {
         cout<<hr<<":"<<min<<":"<<sec<<endl;
     }
     time operator + (time t)
     {
       time temp;
       temp.sec=sec+t.sec;
       temp.min=min+t.min+temp.sec/60;
       temp.sec=temp.sec%60;
       temp.hr=hr+t.hr+temp.min/60;
       temp.min=temp.min/60;
       if(temp.hr>12)
       {
        temp.hr-=12;
       }
       return temp;
    }

};
int main()
{
    time t1(10,25,46);
    time t2 (8,40,47);
    t1.display();
    t2.display();
    time t3;
    t3=t1+t2;
    t3.display();
    return 0;
}