#include "complexMath.h"

void Add(struct Complejo uno, struct Complejo dos){
	
	struct Complejo Resultado;
	Resultado.real = uno.real + dos.real;
	Resultado.imaginario = uno.imaginario + dos.imaginario;

	printf("\n%f %f \n+\n%f %f",uno.real,uno.imaginario,dos.real,dos.imaginario);
	printf("\n\n");
	printf("%f %fi\n",Resultado.real, Resultado.imaginario);
	

	
}

void Subs(struct Complejo uno, struct Complejo dos){
	
	struct Complejo Resultado;
	Resultado.real = uno.real - dos.real;
	Resultado.imaginario = uno.imaginario - dos.imaginario;

	printf("\n%f %f \n-\n%f %f",uno.real,uno.imaginario,dos.real,dos.imaginario);
	printf("\n\n");
	printf("%f %fi\n",Resultado.real, Resultado.imaginario);
	


	
}

void Mult(struct Complejo uno, struct Complejo dos){
	
     struct Complejo Resultado;

	Resultado.real = ( uno.real * dos.real ) - (uno.imaginario * dos.imaginario);
	Resultado.imaginario = (uno.real * dos.imaginario) + (uno.imaginario * dos.real);

	printf("\n%f %f \nx\n%f %f",uno.real,uno.imaginario,dos.real,dos.imaginario);
	printf("\n\n");
	printf("%f %fi\n",Resultado.real, Resultado.imaginario);
	
}

void Div(struct Complejo uno, struct Complejo dos){
	
   char div = '/';
   float denominador;
   struct Complejo Resultado;

	Resultado.real = (uno.real * dos.real) + (uno.imaginario * dos.imaginario);

	Resultado.imaginario = (uno.imaginario * dos.real ) - ( uno.real * dos.imaginario);
	
	denominador = (uno.real * uno.real) + (dos.imaginario * dos.imaginario);


	printf("\n%f %f \n%c\n%f %f",uno.real,uno.imaginario,div,dos.real,dos.imaginario);
	printf("\n\n");
	printf("%f/%f %f/%fi\n",Resultado.real,denominador, Resultado.imaginario,denominador);
	

	
}