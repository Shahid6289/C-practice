# include<iostream>
using namespace std;

int main ()
{
    int age;
    cout<<"Tell me your age:" <<endl;
    cin>>age;

    if(age<18){
    
    cout<<"You are not allowed to enter the club"<<endl;
    }
    else if (age==18){
    cout<<"You will get the pass"<<endl;
    }
    else{
    cout<<"You are allowed to enter the club"<<endl;
    }
}