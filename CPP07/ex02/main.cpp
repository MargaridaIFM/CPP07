/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:36:59 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/04 13:37:55 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp" 

int main () {
    try {
        // Default
        std::cout << "\nDefault constructor:\n";
        Array<int> emptyArray;
        std::cout << "EMPTYarray size: " << emptyArray.getSize() << "\n\n";

        // Size
        std::cout << "Size constructor:\n";
        Array<int> intArray(10);
        std::cout << "INTarray size: " << intArray.getSize() << "\n\n";
        
        //Modify
        std::cout << "Change elements of INTarray: \nATM: \n";
        for (unsigned int i = 0; i < intArray.getSize(); i++)
            std::cout << intArray[i] << " ";
        
        for (unsigned int i = 0; i < intArray.getSize(); i++) {
                intArray[i] = i * 10;
            }
        
        std::cout << "\nAfter: \n";
        for (unsigned int i = 0; i < intArray.getSize(); i++)
            std::cout << intArray[i] << " ";
        
        //Copy
        Array<int> copyArray(intArray);
        std::cout << "\n\nElements of copyArray (after copy): \n";
        for (unsigned int i = 0; i < copyArray.getSize(); i++) {
            std::cout << copyArray[i] << " ";
        }
        std::cout << std::endl;

        // Modify original and show copy is diff
        intArray[0] = 100; intArray[1] = 100; intArray[2] = 100;
        std::cout << "\nElements of intArray (after modification): \n";
        for (unsigned int i = 0; i < intArray.getSize(); i++) {
            std::cout << intArray[i] << " ";
        }

        //Try access out of array
        std::cout << "\n\nTrying to access out of bounds: \n";
            std::cout << intArray[100] << "\n";
    }

    catch (const std::exception &e) {
        std::cerr << "Out of array: " << e.what() << "\n\n";
    }

    return 0;
}