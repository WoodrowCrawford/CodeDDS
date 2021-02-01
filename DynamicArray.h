#pragma once
#include <iostream>
#include "DynamicArray.h"
template <typename T>
class DynamicArray
{
   
   
private:

    T* m_items;
    int m_length;


public:

    
    DynamicArray<T>();
    ~DynamicArray<T>();

    void addItem(T item);

    void sortItems();

    bool removeItem(T item);

    bool getItem(int index, T* item);

    int getLenght();

    void print();

  
};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{
    m_items = nullptr;
    m_length = 0;

}

template<typename T>
inline DynamicArray<T>::~DynamicArray()
{
    delete[] m_items;

}

template<typename T>
inline void DynamicArray<T>::addItem(T item)
{
    T* temp = new T[getLenght() + 1];

    for (int i = 0; i < getLenght(); i++)
    {
        temp[i] = m_items[i];
    }

    temp[getLenght()] = item;

    m_items = temp;
    m_length++;
}



//Sorts the Items given
template<typename T>
inline void DynamicArray<T>::sortItems()
{

    for (int i = 0; i < getLenght(); i++)
    {
        for (int j = getLenght() - 1; j > i; j--)
        {
            if (m_items[j] < m_items[j - 1])
            {
                T temp = m_items[j];
                m_items[j] = m_items[j - 1];
                m_items[j - 1] = temp;
            }

        }
    }
}


template<typename T>
inline bool DynamicArray<T>::removeItem(T item)
{
    bool itemRemoved = false;

    T* temp = new T[getLenght() - 1];
    int j = 0;

    for (int i = 0; i < getLenght(); i++)
    {
        if (item != m_items[i])
        {
            temp[j] = m_items[i];
            j++;

        }
        else
        {
            itemRemoved = true;
        }
    }

    m_items = temp;

    m_length--;
    return itemRemoved;
}


template<typename T>
inline bool DynamicArray<T>::getItem(int index, T* item)
{
    if (!item || index < 0 || index >= getLenght())
        return false;

    item = &m_items[index];
}



//Gets the lenght of the array
template<typename T>
inline int DynamicArray<T>::getLenght()
{
    return m_length;
}

template<typename T>
inline void DynamicArray<T>::print()
{
    for (int i = 0; i < getLenght(); i++)
    {
        std::cout << m_items[i] << std::endl;
    }

}


