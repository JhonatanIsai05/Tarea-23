#include<stdio.h> // esto no va 
#include<string.h>//esto no va 
struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

typedef struct alumnos ALUMNO;

ALUMNO  nuevoAlumno(){
	
	ALUMNO tmp;
	
	printf("Introduce la edad:");
	scanf("%d",&tmp.edad);
	
	printf("Introduce el nombre:");
	fflush(stdin); //limpia el buffer de teclado
	gets(tmp.nombre);
	
	printf("Introduce el genero:");
	scanf("%c",&tmp.genero);
	
	printf("Introduce carrera:");
	fflush(stdin);//limpia el buffer de teclado
	gets(tmp.carrera);
	
	printf("Introduce numero de cuenta: ");
	fflush(stdin); //limpia el buffer de teclado
	gets(tmp.nCuenta);
	
	return tmp;
/*
void imprimeAlumno(ALUMNO al){
		printf("*****************************\n");
		printf("Nombre:%s\n",al.edad);
		printf("Edad:%d",al.edad);
		printf("Genero:%c\n",al.genero);
		printf("Carrera:%s\n",al.carrera);
		printf("Numero de Cuenta:%s\n",al.nCuenta);		
	}
*/	
}

//esta es una fucion aparte 
void imprimeAlumno(ALUMNO al){
	
		printf("*****************************\n");
		
		printf("Nombre:%s\n",al.nombre/*edad*/);
		
		printf("Edad:%d",al.edad);
		
		printf("Genero:%c\n",al.genero);
		
		printf("Carrera:%s\n",al.carrera);
		
		printf("Numero de Cuenta:%s\n",al.nCuenta);	
			
	}
