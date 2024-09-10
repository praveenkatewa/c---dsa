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