// Pattern 1 : 
#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    pattern1(n);
    return 0;

}

// Pattern 2 :
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";

        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern2(n);
    return 0;

}

// Pattern 3:

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern3(n);
    return 0;

}

// Pattern 4:
void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern4(n);
    return 0;

}

// Pattern 5:
void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<"*";

        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern5(n);
    return 0;

}

// Pattern 6:

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<n-j+1<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern6(n);
    return 0;

}

// Pattern 7:

void pattern7(int n){
// Outer loop for rows
    for(int i=0; i<n; i++){
// For printing spaces before stars
        for(int j=0; j<n-i-1; j++){
            cout<<" ";

        }
// For printing stars in each row
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
// For printing spaces after stars
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pattern7(n);
    return 0;

}