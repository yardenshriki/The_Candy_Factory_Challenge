#include <iostream>
#include <type_traits>

namespace CandyFactory
{
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
        for (int i = 0; i < count; i++)
        {
            if (std::is_same<T, char *>::value)
            {
                std::cout << items[i] << std::endl;
            }
        }
    }
}
