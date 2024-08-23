
//programming is problem solving
//using function startegy
// because it will increase the code readability
//it will seggregate the code into mutiple functions
//we can re-use the code whenever needed

//problem ==input ouput processing(excution)



/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum;
    return 0;
}
*/

// by using funtion
/*

#include<bits/stdc++.h>
using namespace std;

void summation()
{
    int a,b,sum;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum;
}

int main()
{
    summation();
    return 0;
}
*/

// 2 by funtion
/*
#include<bits/stdc++.h>
using namespace std;

void summation(int a,int b)
{
    int sum;
   
    sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    summation(a,b);
    return 0;
}
*/

// 3 by funtion   ..fxn store in varible
/*
#include<bits/stdc++.h>
using namespace std;

int summation()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    sum=a+b;
    return sum;
}

int main()
{

    int s = summation();
    cout<<"Sum is "<<s;
    return 0;
}
*/


// 4 

/*
#include<bits/stdc++.h>
using namespace std;

int summation(int a, int b)
{
   int sum;
    sum=a+b;
    return sum;
}

int main()
{

     int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    int s = summation(a,b);
    cout<<"Sum is "<<s;
    return 0;
}

*/



// A is prime or not
// B is prime or not
// B ka factorial
// B-A  is prime or not
//  B-A ka factorial



/*
 #include <iostream>
using namespace std;
bool prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}


int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++)
    ans=ans*i;
    
    return ans;
}





int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    cout<<prime(a)<<endl;
    cout<<fact(a)<<endl;
    
    cout<<prime(b)<<endl;
    cout<<fact(b)<<endl;
     cout<<prime(b-a)<<endl;
     
     cout<<fact(b-a)<<endl;
}
*/





/* funtion use with void

void prime(int n)
{
    if(n<2)
    {
        cout<<0<<endl;
    
    return ;
    }


    for(int i=2;i<n;i++){
        if(n%i==0)
        {
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
    return;
}
*/


//  swap of two number 

/*
#include <iostream>
using namespace std;

 void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
    
}

int main()
{
    int a,b;
    
    cin>>a>>b;
    swap(a,b);
    cout<<a<<b;
   

    return 0;
}
*/



//  function overloading here
// same function name are there but parameter are different datatype
/*
#include <iostream>
using namespace std;

 void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
    
}

 void swap(float &c,float &d){
float r=c;
    c=d;
    d=r;
    
}

int main()
{
    int a,b;
    
    cin>>a>>b;
    swap(a,b);
    cout<<a<<b<<endl;
    
    float f1=4.5,f2=3.4;
    swap(f1,f2);
    cout<<f1<<f2;
   

    return 0;
}


*/




//  inbuild funtion of swap in c++
/*
#include <iostream>
using namespace std;

 

int main()
{
    int a,b;
    
    cin>>a>>b;
    swap(a,b);
    cout<<a<<b<<endl;
    
    float f1=4.5,f2=3.4;
    swap(f1,f2);
    cout<<f1<<f2;
   

    return 0;
}
*/



#include<iostream>
using namespace std;
void sayHello(){
    cout <<"hello"<<endl;

}
void assistant(){
    sayHello();
    cout <<"work done"<<endl;

}
int main(){
    assistant();
    return 0;
}