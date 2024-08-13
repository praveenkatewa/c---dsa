#include<bits/stdc++.h>
using namespace std;

int main(){
    // int size=5;
    // int arr[size]={1,3,8,4,2};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<=size-1;i++){
        cout<<"Enter Element "<<i<<" :";
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
   
}

//Question 1. WAP in c++ to take the input of array size from user, and initialize an array. After that, take the values of the array from user, and print the elements of the array, and also the sum of all the elements inside the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,sum=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the Element"<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<"Sum : "<<sum<<endl;
}
//Question 2. WAP in c++ to take the input of array size from user, and initialize an array. After that, take the values of the array from user, and print the odd and even numbers seperately from the array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Even Numbers: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    cout<<"Odd Numbers: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}  
//Question 4. WAP in c++ to take the input of array size from user, and initialize an array. After that, take the values of the array from user, and find the maximum and minimum number in the array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";

        cin>>arr[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum Element : "<<max<<endl;
    cout<<"Minimum Element : "<<min<<endl;
}
// WAP in c++ to take the input of array size from user, and initialize an array. After that, take the values of the array from user, and find the second largest number in the array.