/*
 * usuario.h
 *
 *  Created on: 20 mar 2025
 *      Author: ruby2
 */

#ifndef USUARIO_H_
#define USUARIO_H_

typedef struct usuario{
	char dni[10];
	char nombre[20];
	char apellido[20];
	char numTel[10];
	char numTarjeta[12];
	char email[50];
	char contrasenya[20];
}Usuario;

Usuario conseguirUsuario();
void mostrarUsuario();
int contrasenyaCorrecta(char *conU, char *con);

#endif /* USUARIO_H_ */
