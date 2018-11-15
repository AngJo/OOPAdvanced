//
// Created by User on 15-11-2018.
//

#include "Student.h"

Student::Student() {}
Student::Student(string naam): naam(naam) {}

void Student::addToVector(Student s) {studenten.push_back(s);}

void Student::toonECs() {
    //Tel alle ecs op van elk module, print dan EC
}