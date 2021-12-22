/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:32:00 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/22 23:57:04 by jpceia           ###   ########.fr       */
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
T& min(T& a, T& b)
{
    return (a < b ? a : b);
}

template <typename T>
T& max(T& a, T& b)
{
    return (a > b ? a : b);
}
