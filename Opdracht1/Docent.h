//
// Created by User on 15-11-2018.
//

#ifndef OPDRACHT1_DOCENT_H
#define OPDRACHT1_DOCENT_H
#include <string>
#include <vector>
#include "Module.h"

using namespace std;

class Docent {
public:
    Docent();
    Docent(string naam);
    void addToVector(Docent d);
    void createDocenten();

private:
    string name;
    vector<Docent> docenten;
    vector<Module> modules; //Een docent kan meerdere modules geven
};


#endif //OPDRACHT1_DOCENT_H
