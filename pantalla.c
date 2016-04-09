 //PANTALLA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pantalla(){
  
int asteriscos; 
int linea_aste;

  for(asteriscos=0; asteriscos<7; asteriscos++){
   
    if(asteriscos<3 || asteriscos>=4 ){;
      for(linea_aste=0; linea_aste<80; linea_aste++){
	printf("*");
      }
    }
    else if(asteriscos==3){
      for(linea_aste=0; linea_aste<66; linea_aste++){
	if(linea_aste==32){
	  printf("  MASTER MIND  ");
	}
	else{
	  printf("*");
	}
      }
    }
    printf("\n");
  }
  printf("\n");
}

int confirmar(char opcion){

  opcion = tolower(opcion);
  switch(opcion){
    
  case 's':{
    return 1;
  }
  case 'n':{
    return 0;
  }
  default: {
    return -1;
  }
  }
}

void menu(){


  fprintf(stdout," 1) Jugar partida \n 2) Jugar partida de prueba \n 3) Establecer nivel de dificultad \n 4) Listar historial de partidas \n 0)Salir\n\n¿Siguiente operación? ");

}
