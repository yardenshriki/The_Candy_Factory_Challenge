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
        this->supplierName =  new char[strlen(supplierName)+1] ;
        strcpy (this->supplierName ,supplierName);
    }
    SugarSupplier::~SugarSupplier()
    {
        delete [] supplierName;
    }
    void SugarSupplier::setSugarName(const char* newName) // Setter
    {
        if (!newName){ newName= "" ;}
        delete [] supplierName;
        this->supplierName =  new char[strlen(newName)+1] ;
        strcpy (this->supplierName , newName );
    }
    void SugarSupplier::supplySugar()
    {
        std:: cout << supplierName << "is now supplying sugar!"<< std::endl;
    }
}