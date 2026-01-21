#pragma once 
#include "SugarSupplier.h"
#include "ChocolateSupplier.h"

namespace CandyFactory
{
    class CandyMaker : public SugarSupplier, public ChocolateSupplier 
    {
    public:
        CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName);
        void makeCandy(const char* candyName);
    };
}