
// 1 here one vector array ,,first add 10 on it then remove .and print
/*
#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int>&arr)
{
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main (){
    vector<int>arr={1,2,3,4,5};
    arr.push_back(10);
    printarr(arr);
    arr.pop_back();
    printarr(arr);
}

*/

// 2 ) to check size and capacity of vector
/*
#include<bits/stdc++.h>
using namespace std;

void printarr(vector<int>&arr)
{
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main (){
    vector<int>arr={1,2,3,4,5};
    int s=arr.size();
    
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(10);
    cout<<s<<" ";
    int c =arr.capacity();
    cout<<c<<" ";
    
}
*/

// 3) reverse array by use empty() or remove last element


/*
#include<bits/stdc++.h>
using namespace std;


int main (){
    vector<int>arr={1,2,3,4,5};
    while(!arr.empty()){
        cout<<arr[arr.size()-1]<<" ";
        arr.pop_back();
    }
    
}

*/

// 4) sum of array

/*
#include<bits/stdc++.h>
using namespace std;


int main (){
    vector<int>arr={1,2,3,4,5};
    int sum=0;
    while(!arr.empty()){
        sum+=arr[arr.size()-1];
        arr.pop_back();
    }
    cout<<sum;
    
}
*/

// 5) factorial of array elements

/*
#include<bits/stdc++.h>
using namespace std;

void printarr(vector <int>&arr){
    for(auto it:arr){
         cout<<it<<" "; 
    }
    cout<<"\n";
}

 int fact(int n){
     int f=1;
     for(int i=1;i<=n;i++){
         f*=i;
     }
     return f;
 }


int main (){
    vector<int>arr={1,2,3,4,5};
    vector<int>factorial;
    
    while(!arr.empty()){
        factorial.push_back(fact(arr[arr.size()-1]));
        arr.pop_back();
    }
    while(!factorial.empty()){
        cout<<factorial[factorial.size()-1]<< " ";
        factorial.pop_back();
    }
}
*/

// 6)
/*


*/


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,2,3,4,5,5};
    vector<int>present(arr.size());
    for(int i=0;i<arr.size();i++)
    {
        present[arr[i]]++;
    }
    for(auto it:present)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    int flag=0;
    for(int i=0;i<present.size();i++)
    {
        if(present[i]>=2)
        {
            flag=1;
            break;
            // cout<<i<<" ";
        }
    }
    if(flag==1)
    {
        cout<<"Contains duplicate elements";
    }
    else
    {
        cout<<"Array is unique\n";
    }
   
}
*/

// 2

/*
#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int>&arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main()
{
    vector<int>numbers={10,20,30,40,50,60,70};
    printarr(numbers);
    cout<<numbers.capacity()<<"\n";
    numbers.erase(numbers.begin()+2,numbers.end());
    printarr(numbers);
    cout<<numbers.capacity()<<"\n";
    numbers.shrink_to_fit();
    cout<<numbers.capacity();
}
*/
// 3
/*
#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int>&arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main()
{
    vector<int>arr={10,20,30,40,50,60,70};
    int key=80;
    auto it = find(arr.begin(),arr.end(),key);
    if(it !=arr.end())
    {
        cout<<"Element mil chuka hai "<<distance(arr.begin(),it);
    }
    else
    {
        cout<<"Not found";
    }
}
*/
// 4
/*
#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int>&arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}
void print2darr(vector<vector<int>>&arr)
{
     for(auto vec:arr)
    {
        for(auto it:vec)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    vector<vector<int>>arr={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    //  print2darr(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i][0]<<"\n";
    }
}

*/



