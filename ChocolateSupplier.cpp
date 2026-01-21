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
    ChocolateSupplier::ChocolateSupplier(const ChocolateSupplier &other)
    {
        *this = other;
    }
    ChocolateSupplier &ChocolateSupplier::operator=(const ChocolateSupplier &other)
    {
        if (this == &other)
            return *this;

        delete[] chocolateName;
        chocolateName = nullptr;
        if (other.chocolateName != nullptr)
        {
            chocolateName = new char[std::strlen(other.chocolateName) + 1];
            std::strcpy(chocolateName, other.chocolateName);
        }
        return *this;
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
        std::cout << this->chocolateName << " is now supplying chocolate!";
    }
}