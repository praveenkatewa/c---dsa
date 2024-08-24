#include <bits/stdc++.h>
using namespace std;

// a=1 b=2 
//1 2 3 5 8 13 21...

// a3=a1+a2 
// a4=a2+a3
// a5=a3+a4
// an= a(n-2) + a(n-1)


int main()
{
    int a=1,b=2, c;
    cout<<a<<b<<" ";
    for(int i=3;i<8;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
        
    }
    
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
// a=1 b=2 c=3 d
// 1 2 3 4 6 9 13 19 28 ....
// a4 = a1 + a3
// d  = a  + c  

//  a5 =  a2 + a4
//  e =   b +  d
 

// a6 = a3 + a5
// f  = c  +  e

// a7 = a4 + a6
// an = a(n-3) + a(n-1)


int main()
{
   
    int a = 1,b=2,c=3,d;
    int arr[10];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    for(int i=3;i<10;i++)
    {
        arr[i]=arr[i-3]+arr[i-1];
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}


#include<bits/stdc++.h>
using namespace std;

int main() {
    

    int a = 1, b = 1, c;

    cout  << a << " " << b << " ";

    for (int i = 3; i <= 10; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}

//q2)   1  2 2 4 8 32 ....
#include<bits/stdc++.h>
using namespace std;

int main() {
    

    int a = 1, b = 2, c;

    cout  << a << " " << b << " ";

    for (int i = 3; i <= 7; i++) {
        c = a *b;
        cout << c << " ";
        a = b;
     b= c;
    }

    cout << endl;
    return 0;
}


// q3)  1 2 3 6 11 20 ....
    //  a=1 b=2 c=3  d =a+b+c

    #include<bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    int arr[n];
     arr[0] = 1; 
    arr[1] = 2; 
    arr[2] = 3; 
    
   
    for(int i = 3; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3]; 
        
    }
    
  
    for(int i = 0; i < n; i++) {
        cout <<arr[i] << " ";
    }
    return 0;
}
// q-4 1 2 4 8 16 32 ....
    //  a=1 b=2 c= power of 2
    #include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6; 
    int arr[n];
    
   
    arr[0] = 1; 
    arr[1] = 2; 
    
    
    for(int i = 2; i < n; i++) {
        arr[i] = pow(2, i); 
    }
    
   
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//  q-5 ) 1 2 3 6 18 .....
    //  a =1 b=2 c=3 d =c*b 

    #include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; 
    int arr[n];
    
 
    arr[0] = 1; 
    arr[1] = 2; 
    arr[2] = 3; 
    
    
    for(int i = 3; i < n; i++) {
        arr[i] = arr[i-1] * arr[i-2]; 
    }
    
   
    for(int i = 0; i < n; i++) {
        cout <<arr[i] << " ";
    }
    return 0;
}

6. there are four variables a = 1 b= 2 c= 3 c=4
   formulate  1 2 3 4 5 7 9 12 16  and so on

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10; 
    int arr[n];
    
 
    arr[0] = 1; 
    arr[1] = 2; 
    arr[2] = 3;
    arr[3]=4;
    
    
    for(int i = 4; i < n; i++) {
        arr[i] = arr[i-1] +arr[i-2]+arr[i-3]; 
    }
    
   
    for(int i = 0; i < n; i++) {
        cout <<arr[i] << " ";
    }
    return 0;
}
