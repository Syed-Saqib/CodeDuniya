// If else Statements
// Problem 1 
// Write a program to get the input as age
// and prints if you are adult.

#include<iostream> 
using namespace std;

int main(){
    int age;
    cout<<"Write your age:";
    cin>>age;
    
    if (age >=18)
    cout<<"Congarats! You are an adult.";

    else 
    cout<<"You are not an adult!";
    return 0;
}

// Problem 2:
/*A school has a grading system which are as follows:
a. Below 25 - F
b. 25 to 44- E
c. 45 to 59 - D
d. 60 to 79 - B
e. 80 to 100 -A*/ 
// Write a program to take the input from user as marks and print the grade


#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if (marks<25) {
        cout<<"F";
    }
    else if(marks<=44){
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if (marks<=59){
        cout<<"C";
    }
    else if (marks<=79){
        cout<<"B";
    }
    else if(marks<=100){
        cout<<"A";
    }
    return 0;
    
}

// Problem 3: 
/*Take the age from the user and then decide accordingly
1. If age < 18,
print-> not eligible for job
2. If age >= 18 and age <= 54,
|_print-> "eligible for job
3. If age >= 55 and age <= 57,
print-> "eligible for job, but retirement soon."
4. If age > 57
print-> "retirement time"*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    cout<<"Enter your age: ";
    if(age<18){
        cout<<"You are not elligible for the job!";
    }
    else if (age<=54){
        cout<<"Congrats! You are elligible for the job.";
        if(age>=55){
            cout<<"Retirement soon!.";
        
    }
    else if(age>57){
        cout<<"Hey! Its your retirement time..";
    }
    return 0;
}

