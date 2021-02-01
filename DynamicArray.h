#pragma once
template <typename T>
class DynamicArray
{
   
   
private:

    T* m_items;
    int m_length;


public:
    DynamicArray();

    void addItem(T);

    void sortItems(T arr[], T lenght);

    bool removeItem(T arr[], T);

    bool getItem(int index, T*);

    int getLenght(T arr[]);

  
};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{
   
    m_items[5];
}


template<typename T>
inline void DynamicArray<T>::addItem(T)
{
    m_items[T] - getLenght = m_items[T] -  getLenght + 1;
}



//Sorts the Items given
template<typename T>
inline void DynamicArray<T>::sortItems(T arr[], T lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        for (int j = lenght - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;

            }
        }
    }
}


template<typename T>
inline bool DynamicArray<T>::removeItem(T arr[], T)
{
    return false;
}


template<typename T>
inline bool DynamicArray<T>::getItem(int index, T*)
{
    return false;
}



//Gets the lenght of the array
template<typename T>
inline int DynamicArray<T>::getLenght(T arr[])
{
    return m_length;
}
