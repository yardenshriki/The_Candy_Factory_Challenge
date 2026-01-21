// yarden shriki 322239526
// lior zahavi 325082071
#include "ChocolateSupplier.h"
#include <iostream>
#include <cstring>

namespace CandyFactory
{
    ChocolateSupplier::ChocolateSupplier(const char *supplierName) : chocolateName(nullptr)
    {
        if (supplierName != nullptr)
        {
            chocolateName = new char[std::strlen(supplierName) + 1];
            std::strcpy(chocolateName, supplierName);
        }
    }
    ChocolateSupplier::~ChocolateSupplier()
    {
        delete[] chocolateName;
        chocolateName = nullptr;
    }
    void ChocolateSupplier::setChocolateName(const char *newName)
    {
        delete[] chocolateName;
        chocolateName = nullptr;
        if (newName != nullptr)
        {
            chocolateName = new char[std::strlen(newName) + 1];
            std::strcpy(chocolateName, newName);
        }
    }
    void ChocolateSupplier::supplyChocolate()
    {
        std::cout << this->chocolateName << " is now supplying chocolate!\n";
    }
}