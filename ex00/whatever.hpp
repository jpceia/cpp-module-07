/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:32:00 by jpceia            #+#    #+#             */
/*   Updated: 2022/01/04 12:49:30 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
    T holder;

    holder = a;
    a = b;
    b = holder;
}

template <typename T>
T min(T a, T b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif
