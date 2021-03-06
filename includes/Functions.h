/*
 * Functions.h
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <memory>
#include <vector>
#include "Smalltalk.h"

/**
 * create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
 * objects using pointers.
 *
 * \param mv	the vector
 * \param numBrit  number of british smalltalkers
 * \param numAmerican " AMerican "
 * \param numbAmericanDonutEnthusiest " American Donut Enthusiest "
 */
void getPeople(std::vector<Smalltalk*> &mv,int numBrit = 1,
		int numAmerican = 1, int numbAmericanDonutEnthusiest = 1);

/**
 * Iterate over the vector full of Smalltalk pointers, If a Smalltalk pointer is not null then
 * delete what it points to.  Once all Smalltalk pointers deleted then use std::vector::clear()
 * to clear the vector of the pointers.
 *
 * \param mv
 */
void clearVector(std::vector<Smalltalk*> &mv);

#endif /* FUNCTIONS_H_ */
