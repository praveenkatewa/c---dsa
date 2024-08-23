// binary data sheet
// jaha par sirf two data hai
// 0000011111
// data usko randomly arrange kar diya hai
// 1000011000000011000000111

// task :000000000000000001111111111111111





#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1} ;
    int count0=0,count1;
    for(auto it:arr){
        if(it==0){
            count0++;
        }
        if(it==1){
            count1++;
        }
    }
// cout<<count0<<" "<<count1;
arr.clear();
for(int i=0;i<count0;i++){
    arr.push_back(0);
}
for(int i=count0;i<count1+count0;i++){
    arr.push_back(1);
}

for(auto it:arr){
    cout<<it<<" ";
}
}

// ===============================================
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,0,0,0,2,2,2,2,1,1,0,0,0,0,0,1,1,1,1} ;
    int count0=0,count1,count2;
    for(auto it:arr){
        if(it==0){
            count0++;
        }
        if(it==1){
            count1++;
        }
        if(it==2){
            count2++;
        }
    }
// cout<<count0<<" "<<count1;
arr.clear();
for(int i=0;i<count0;i++){
    arr.push_back(0);
}
for(int i=count0;i<count1+count0;i++){
    arr.push_back(1);
}
for(int i=count1;i<count1+count2;i++){
    arr.push_back(2);
}


for(auto it:arr){
    cout<<it<<" ";
}
}

