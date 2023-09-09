#include<iostream>

using namespace std;
int Power(int m , int n){
    if(n == 0) return 1;

    return Power(m,n-1)*m;
}

/* -------------------------------------------------------------------------- */
/*                                 Optimized                                  */
/* -------------------------------------------------------------------------- */


int Power2(int m , int n){
    if(n==0) return 1;

    if(n%2==0){
        return Power2(m*m , n/2);
    }
    else{
        return m * Power2(m*m , (n-1)/2);
    }
}

int main()
{
    int count = 0;
    int m,n;
    cin>>m>>n;
  cout<<endl<<Power(m,n)<<endl;

   cout<<endl<<Power2(m,n)<<endl;
  return 0;
}