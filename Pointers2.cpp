#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is: "<<*(ptr)<<endl;

    //new operator

    float *p = new float(30.4);
    cout<<"The value of p is: "<<*(p)<<endl;

    int *arr = new int[10];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete [] arr;
    cout<<"The value of arr is: "<<arr[0]<<endl;
    cout<<"The value of arr is: "<<arr[1]<<endl;
    cout<<"The value of arr is: "<<arr[2]<<endl;

    // delete operator



    return 0;
}