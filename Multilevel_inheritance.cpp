#include<iostream>
using namespace std;

class Student {
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};

void Student :: set_roll_number(int r){
    roll_number = r;
}
void Student :: get_roll_number(){
    cout<<"The roll_number is: "<< roll_number <<endl;
}

class Exam: public Student{
    protected:
        float maths;
        float physics;
    
    public:
        void set_marks(float, float);
        void get_marks();
};

void Exam :: set_marks(float M, float P){
    maths = M;
    physics = P;
}

class Result: public Exam{
    protected:
        float total;
        float percentage;
    public:
        void calculate();
        void display(){
            get_roll_number();
            get_marks();
            cout<<"The percentage is: "<< (maths + physics)/2 <<endl;
        }
};

void Exam :: get_marks(){
   cout<<"The marks are in maths is: "<<maths<<endl;
   cout<<"The marks are in physics is: "<<physics<<endl;
}



int main() {
    Result Shahid;
    Shahid.set_roll_number(467);
    Shahid.set_marks(94,90);
    Shahid.display();
    return 0;
}