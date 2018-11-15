//
// Created by User on 15-11-2018.
//

#include "Docent.h"

Docent::Docent(){}
Docent::Docent(string naam) : name(naam){/*werkt hetzelfde als this->name = naam;*/ }

void Docent::addToVector(Docent d) {docenten.push_back(d);}