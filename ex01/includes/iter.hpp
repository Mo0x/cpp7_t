/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuture <phuture@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:57:07 by phuture           #+#    #+#             */
/*   Updated: 2025/01/24 13:14:09 by phuture          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*f)(T &))
{
    if (arr == NULL || f == NULL)
        return ;
    for (size_t i = 0; i < length; i++)
        f(arr[i]);
}

template<typename T>
void print(T &x)
{
    std::cout << x << std::endl;
}