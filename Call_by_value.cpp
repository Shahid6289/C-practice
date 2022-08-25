#include<iostream>
using namespace std;

void swapPointers(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 6, y = 8;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointers(&x, &y);
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
    return 0;
}