#include<iostream>
using namespace std;

class Insertion{
    public:

    void insertion_Sort(int *arr, int n){

        int key;
        for(int i = 1; i < n; i++){
            key = arr[i];
            int j = i-1;

            while(j>=0 && arr[j]>=key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
};


int main()
{
    Insertion obj;
  int n;
  cin>>n;
  int arr[n];

  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

    obj.insertion_Sort(arr,n);
   
  cout<<endl;

    for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}