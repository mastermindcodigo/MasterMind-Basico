//PANTALLA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pantalla(){
  
int asteriscos; 
int linea_aste;
  system("clear");
  printf("\n");
  for(asteriscos=0; asteriscos<=8; asteriscos++){
   
    if(asteriscos<=3 || asteriscos>=5 ){
      printf("\t\t");
      for(linea_aste=0; linea_aste<81; linea_aste++){
	printf("*");
      }
    }
    else if(asteriscos==4){
      printf("\t\t");
      for(linea_aste=0; linea_aste<67; linea_aste++){
	if(linea_aste==33){
	  printf("  MASTER MIND  ");
	}
	else{
	  printf("*");
	}
      }
    }
    printf("\n");
  }
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

fprintf(stdout," 1) Jugar partida \n 2) Jugar partida de prueba \n 3) Establecer nivel de dificultad \n 4) Listar historial de partidas \n 0)Salir\n \nSiguiente operacion?: ");

}
