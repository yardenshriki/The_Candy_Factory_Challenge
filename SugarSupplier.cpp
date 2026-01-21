// yarden shriki 322239526
// lior zahavi 325082071
#include <iostream>
#include <cstring>
#include "SugarSupplier.h"

namespace CandyFactory
{

    SugarSupplier::SugarSupplier(const char *supplierName) : supplierName(nullptr)
    {
        if (supplierName != nullptr)
        {
            this->supplierName = new char[std::strlen(supplierName) + 1];
            std::strcpy(this->supplierName, supplierName);
        }
    }
    SugarSupplier::~SugarSupplier()
    {
        delete[] supplierName;
        supplierName = nullptr;
    }
    void SugarSupplier::setSugarName(const char *newName) // Setter
    {
        delete[] supplierName;
        supplierName = nullptr;
        if (newName != nullptr)
        {
            this->supplierName = new char[std::strlen(newName) + 1];
            std::strcpy(this->supplierName, newName);
        }
    }
    void SugarSupplier::supplySugar()
    {
        std::cout << supplierName << "is now supplying sugar!\n";
    }
}