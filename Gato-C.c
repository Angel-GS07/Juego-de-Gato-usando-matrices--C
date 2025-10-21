#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	int i;
	int j;
	char tabla[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	char p1[100];
	char p2[100];
	int c1;
	int c2;
	int v;
	int r;
	
	system("color B");
	printf("Gato ^•w•^ \n");
	
	printf("Introduzca el nombre del jugador 1: \n");
	gets(p1);
	
	printf("Introduzca el nombre del jugador 2: \n");
	gets(p2);
	
	v=0;
	
	for(i=0;i<3;i++){
		printf("\n");
	for(j=0;j<3;j++){
	    printf("|%c|", tabla[i][j]);
        }
    }
	
	//Inicio - Do while 
	
    do{
    
	    //Jugador 1 - Turno -----------------------------------------------------------------------------------------------------------------
	    
	    v++;
	    
	    do{
			printf("\n\n %s, indica el n\243mero de casilla a marcar: \n", p1);
			scanf("%d", &c1);
			
			if(c1>0&&c1<=9){
				
				r=1;
				switch (c1){
						
					case 1:
						if(tabla[0][0]!='O'&&tabla[0][0]!='X'){
							tabla[0][0]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 2: 
						if(tabla[0][1]!='O'&&tabla[0][1]!='X'){
							tabla[0][1]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 3:
						if(tabla[0][2]!='O'&&tabla[0][2]!='X'){
							tabla[0][2]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 4:
						if(tabla[1][0]!='O'&&tabla[1][0]!='X'){
							tabla[1][0]='X';
						}
						else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 5: 
						if(tabla[1][1]!='O'&&tabla[1][1]!='X'){
							tabla[1][1]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 6: 
						if(tabla[1][2]!='O'&&tabla[1][2]!='X'){
							tabla[1][2]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
					
					case 7: 
						if(tabla[2][0]!='O'&&tabla[2][0]!='X'){
							tabla[2][0]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 8: 
						if(tabla[2][1]!='O'&&tabla[2][1]!='X'){
							tabla[2][1]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
						
					case 9: 
						if(tabla[2][2]!='O'&&tabla[2][2]!='X'){
							tabla[2][2]='X';
						}
						else{
							r=0;
							printf("Casilla ocupada, selecciona una que se encuentre disponible.");
						}
					break;
				}
			}
			else{
				printf("Por favor, introduce un n\243mero de casilla v\240lido [1-9]:");
				r=0;
			}
	    }while(r==0);
	    	
		for(i=0;i<3;i++){
			printf("\n");
		for(j=0;j<3;j++){
		    printf("|%c|", tabla[i][j]);
	        }
	    }
	    
	    //Jugador 1 - Victoria ---------------------------------------------------------------------------------------------------------------
	    
	    if(tabla[0][0]=='X'&&tabla[0][1]=='X'&&tabla[0][2]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[1][0]=='X'&&tabla[1][1]=='X'&&tabla[1][2]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[2][0]=='X'&&tabla[2][1]=='X'&&tabla[2][2]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[0][0]=='X'&&tabla[1][0]=='X'&&tabla[2][0]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[0][1]=='X'&&tabla[1][1]=='X'&&tabla[2][1]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[0][2]=='X'&&tabla[1][2]=='X'&&tabla[2][2]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[0][0]=='X'&&tabla[1][1]=='X'&&tabla[2][2]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    if(tabla[2][0]=='X'&&tabla[1][1]=='X'&&tabla[0][2]=='X'){
	    	printf("\n\n %s es el ganador, %cFelicidades! \n", p1, 173);
	    	v=11;
	    }
	    
	    //Jugador 2 - Turno -----------------------------------------------------------------------------------------------------------------
	    
		v++;
		 
	    if(v<=9){
	    	
		    do{	
				printf("\n\n %s, indica el n\243mero de casilla a marcar: \n", p2);
				scanf("%d", &c2);
				
				if(c2>0&&c2<=9){
					
					r=1;
					switch (c2){
						case 1: 
							if(tabla[0][0]!='X'&&tabla[0][0]!='O'){
								tabla[0][0]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
							
						case 2:
							if(tabla[0][1]!='X'&&tabla[0][1]!='O'){
								tabla[0][1]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
							
						case 3: 
							if(tabla[0][2]!='X'&&tabla[0][2]!='O'){
								tabla[0][2]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
							
						case 4: 
							if(tabla[1][0]!='X'&&tabla[1][0]!='O'){
								tabla[1][0]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
						
						case 5: 
							if(tabla[1][1]!='X'&&tabla[1][1]!='O'){
								tabla[1][1]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
							
						case 6: 
							if(tabla[1][2]!='X'&&tabla[1][2]!='O'){
								tabla[1][2]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
							
						case 7: 
							if(tabla[2][0]!='X'&&tabla[2][0]!='O'){
								tabla[2][0]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
						
						case 8: 
							if(tabla[2][1]!='X'&&tabla[2][1]!='O'){
								tabla[2][1]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
							
						case 9: 
							if(tabla[2][2]!='X'&&tabla[2][2]!='O'){
								tabla[2][2]='O';
							}
							else{
								r=0;
								printf("Casilla ocupada, selecciona una que se encuentre disponible.");
							}
						break;
					}
				}
				else{
					printf("Por favor, introduce un n\243mero de casilla v\240lido [1-9]:");
					r=0;
				}
		    }while(r==0);
		    
		    for(i=0;i<3;i++){
				printf("\n");
			for(j=0;j<3;j++){
			    printf("|%c|", tabla[i][j]);
		        }
		    }
		    
		    //Jugador 2 - Victoria ---------------------------------------------------------------------------------------------------------------
		    
		    if(tabla[0][0]=='O'&&tabla[0][1]=='O'&&tabla[0][2]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[1][0]=='O'&&tabla[1][1]=='O'&&tabla[1][2]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[2][0]=='O'&&tabla[2][1]=='O'&&tabla[2][2]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[0][0]=='O'&&tabla[1][0]=='O'&&tabla[2][0]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[0][1]=='O'&&tabla[1][1]=='O'&&tabla[2][1]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[0][2]=='O'&&tabla[1][2]=='O'&&tabla[2][2]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[0][0]=='O'&&tabla[1][1]=='O'&&tabla[2][2]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
		    if(tabla[2][0]=='O'&&tabla[1][1]=='O'&&tabla[0][2]=='O'){
		    	printf("\n\n %s es el ganador, %cFelicidades! \n", p2, 173);
		    	v=11;
		    }
	    }
	    
	    //Sin ganador --------------------------------------------------------------------------------------------------------------------
	    
	    if(v==10){
	    	printf("\n\n Empate.");
	    }
    }while(v<=9);
}
