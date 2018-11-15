//
// Created by User on 15-11-2018.
//

#ifndef OPDRACHT1_MODULE_H
#define OPDRACHT1_MODULE_H
#include <string>
#include <vector>
#include "Docent.h"
#include "Student.h"
using namespace std;

class Module {
public:
    Module();
    Module(string naam, int ec);
    void addToVector(Module* m);
    void createModules();
    void wijsDocentAanModule(Docent d); //Zit dit in de juiste class?
    void printModules();
    void wijzigModule();
    void verwijderStudent(Student s);
private:
    string naam;
    int ec;
    //Weet niet of deze erin zit
    vector<Module*> modules;
    Docent d;
    vector<Student> studenten; //Module kan door meerdere studenten gevolgd worden
};


#endif //OPDRACHT1_MODULE_H
