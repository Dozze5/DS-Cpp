// #include<iostream>

// using namespace std;

// double e(int x, int n){
//     static double P = 1, F = 1;
//     double ret;

//     if(n == 0) return 1;

//     else{
//         ret = e(x , n-1);
//         P *= x;
//         F *= n;
//     }
//     return double(ret+double(P/F));
// }

// /* -------------------------------------------------------------------------- */
// /*                          Taylor Series Horner Rule                         */
// /* -------------------------------------------------------------------------- */

// double Horner(int x , int n){
//     static double s = 1;
//     if(n == 0) return s;

//     s = 1+(x*s/n);

//     return Horner(x,n-1);
// }

// int main()
// {
//     int x,n;
//     cin>>x>>n;
//  cout<<"Exponent of e^"<<x<<" Using Taylor is :: "<<e(x,n);

//   cout<<"\n\nExponent of e^"<<x<<" Using Horner is :: "<<Horner(x,n);
//   return 0;
// }

#include <iostream>

using namespace std;
int fun (int n)

       { 

int x=1, k; 

if (n==1) return x; 

for (k=1; k<n; ++k) 

x=x + fun (k) * fun (n - k); 

return x; 

        }

int main()
{
    int x = 5;

   

    cout<<fun(x);
    // cout<<&x;
    return 0;
}