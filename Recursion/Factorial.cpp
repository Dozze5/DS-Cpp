#include<iostream>

using namespace std;

int Factorial(int n){
    if(n == 0){
        return 1;
    }
    return Factorial(n-1)*n;
}

int main()
{
  cout<<Factorial(10);
  return 0;
}