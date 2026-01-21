#include "CandyBox.h"
#include "CandyMaker.h"
#include "SugarSupplier.h"
#include "ChocolateSupplier.h"

int main()
{
    CandyFactory::CandyMaker maker("SugarCo", "ChocoDelight");
    maker.supplySugar();
    maker.supplyChocolate();
    maker.makeCandy("Fudge Surprise");

    // The CandyBox
    CandyFactory::CandyBox<const char *> box(5);
    box.addItem("SourLollipop");
    box.addItem("MintChoco");
    box.displayItems();
    box.removeItem(1);
    box.displayItems();
    return 0;
}