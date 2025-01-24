/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <mgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:31:16 by phuture           #+#    #+#             */
/*   Updated: 2025/01/24 15:47:48 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
    T       *m_arr;
    size_t  m_size;

    public:
    Array():
        m_size(0)
    {
        this->m_arr = new T[this->m_size];
        return ;
    }
    
    Array(size_t n) :
        m_size(n)
    {
        this->m_arr = new T[this->m_size];
        return ;
    }

    Array(Array const &src) :
    m_size(src.size())
    {
        this->m_arr = NULL;
        *this = src;
    }

    Array &operator=(Array const &src)
    {
        if (this->m_arr != NULL)
            delete [] this->m_arr;
        if (src.size() != 0)
        {
            this->m_size = src.size();
            this->m_arr = new T[this->m_size];
            for (size_t i = 0; i < this->m_size; i++)
            this->m_arr[i] = src.m_arr[i];
        }
        return(*this);
    }

    T &operator[](size_t index)
    {
        if(index >= this->m_size || this->m_arr == NULL)
        {
            throw Array::OutOfBound();
        }
        return (this->m_arr[index]);
    }

    ~Array()
    {
        if (this->m_arr != NULL)
        delete[] this->m_arr;
    }
    size_t size(void) const
    {
        return (this->m_size);
    }

    class OutOfBound : public std::exception
    {
        public:
        virtual const char *what() const throw();
    };
};

template <typename T>
const char *Array<T>::OutOfBound::what(void) const throw()
{
    return ("Error, Out of bound array tentative.");
}

#endif
