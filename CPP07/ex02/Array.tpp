/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:54:45 by mfrancis          #+#    #+#             */
/*   Updated: 2026/02/18 09:43:55 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), nbr_elem(0)
{
    std::cout << "Constructor: Created an empty array!" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int nbr_elem) : array(NULL), nbr_elem(nbr_elem)
{
    if (this->nbr_elem > 0)
        this->array = new T[this->nbr_elem]();
    else
        this->array = NULL;

    std::cout << "Constructor: Created " << this->nbr_elem
              << " elements of the array!" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &copy) : array(NULL), nbr_elem(0)
{
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if (this == &copy)
        return *this;

    delete[] this->array;
    this->array = NULL;
    this->nbr_elem = copy.nbr_elem;

    if (this->nbr_elem > 0)
    {
        this->array = new T[this->nbr_elem]();
        for (unsigned int i = 0; i < this->nbr_elem; i++)
            this->array[i] = copy.array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->array;
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n < this->nbr_elem)
        return this->array[n];
    throw std::out_of_range("Array index out of bounds");
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
    if (n < this->nbr_elem)
        return this->array[n];
    throw std::out_of_range("Array index out of bounds");
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return this->nbr_elem;
}