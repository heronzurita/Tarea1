#include "complexMath.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	struct Complejo uno, dos;
	uno.real = atof(argv[1]);
	uno.imaginario = atof(argv[2]);
	dos.real = atof(argv[3]);
	dos.imaginario = atof(argv[4]);
	char operador = *argv[5];
	switch(operador){

		case '+': Add(uno, dos);
		break;
		case '-': Subs(uno, dos);
		break;
		case 'x': Mult (uno, dos);
		break; 
		case '/':Div (uno, dos);
		break;
		default:'Hubo un error.'
		break;
	}
	
}