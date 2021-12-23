/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:58:06 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/23 00:06:40 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void iter(T *arr, int length, void (*f)(T &))
{
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

template <typename T>
void iter(T *arr, int length, void (*f)(const T&))
{
    for (int i = 0; i < length; i++)
        f(arr[i]);
}
