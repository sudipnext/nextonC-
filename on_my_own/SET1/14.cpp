#include <iostream>
using namespace std;
// template <typename T>
// T add(T x, T y)
// {
//     return (x + y);
// }
// int main()
// {
//     cout << "Additio of 2 float variables 3.4 and 5.5 are:- "<< add<float>(3.4, 5.5)<<endl;

//     cout << "Addition of 2 integer 3 and 4 is " << add<int>(3, 4);
// }
//for 2 type of data
template <typename T, typename U>
U add(T x, U y){
    return(x+ y);
}
int main(){
    cout << "Ans is "<< add<int , double>(3, 4.5);
}