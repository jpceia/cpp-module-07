/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 01:09:15 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/22 23:03:58 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>  // for rand()

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _size;

public:
    // Constructors
    Array();
    Array(unsigned int n);
    Array(Array const &rhs);

    // Destructor
    ~Array();

    // Assignation operator overload
    Array &operator=(Array const &rhs);

    // Accessors
    T &operator[](unsigned int i);
    T const &operator[](unsigned int i) const;

    // Getters
    unsigned int size(void) const;
    const T *ptr(void) const;
};

template <typename T>
Array<T>::Array(void)
{
    _size = 0;
    _arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) :
    _size(n)
{
    if (_size > 0)
    {
        _arr = new T[n];
        for (unsigned int i = 0; i < n; i++)
            _arr[i] = 0;
    }
    else
        _arr = NULL;
}

template <typename T>
Array<T>::Array(Array const &rhs)
    : _size(rhs._size)
{
    if (rhs._size > 0)
    {
        _arr = new T[rhs._size];
        for (unsigned int i = 0; i < rhs._size; i++)
            _arr[i] = rhs._arr[i];
    }
    else
        _arr = NULL;
}

template <typename T>
Array<T>::~Array(void)
{
    if (_arr)
        delete [] _arr;
    _arr = NULL;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        if (rhs._size != _size)
        {
            // needs to reallocate memory
            if (_arr)
                delete [] _arr;
            if (rhs._size > 0)
                _arr = new T[rhs._size];
            else
                _arr = NULL;
            _size = rhs._size;
        }
        // copy the values
        for (unsigned int i = 0; i < rhs._size; i++)
            _arr[i] = rhs._arr[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::exception();
    return _arr[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw std::exception();
    return _arr[i];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return _size;
}

template <typename T>
const T *Array<T>::ptr(void) const
{
    return _arr;
}
