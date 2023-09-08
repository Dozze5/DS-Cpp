#include<iostream>

using namespace std;

class Quick_Sort{
    public:

    int partition(int *arr,int bgn,int end){
        int pivot = arr[end];
        int i = bgn-1;
        for(int j = bgn; j<end;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[end]);
        return i+1;
    }

    void Quick(int *arr,int bgn,int end){
        if(bgn<end){
            int pivot = partition(arr,bgn,end);
            Quick(arr,bgn,pivot-1);
            Quick(arr,pivot+1,end);
        }
    }


};

int main()
{
    Quick_Sort obj;
 
 int n;
 cin>>n;
 int arr[n];

 for(int i = 0; i < n; i++) cin>>arr[i];

 obj.Quick(arr,0,n);
 for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

  return 0;
}