#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <sstream>
#include <ostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <exception>
#include <stdexcept>

template<typename T>
class Array
{
    private:
        T*              array;
        unsigned int    nbr_elem;

    public:
        Array();
        Array(unsigned int nbr_elem);
        Array(const Array &copy);
        Array &operator=(const Array &copy);
        ~Array();

        T &operator[](unsigned int n);
        const T &operator[](unsigned int n) const;
        unsigned int getSize() const;
};

#include "Array.tpp"

#endif
