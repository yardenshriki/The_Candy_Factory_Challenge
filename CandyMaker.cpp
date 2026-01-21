#include <iostream>
#include "CandyMaker.h"
#include <cstring>
namespace CandyFactory
{
    CandyMaker::CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName)
       :SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName)
    {
    }
    void CandyMaker::makeCandy(const char* candyName)
    {
     if (!candyName) candyName = "";
     std::cout <<"Using sugar from " << getSugarName() << "and chocolate from"<< getChocolateName() << "to create" << candyName << "!" << std::endl;

    }
}
