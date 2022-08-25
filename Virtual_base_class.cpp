#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout<<"Your roll no is: "<< roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float math, physics, chemistry;
    public:
        void set_marks(float m1, float m2, float m3){
            math = m1;
            physics = m2;
            chemistry = m3;
        }
        void print_marks(){
            cout<<"Your marks are: "<<math<<" "<<physics<<" "<<chemistry<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private :
        float total;
    public:
        void display(){
            total = math + physics + chemistry + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total is: "<<total<<endl;
        }
};

int main() {
    Result Shahid;
    Shahid.set_number(67);
    Shahid.set_marks(89.5, 78.5, 98.5);
    Shahid.set_score(89.5);
    Shahid.display();
    return 0;
}