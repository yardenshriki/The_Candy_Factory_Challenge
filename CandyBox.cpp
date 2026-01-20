#include "CandyBox.h"
#include "stdio.h"
#include "cstring"
namespace CandyFactory
{
    CandyBox::CandyBox(int size) : items(nullptr), capacity(size), count(0)
    {
        if (size != 0)
        {
            items = new T[capacity];
        }
    }
    CandyBox::~CandyBox()
    {
    }
    bool CandyBox::addItem(const T &newItem)
    {
    }
    bool CandyBox::removeItem(int index)
    {
    }
    void CandyBox::displayItems() const
    {
    }
}