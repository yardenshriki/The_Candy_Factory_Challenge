#pragma once
namespace CandyFactory
{
    class ChocolateSupplier
    {
    private:
        char *chocolateName;

    public:
        ChocolateSupplier(const char *supplierName);
        ~ChocolateSupplier();
        ChocolateSupplier(const ChocolateSupplier &other);
        ChocolateSupplier &operator=(const ChocolateSupplier &other);
        const char *getChocolateName() const
        {
            return chocolateName;
        }
        void setChocolateName(const char *newName);
        void supplyChocolate();
    };
}