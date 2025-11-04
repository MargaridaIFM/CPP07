/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:54:45 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/04 13:26:56 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array():nbr_elem(0)
{
    std::cout << "Construter: Created a empty array!" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int nbr_elem):nbr_elem(nbr_elem)
{
    if(nbr_elem > 0)
		this->array = new T[nbr_elem]();
	else
		this->array = NULL;
    std::cout << "Construter: Created "<< this->nbr_elem << " elements of the array!" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    this->nbr_elem = copy.nbr_elem;
    if (this->nbr_elem > 0)
    {
        this->array = new T[nbr_elem];
        for (unsigned int i = 0; i < this->nbr_elem; i++)
            array[i] = copy.array[i];
    }
    else
        this->array = NULL;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if(this != &copy)
    {
         this->nbr_elem = copy.nbr_elem;
         if(this->nbr_elem > 0)
         {
            this->array = new T[nbr_elem];
            for (unsigned int i = 0; i < this->nbr_elem; i++)
                array[i] = copy.array[i];
         }
         else
            this->array = NULL;
    }
    return(*this);
}

template <typename T>
Array<T>::~Array() 
{
    if(this->array != NULL)
        delete [] this->array;
};

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if(n < this->nbr_elem)
		return this->array[n];
	else
		throw std::exception();
}
    

template <typename T>
unsigned int Array<T>::getSize()
{
    return(this->nbr_elem);
}