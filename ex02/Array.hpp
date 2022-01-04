/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 01:09:15 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/04 12:57:24 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <cstring>

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
    : _arr(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) :
    _arr(new T[n]()), _size(n)
{
}

template <typename T>
Array<T>::Array(Array const &rhs)
    : _size(rhs._size)
{
    _arr = new T[rhs._size];
    for (unsigned int i = 0; i < rhs._size; i++)
        _arr[i] = rhs._arr[i];
}

template <typename T>
Array<T>::~Array(void)
{
    delete[] _arr;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &rhs)
{
    if (this != &rhs)
    {
        if (rhs._size != _size)
        {
            // needs to reallocate memory
            delete[] _arr;
            _arr = new T[rhs._size];
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

#endif
