#include <iostream>
using namespace std;

int sum_element(int arr[],int n){
       int sum =0;

       for(int i =0 ; i<n; i++){
                 sum+=arr[i];
       }
       return sum;
}

int main()
{
    int n;
    cout<<"Enter your size or length"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter your number"<<endl;
    for(int i=0;i<n;i++ ){

           cin>>arr[i];
    }
    cout<<"Sum:"<<sum_element(arr,n);
    return 0;
}
