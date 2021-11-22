/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:32:00 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/22 00:56:20 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void    swap(T &a, T &b)
{
    T	holder;

    holder = a;
    a = b;
    b = holder;
}

template <typename T>
T		min(const T& a, const T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T		max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    return (b);
}
