#include<iostream>

using namespace std;

void TowerOfHanoi(int d , char A , char B , char C){
    static int n = 1;
    if(d>0){
        TowerOfHanoi(d-1 , A , C , B);
        cout<<n++<<" move "<<d<<" from "<<A<<" to "<<C<<endl;
        TowerOfHanoi(d-1,B,A,C);
    }
}

int main()
{
 
  int d;
  cin>>d;
  TowerOfHanoi(d,'A','B','C');
  return 0;
}