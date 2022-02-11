// Write a program with classes to represent a circle, rectangle, and triangle. 
// Each class should have data members to represent the actual objects and member
//  functions to read and display objects, find perimeter and area of the objects,
//  and other useful functions. Use the classes to create objects in your program.
#include<iostream>
#include <math.h>
using namespace std;
class circle{
    private:
    int r;
    public:
    void set(int x){
        r=x;
    }
    int area(){
        int area = 3.14 * r * r;
        return area;
    }
    int perimeter(){
        int peremeter = 2 * 3.14 * r;
        return peremeter;
    }
};
class rectangle{
    private:
    int l, bd;
    public:
    void set(int x, int y){
        l=x;
        bd=y;
    }
    int area(){
        int area = l * bd;
        return area;
    }
    int perimeter(){
        int peremeter = 2*(l+bd);
        return peremeter;
    }
};
class triangle{
        private:
    int a, b, c;
    public:
    void set(int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }
    int area(){
        int s= a+b+c;
        int area = s * sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    int perimeter(){
        int peremeter = a+b+c;
        return peremeter;
    }

};

int main(){
    int r, l, bd, a, b, c, check;
    circle q;
    rectangle w;
    triangle e;
    cout << "---------------------------------Area and perimeter calculator-----------------------------------\n";
    cout << "Which area you want to calculate for circle = 0, rectangle=1, triangle=3";
    cin >>check;
    if(check == 1){
        cin >> r;
        q.set(r);
        cout << q.area()<<endl;
        cout << q.perimeter()<<endl;
    }else if(check ==2){
        cin  >> l >>bd;
        w.set(l, bd);
        cout << w.area()<< endl;
        cout << w.perimeter()<<endl;
    }
    else if(check == 3){
        cin  >> a >> b >>c;
        e.set(a,b,c);
        cout << e.area()<<endl;
        cout << e.perimeter()<<endl;
    }
}