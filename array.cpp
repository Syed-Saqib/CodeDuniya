#include<bits/stdc++.h>
using namespace std;

int main() {
    // in stack
    int a[10] = {0,1,2,3,4,5,6,7};
    for (auto i : a) {
         cout << *(a+i) << endl;
         cout << a[i] << endl;
         cout << i[a] << endl;
    }   
}