#include "sessionmanager.h"
#include <iostream>
#include <fstream>
using std::ofstream;
#include <cstdlib>

SessionManager::SessionManager()
{

}

void SessionManager::writeData() const
{

    ofstream outdata;
    outdata.open("ejemplo.dat");
    if(!outdata){
        exit(1);
    }

}
