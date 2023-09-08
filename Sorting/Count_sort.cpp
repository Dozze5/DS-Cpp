#include<iostream>

using namespace std;

class Count{
    public:
    int getMax(int arr[] , int n);
    void count_Sort(int arr[], int n);
};

int Count :: getMax(int arr[] , int n){
    int max = arr[0];

    for(int i = 0; i < n; i++)  if(arr[i]>max) max = arr[i];

    return max;

}

void Count :: count_Sort(int arr[], int n){
    int max = getMax(arr,n);
    int Counting[max+1];
    cout<<max<<endl;
    int output[n];
  

    for(int i = 0; i < max+1; i++){ Counting[i] = 0;}

    for(int i = 0; i < n; i++){ ++Counting[arr[i]];}

    for(int i = 1; i < max+1; i++) {Counting[i] += Counting[i-1];}

    // for (int i = 0; i < max+1; i++)
    // {
    //     cout<<Counting[i]<<" ";
    // }
    
    for(int i = n-1; i >= 0; i--){
        output[Counting[arr[i]] - 1] = arr[i];
        Counting[arr[i]]--;
    }


     for (int i = 0; i < n; i++){
        arr[i] = output[i];
     }
}

int main()
{

  Count obj;
 
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
      cin>>arr[i];
 }
 
 obj.count_Sort(arr,n);

for (int i = 0; i < n; i++)
 {
      cout<<arr[i]<<" ";
 }

  return 0;
}