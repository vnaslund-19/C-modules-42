/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:28:14 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 16:28:15 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>

class Data;

// reinterpret_cast does not check the 
// safety or validity of the conversion at compile time or runtime; 
// it simply reinterprets the bit pattern of the value as the new type. 

class Serializer
{
    public:
        ~Serializer();

        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);

    private:
        Serializer();
        Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
};

#endif