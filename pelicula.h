/*
 * pelicula.h
 *
 *  Created on: 20 mar 2025
 *      Author: ruby2
 */

#ifndef PELICULA_H_
#define PELICULA_H_

typedef struct pelicula{
	char id_pel[6];
	char titulo[50];
	char director[50];
	char anioEstreno[20]; //hay que ponerlo como fecha
	char genero[30];
}Pelicula;

Pelicula conseguirPelicula();

#endif /* PELICULA_H_ */
