// Question 1: Write a C++ program that takes the age of a person as input and prints whether they are eligible to vote (age >= 18).
#include<bits/stdc++.h>
using namespace std;

int main(){
    ;int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"Eligible for Voting"<<endl;
    }else{
        cout<<"Not Eligible for Voting"<<endl;
    }
}
// Question 2: Write a C++ program that takes an integer as input and prints whether it is positive, negative, or zero.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
        cout<<"Positive"<<endl;
    }
    else if(n==0){
        cout<<"Zero"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
    return 0;
}
// Question 3: Write a C++ program that takes marks of a student as input and prints their grade according to the following criteria:

// Marks >= 90: Grade A
// Marks >= 75: Grade B
// Marks >= 50: Grade C
// Marks < 50: Grade F
#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90) cout<<"Grade A"<<endl;
    else if(marks>=75) cout<<"Grade B"<<endl;
    else if(marks>=50) cout<<"Grade C"<<endl;
    else if(marks<50) cout<<"Grade F"<<endl;
    return 0;
}
// Question 4. Write a C++ program that takes three integers as input and prints the second largest of the three using nested if-else statements.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    int second_largest;
    if(a>b){
        if(a>c){
            if(b>c){
                second_largest=b;
            }else{
                second_largest=c;
            }
        }else{
            second_largest=a;
        }
    }else{
        if(b>c){
            if(a>c){
                second_largest=a;
            }else{
                second_largest=c;
            }
        }else{
            second_largest=b;
        }
    }
    cout<<"Second Largest Number is : "<<second_largest<<endl;
}
// Question 5: Write a C++ program that includes a function double calculateArea(double radius) to calculate the area of a circle. Use this function to read the radius from the user and print the area of the circle.
#include<bits/stdc++.h>
using namespace std;

double calculateArea(double radius){
    double pi=3.14;
    return pi*radius*radius;
}

int main(){
    double radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;
    double area=calculateArea(radius);
    cout<<"Are of circle is : "<<area<<endl;
}