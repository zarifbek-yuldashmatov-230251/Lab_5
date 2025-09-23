#include <iostream>
#include <string>
#include "Student.h"
using namespace std;




int main() {

    Student Student1;
    
    Student Student2("Andrey", 250098, 3.85, "Computer Science");
    
    Student1.display();
    cout << endl;
    
    Student2.display();
    cout << endl;
    
    Course sampleCourse("Calculus I", "Math203", 3);
    sampleCourse.display();
    cout << endl;
    
    Course favoriteCourse("Data Structures", "CS201", 4);

    Student2.set_enrolledCourse(favoriteCourse);
    
    Student2.display();
    cout << endl;
    
    Student1.set_name("Bob");
    Student1.set_id(230233);
    Student1.set_gpa(3.7);
    Student1.set_department("Engineering");
    
    Course friendCourse("Physics I", "PHYS101", 3);
    Student1.set_enrolledCourse(friendCourse);
    
    Student1.display();
    cout << endl;
    
    cout << Student1.get_name() << endl;
    cout << Student1.get_id() << endl;
    cout << Student1.get_gpa() << endl;
    cout << Student1.get_department() << endl;
    
    return 0;
}
