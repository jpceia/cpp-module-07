/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:58:06 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/04 12:49:15 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, int length, void (*f)(T &))
{
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

template <typename T>
void iter(T *arr, std::size_t length, void (*f)(const T&))
{
    for (std::size_t i = 0; i < length; i++)
        f(arr[i]);
}

        f(arr[i]);
}

#endif