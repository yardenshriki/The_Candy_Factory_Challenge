// yarden shriki 322239526
// lior zahavi 325082071
#pragma once
namespace CandyFactory
{

    class SugarSupplier
    {
    private:
        char *supplierName;

    public:
        SugarSupplier(const char *supplierName);
        ~SugarSupplier();
        const char *getSugarName() const { return supplierName; } // Getter
        void setSugarName(const char *newName);                   // Setter
        void supplySugar();
    };
}