#include<iostream>
using namespace std;

int main(){
    int res, n1, n2, tmp;
    cout << "Enter two numbers"<<endl;
    cin >> n1 >> n2;
    tmp = min(n1, n2);
   cout << tmp<<endl;
    for(int i=tmp; i>0; i--){
        if(n1%i==0 && n2%i==0){
            res= i;
            break;
        }
    }
   cout << res;

}