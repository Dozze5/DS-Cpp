
/* -------------------------------------------------------------------------- */
/*                            Using Pascal Triangle                           */
/* -------------------------------------------------------------------------- */


#include<iostream>

using namespace std;

int C(int n , int r){

    if(n == r || r == 0){
      return 1;
    }

    return C(n-1,r-1)+C(n-1,r);
}

int main()
{
  int n , r;
  cin>>n>>r;

  if(n<r || n<0 || r<0){
    cout<<"\t\n\nInvalid\n\n";
  }
  else if(n == r || r == 0){
    cout<<"\n\n\t 1 \n\n";
  }
  else{
    cout<<C(n,r);
  }
  return 0;
}