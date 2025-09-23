#ifndef Student_h
#define Student_h
using namespace std;

class Course {
public:
    string title;
    string code;
    int credits;
    
    Course() {
        title = "Unknown";
        code = "0000";
        credits = 0;
    }
    

    Course(string title, string code, int credits) {
        this->title = title;
        this->code = code;
        this->credits = credits;
    }
    


    void display() {
        cout << "Course: " << title << endl;
        cout << "Code: " << code << endl;
        cout << "Credits: " << credits << endl;
    }
};


class Student {
private:
    string name;
    int id;
    double gpa;
    string department;
    Course enrolledCourse;
    
public:

    Student() {
        name = "No name";
        id = 0;
        gpa = 0.0;
        department = "NA";
    }
    
    Student(string name, int id, double gpa, string department) {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
        this->department = department;
    }
    

    string get_name() {
        return name;
    }
    
    int get_id() {
        return id;
    }
    
    double get_gpa() {
        return gpa;
    }
    
    string get_department() {
        return department;
    }
    
    Course get_enrolledCourse() {
        return enrolledCourse;
    }
    

    void set_name(string name) {
        this->name = name;
    }
    
    void set_id(int id) {
        this->id = id;
    }
    
    void set_gpa(double gpa) {
        this->gpa = gpa;
    }
    
    void set_department(string department) {
        this->department = department;
    }
    
    void set_enrolledCourse(Course course) {
        this->enrolledCourse = course;
    }
    

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Department: " << department << endl;
        cout << "Enrolled course:" << endl;
        enrolledCourse.display();
    }
};

#endif
