/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuture <phuture@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:05:09 by phuture           #+#    #+#             */
/*   Updated: 2025/01/24 14:08:17 by phuture          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
    Array<int> num(14);
    for (size_t i = 0; i < num.size(); i++)
        num[i] = i;
    for (size_t i = 0; i < num.size(); i++)
        std::cout << num[i];
    return (0);
}