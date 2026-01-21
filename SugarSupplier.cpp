#include <iostream>
#include <cstring>
#include "SugarSupplier.h"

namespace CandyFactory {

    SugarSupplier::SugarSupplier(const char* supplierName)
    {
        if (!supplierName) 
        {
            supplierName = "" ;
        }
    }
    SugarSupplier::~SugarSupplier()
    {
        delete [] supplierName;
    }
    void SugarSupplier::setSugarName(const char* newName) // Setter
    {
        delete [] supplierName;
    }
    void SugarSupplier::supplySugar()
    {
    }
}