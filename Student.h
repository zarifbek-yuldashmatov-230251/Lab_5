#include <iostream>
#include <string>
#ifndef CONST1_H
#define CONST1_H
class Person {
    public:
    string name = "N/A";
    int age = 0;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void introduce() {
        cout<<"My name is "<<name<<" and I'm "<<age<<" years old."<<endl;
    }
    void haveBirthday() {
        age+=1;
        cout<<"My age is "<<age<<" years old."<<endl;
    }
    ~Person() {
        cout<<"Bye bye!"<<endl;
    }
};
    class Student:public Person {
    private:
        string university;
    public:
        Student(string name, int age, string university):Person(name,age) {
            this->university = university;
            cout<<"Confirmed"<<endl;
        }
            void study() {
                cout<<name<<" is studying at "<<university<<"."<<endl;
            }


    };

#endif //CONST1_H

