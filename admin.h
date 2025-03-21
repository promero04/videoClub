/*
 * admin.h
 *
 *  Created on: 20 mar 2025
 *      Author: ruby2
 */

#ifndef ADMIN_H_
#define ADMIN_H_

typedef struct admin{
	char dni[10];
	char nombre[20];
	char apellido[20];
	char numTel[10];
	char numTarjeta[12];
	char email[50];
	char contrasenya[20];
}Admin;

Admin conseguirAdmin();
void mostrarAdmin();
int contrasenyaCorrectaAdmin(char *conA, char *con);

#endif /* ADMIN_H_ */
