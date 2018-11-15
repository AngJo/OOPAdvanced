//
// Created by User on 15-11-2018.
//

#include "Module.h"
#include <iostream>

Module::Module() {}
Module::Module(string naam, int ec) : naam(naam), ec(ec) {}

void Module::addToVector(Module* m) {modules.push_back(m);}

void Module::createModules() {
    Module* moduleProgramming = new Module("Programming", 2);
    addToVector(moduleProgramming);
    Module* moduleTekenen = new Module("Tekenen", 3);
    addToVector(moduleTekenen);
    Module* moduleDesign = new Module("Design", 4);
    addToVector(moduleDesign);
}

void Module::printModules() {
    //foreach module in vector moduless print the name, ecs, docent & students following the course

}