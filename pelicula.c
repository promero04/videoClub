/*
 * pelicula.c
 *
 *  Created on: 20 mar 2025
 *      Author: ruby2
 */
#include <stdio.h>
#include "pelicula.h"

Pelicula conseguirPelicula(){
	Pelicula p;
	printf("Introduzca el id de la película: \n");
	fflush(stdout);
	fflush(stdin);
	gets(p.id_pel);
	printf("Introduzca el titulo de la película: \n");
	fflush(stdout);
	fflush(stdin);
	gets(p.titulo);
	printf("Introduzca el director de la película: \n");
	fflush(stdout);
	fflush(stdin);
	gets(p.director);
	printf("Introduzca el año de estreno de la película: \n");
	fflush(stdout);
	fflush(stdin);
	gets(p.anioEstreno); //no se si se guarda con gets porque hay que cambiar de char a date
	printf("Introduzca el genero de la pelicula: \n");
	fflush(stdout);
	fflush(stdin);
	gets(p.genero);

	return p;
}
