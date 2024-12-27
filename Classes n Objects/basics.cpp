#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        //properties    / data members
        int age;
        int weight;
        int height;
        string name;

        //constructor
        Student (){
            cout<<"I will be called at object initialisation"<<endl;
            this->age=19;
            this->weight=85;
            this->height=180;
            this->name="Pratham";
        }
        
        //destructor
        ~Student(){
            cout<<"I am destuctor"<<"\n";
        }


        //behaviours    / member functions
        void running (){
            cout<<"I am running "<<endl;
        }

        void studying(){
            cout<<name<<" is studying"<<endl;
        }
};


int main(){

    //static way to create object
    // Student s1;
    // s1.age=20;
    // s1.name="Pratham";
    // s1.studying();

    //dynamic way to create object
    // Student *s=new Student();
    // s->age=50;
    // //OR
    // (*s).name="PRatham";
    // (*s).studying();

    Student *s=new Student();
    delete s;
    



    return 0;
}

// Constructor 
// => It is a special method that is invoked automatically at the time of object creation . It is used to initialise the data members of new objects of generally.
//    The constructor in C++ has the same name as the class or structure. 