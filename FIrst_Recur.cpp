#include<iostream>

using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }
}

void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<n<<" ";
    }
}

int main()
{
  fun(4);
  cout<<endl;
  fun2(4);
  return 0;
}