/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:32:00 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/22 22:25:21 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &a, T &b)
{
    T holder;

    holder = a;
    a = b;
    b = holder;
}

template <typename T>
T min(const T& a, const T& b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(const T& a, const T& b)
{
    return (a > b ? a : b);
}
