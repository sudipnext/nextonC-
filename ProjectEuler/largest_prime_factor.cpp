#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool isPrime(int num)
{
    int flag = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0 && num > 2)
        {
            return false; // False
            break;
        }
        else{
            return true;
            break;
        }
    }
}
int primeFactors(int num)
{
    std::queue<int> arr;
    int arr[50];
    for (int i = num; i > 2; i--)
    {
        if ((isPrime(i)==1) && (num % i == 0) && (i < num))
        {
            arr.push(num/i);
        }
    }
}
int main()
{
    cout << primeFactors(13195);
}