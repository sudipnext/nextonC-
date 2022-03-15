// Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
//  Write conversions functions so that the program can convert objects of both types.
#include<iostream>
using namespace std;


class m_and_c{
    float m, c;
    public:
    m_and_c(){
        m=0;
        c=0;
    }
    m_and_c(float x, float n){
        m = x;
        c =n;
    }
    void display(){
        cout << m << " m"<< c << " cm";
    }
};
class f_and_inch{
    float f, i;
    public:
    f_and_inch(){
        f=0;
        i=0;

    }
    f_and_inch(float a, float b){
        f= a;
        i=b;
    }
    void display(){
        cout << f << i<<endl;
    }
    operator m_and_c(){
        int meter;
        float centi, total_meter;
        total_meter = (f + i /12.0)/3.33;
        meter = (int)total_meter;
        centi= (total_meter-meter)*100;
        return m_and_c(meter, centi);

    }
};

int main(){
    m_and_c dm;
    f_and_inch df(20, 8);
    dm = df;
    cout << "The value in feet and inches is";
    df.display();
    cout << "-------------";
    dm.display();
    return 0;
}