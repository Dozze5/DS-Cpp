#include<iostream>
#include<string>

using namespace std;

int f[100];

void minus1(int n){


     for (size_t i = 0; i < n; i++)
    {
        f[i] = -1;
    }
}



int fib(int n){

    if(n<=1){
        f[n] = n;
        return n;
    }

    else{
        if(f[n-2] == -1){
            f[n-2] = fib(n-2);
        }
        if(f[n-1] == -1){
            f[n-1] = fib(n-1);
        }
    }
     cout<<f[n-2] + f [n-1]<<" ";
    return f[n-2] + f [n-1];
}

int main()
{
 
    int n;
    cin>>n;
    minus1(n);
   cout<<"0 1 "; 
   fib(n);
  return 0;
}