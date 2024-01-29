// Insert 42 header

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

// returns the end iterator if not found
// if found it returns an iterator pointing to the needle in the container
template<typename T>
typename T::iterator easyfind(T& container, int needle)
{
    typename T::iterator i;

    i = std::find(container.begin(), container.end(), needle);
    return (i);
}

#endif