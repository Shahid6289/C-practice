#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int i, float p){
            id = i;
            price = p;
        }
        void getData(){
            cout<<"The id of this item is: "<<id<<endl;
            cout<<"The price of this item  is: "<<price<<endl;
        }
};

int main() {
    int size = 5;
    // int *ptr = &size;
    // int *ptr = new int[34];
    int p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for(int i = 0; i < size; i++){
        cout<< "Enter the Id and Price of this item "<< i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}