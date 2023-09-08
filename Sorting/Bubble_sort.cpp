#include<iostream>

using namespace std;

class Bubble{
    public:

    void bubble_Sort(int *arr , int n){


        for(int i = 0; i < n-1; i++){
            bool swapp = false;

          for(int j = 0; j < n-i-1; j++){

            if(arr[j]>arr[j+1]){ swap(arr[j],arr[j+1]);  swapp = true;} // Bubble sort Logic

          }


          if(!swapp) break;

        }
    }

    void recursive_Bubble_sort(int *arr,int n){
        //Base case
        if(n==1) return;

        int recur_count = 0;

        for(int i = 0; i < n-1; i++){
            if(arr[i]>arr[i+1]) { swap(arr[i],arr[i+1]); recur_count++;}
        }

        if(recur_count==0) return;

        recursive_Bubble_sort(arr,n-1);
    }
};

int main()
{
    Bubble obj;
  int n;
  cin>>n;
  int arr[n];

  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

//   obj.bubble_Sort(arr,n);
    obj.recursive_Bubble_sort(arr,n);
  cout<<endl;

    for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}