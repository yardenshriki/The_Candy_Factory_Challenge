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
        this->supplierName =  new char[std::strlen(supplierName)+1] ;
        std::strcpy (this->supplierName ,supplierName);
    }
    SugarSupplier::~SugarSupplier()
    {
        delete [] supplierName;
        supplierName = nullptr;
    }
    void SugarSupplier::setSugarName(const char* newName) // Setter
    {
        delete [] supplierName;
        if (!newName){ newName= "" ;}
        this->supplierName =  new char[std::strlen(newName)+1] ;
        std::strcpy (this->supplierName , newName );
    }
    void SugarSupplier::supplySugar()
    {
        std::cout << supplierName << "is now supplying sugar!"<< std::endl;
    }
}