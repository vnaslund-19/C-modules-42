/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:27:25 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 16:27:26 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data myData;
	myData.value = 42;

	uintptr_t raw = Serializer::serialize(&myData);
	Data *deserializedData = Serializer::deserialize(raw);

	// Check if the deserialization is successful according to subject description
	if (deserializedData == &myData)
	{
		std::cout << "Serialization and Deserialization successful." << std::endl;
		std::cout << "Data value: " << deserializedData->value << std::endl;
	}
	else
		std::cout << "Error in Serialization/Deserialization." << std::endl;

	return (0);
}