#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool isPillandrome(string str, int first, int last){
    if(first >=last){
        return true;
    }
    return ((str[first] == str[last]) && isPillandrome(str, first+1, last-1));
}



int main(){
    string passString= "sudippidus";
    cout << isPillandrome(passString, 0, passString.length()-1);
    return 0;
}