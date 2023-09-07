#include<iostream>

using namespace std;

/* -------------------------------------------------------------------------- */
/*                               Static Variable                              */
/* -------------------------------------------------------------------------- */

int fun(int n){
    static int x = 0;
    if(n==0){
        return 0;
    }

        x++;
     return  fun(n-1)+x;
}

int fun2(int n){
    static int x = 0;
    if(n==0){
        return 0;
    }

        
     return  fun2(n-1)+ x++;
}

/* -------------------------------------------------------------------------- */
/*                               Global Variable                              */
/* -------------------------------------------------------------------------- */

int y = 0;

int fun3(int n){
      
    if(n==0){
        return 0;
    }

      y++; 
     return  fun3(n-1)+y;
}

int z = 0;

int fun4(int n){
      
    if(n==0){
        return 0;
    }

      y++; 
     return  fun4(n-1)+ z++;
}

int main()
{
    cout<<"Static\n";
 cout<<fun(5);
 cout<<endl<<fun2(5);
 cout<<"\nGlobal\n";
 cout<<fun3(5);
 cout<<endl<<fun4(5);
  return 0;
}