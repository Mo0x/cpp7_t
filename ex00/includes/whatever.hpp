/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <mgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:43:02 by phuture           #+#    #+#             */
/*   Updated: 2025/01/31 13:45:30 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
    T tmp;
    tmp = y;
    y = x;
    x = tmp;
}

template <typename T> T min(T x, T y)
{
    return (x < y ? x : y);
}

template <typename T> T max(T x, T y)
{
    return (x > y ? x : y);
}
#endif
