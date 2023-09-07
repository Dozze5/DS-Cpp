#include<iostream>

using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    // cout<<" "<<n;
    fun(n-1);
    cout<<endl;
    fun(n-1);
    cout<<" "<<n;
}

void fun2(int n){
    if(n==0){
        return;
    }
    cout<<" "<<n;
    fun2(n-1);
    cout<<endl;
    fun2(n-1);
    // cout<<" "<<n;
}

int main()
{
     cout<<endl<<"\n Head\n";
  fun(3);
  cout<<endl<<"\n Tail\n\n";
  fun2(3);
  return 0;
}