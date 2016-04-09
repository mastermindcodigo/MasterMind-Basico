#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "pantalla.h"
#include "gestion_juego.h"

//#include "gestion.h"
#define JUGAR '1'
#define PROBAR '2'
#define NIVEL '3'
#define LISTAR '4'
#define SALIR '0'
#define inte 168 

int main(){

  char opcion[400];
  int error;
  int dificultad;
  int *lives;
  //char accion[30];
  lives=malloc(3*sizeof(int));
  *lives=100;


  pantalla();
  
  do{  

    menu();
	
    fscanf(stdin," %s", opcion);
    if(strlen(opcion)!=1)opcion[0]=7;

    error=0;

    switch (opcion[0]) {

    case SALIR: { //salir
   return 1;
}
  /*    printf("\nEsta seguro de que desea salir? (s/n):");
      do{
	scanf(" %c", accion);
	if(strlen(accion)!=1)accion[0]=3;
	accion[0]=tolower(accion[0]);

	switch(accion[0]){

	case 's': return 1;
      case 'n':{
	error=0;
	break;
      }
      default: {
	printf("\nLa respuesta no es correcta, introduzca (s/n):");
	error=1;
	break;
      }
	}
      }while(error==1);
      error=1;
      break;
    }
*/
 case JUGAR : {
   //fprintf(stdout," \nHas seleccionado Jugar partida\n\n");
   dificultad=0;
   error=1;
   jugar_partida(dificultad, lives); //MODO NORMAL DE JUEGO
   break;
 }
 case PROBAR: {
   //  fprintf(stdout," \nHas seleccionado Jugar partida de prueba\n\n");
   dificultad=1;
   error=1;
   jugar_partida(dificultad, lives);
   break;
 }
 case NIVEL: {
   //  fprintf(stdout," \nHas seleccionado establecer nivel de dificultad\n\n");
   error=1;
   establecer_nivel(error, lives); //MODIFICAMOS EL NUMERO DE OPORTUNIDADES Y VOLVEMOS A LANZAR EL MENU DE OPCIONES
    
   break;
 }
 case LISTAR: {
   // fprintf(stdout,"\nHas seleccionado listar historial de partidas\n\n");
   listar_historial();
   error=1;
   break;
 }
 default : {
   fprintf(stdout," \nOpción no valida\n\n");
   error=1;
   break;
 }
}
}while (error == 1 );
return 0;
}


