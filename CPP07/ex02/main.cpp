/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:36:59 by mfrancis          #+#    #+#             */
/*   Updated: 2025/11/04 14:08:04 by mfrancis         ###   ########.fr       */
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
    try
    {
        std::cout << "\n\n Test with com CHAR" << std::endl;
        Array<char> letters(5);

        letters[0] = 'a';
        letters[1] = 'b';
        letters[2] = 'c';
        letters[3] = 'd';
        letters[4] = 'e';

        for (unsigned int i = 0; i < letters.getSize(); i++)
            std::cout << letters[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
      try {
        std::cout << "\n\n Test with FLOAT" << std::endl;
        Array<float> floats(5);

        for (unsigned int i = 0; i < floats.getSize(); i++)
            floats[i] = static_cast<float>(i) * 1.1f;

        for (unsigned int i = 0; i < floats.getSize(); i++)
            std::cout << "floats[" << i << "] = " << floats[i] << std::endl;

        std::cout << "\n\ncopy constructor Test ---" << std::endl;
        Array<float> floatsCopy(floats);
        floatsCopy[0] = 99.9f; // alterar o primeiro elemento da cópia

        std::cout << "Original[0] = " << floats[0] << " | Cópia[0] = " << floatsCopy[0] << std::endl;

        std::cout << "\n\nTest with com STRING" << std::endl;
        Array<std::string> names(3);
        names[0] = "Piscine";
        names[1] = "CPP07";
        names[2] = "Ex02";

        for (unsigned int i = 0; i < names.getSize(); i++)
            std::cout << "names[" << i << "] = " << names[i] << std::endl;

        std::cout << "\n\nOperator= test" << std::endl;
        Array<std::string> copyNames;
        copyNames = names;

        copyNames[1] = "42 Lisboa";

        for (unsigned int i = 0; i < names.getSize(); i++)
            std::cout << "names[" << i << "] = " << names[i]
                      << " | copyNames[" << i << "] = " << copyNames[i] << std::endl;

        std::cout << "\n\nOut of range" << std::endl;
        std::cout << names[5] << std::endl; // deve lançar exceção

    } catch (std::exception& e) {
         std::cerr << e.what() << '\n';
    }

    return 0;
}