/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuture <phuture@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:09:15 by phuture           #+#    #+#             */
/*   Updated: 2025/01/24 13:26:12 by phuture          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

/* void print(int &x)
{
    std::cout << x << std::endl;
} */

void add_one(int &x)
{
    x += 1;
}

void add_q(std::string &q)
{
    q = q + "_q";
}


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    std::string arr2[] = {"super", "table", "of", "string"};
    iter(arr, 5, add_one);
    iter(arr, 5, print);
    iter(arr2, 4, add_q);
    iter(arr2, 4, print);
}