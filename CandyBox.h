// yarden shriki 322239526
// lior zahavi 325082071
#pragma once
#include <type_traits>
#include <iostream>
#include "cstring"
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
    template <typename T>
    CandyBox<T>::CandyBox(int size) : items(nullptr), capacity(size), count(0)
    {
        if (size > 0)
        {
            items = new T[capacity];
        }
    }
    template <typename T>
    CandyBox<T>::~CandyBox()
    {
        delete[] items;
        items = nullptr;
        capacity = 0;
        count = 0;
    }
    template <typename T>
    bool CandyBox<T>::addItem(const T &newItem)
    {
        if (count >= capacity)
            return false;
        items[count] = newItem;
        count++;
        return true;
    }
    template <typename T>
    bool CandyBox<T>::removeItem(int index)
    {
        if (0 <= index && index < count)
        {
            items[index] = items[count - 1];
            count--;
            return true;
        }
        return false;
    }
    template <typename T>
    void CandyBox<T>::displayItems() const
    {
        std::cout << "All items in the candy box: " << std::endl;
        for (int i = 0; i < count; i++)
        {
            std::cout << items[i] << std::endl;
        }
    }
}