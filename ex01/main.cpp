/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:58:26 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/23 00:10:53 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T> 
void print_type(const T& x)
{
    std::cout << x << std::endl;
}

template <typename T>
void double_it(T& x)
{
    x = x + x;
}

int main(void)
{
    int int_arr[] = {1, 2, 3, 4, 5};
    iter(int_arr, 5, &print_type);
    iter(int_arr, 5, &double_it<int>);
    std::cout << std::endl;
    iter(int_arr, 5, &print_type);

    std::string str_arr[] = {"chaine1", "chaine2", "chaine3"};
    iter(str_arr, 3, &print_type<std::string>);
    return 0;
}
