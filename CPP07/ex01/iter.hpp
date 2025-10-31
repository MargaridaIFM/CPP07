#ifndef iter_HPP
# define iter_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T *array, int len_array, void (*func)(T &));

#endif
