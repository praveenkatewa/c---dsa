/*
Write a C++ function that takes an integer as an argument and uses an 
if-else statement to determine whether the number is even or odd, then returns the result
*/

#include<bits/stdc++.h>
using namespace std;

string checkoddeven(int number){
     if(number % 2 ==0){
          return "even";
     }else{
          return "odd";
     }

}

int main(){
int num;
cout<<"enter the number:";
cin>>num;
cout<<"this number is"<< checkoddeven(num) <<endl;

     return 0;
}