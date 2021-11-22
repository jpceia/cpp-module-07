/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 00:58:26 by jpceia            #+#    #+#             */
/*   Updated: 2021/11/22 01:06:20 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T> 
void print_type(T& x)
{
    std::cout << x << std::endl;
}

int main(void)
{
    int int_arr[] = {1, 2, 3, 4, 5};
    iter(int_arr, sizeof(int_arr) / sizeof(int_arr[0]), &print_type<int>);

    std::string str_arr[] = {"chaine1", "chaine2", "chaine3"};
    iter(str_arr, sizeof(str_arr) / sizeof(str_arr[0]), &print_type<std::string>);
    return 0;
}
    