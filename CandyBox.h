#pragma once
namespace CandyFactory
{
    template <typename T>
    class CandyBox
    {
    private:
        T *items;
        int capacity;
        int count;

    public:
        CandyBox(int size);
        ~CandyBox();
        bool addItem(const T &newItem);
        bool removeItem(int index);
        void displayItems() const;
    };
}
#include "Candy.inl"