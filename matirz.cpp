#include <stdio.h>
#include <locale.h>
int resultado;
void limpaBuffer() {//limpa buffer//
    int c;
    while ((c = getchar()) != '\n' && c != EOF); 
}
	float resultado2,resultado3,resultado4;
	void validador(){//verifica numero ****a variavel resultado retorna oque digitou verificado****
		int inteiro,  retorno = -1;
		retorno  =	scanf ("%d", &inteiro);	   
		   if (retorno == 1 ) {
	        resultado=inteiro;
	    } else {
	        printf("invalido \n");
	    }
	}
	/*1. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, utilizando estruturas
de repetição, apresente na tela a soma de todos os elementos da matriz.*/
void exercicio1()
{	printf("1. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e,\n utilizando estruturas");
	printf("e repetição, apresente na tela a soma de todos os elementos da matriz.\n\n");
	int soma=0,i,j,matriz[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("preencha a martriz[%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
			soma=soma+matriz[i][j];
		}	
	}
	printf("%d",soma);	  
}
/*2. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, utilizando estruturas
de repetição, apresente na tela o produto de todos os elementos da matriz.*/
void exercicio2(){
	printf("2. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros e, \nutilizando estruturas");
	printf("de repetição, apresente na tela o produto de todos os elementos da matriz.\n");
	int produto=1,i,j,matriz[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("preencha a martriz[%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
			produto=produto*matriz[i][j];
		}	
	}
	printf("%d",produto);	  
}
/*3. Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros. Em seguida, leia um
número qualquer do teclado e mostre na tela o índice em que o número se encontra na matriz, ou
então a mensagem "Número não encontrado!", se o número não estiver presente na matriz.*/
int exercicio3(){
	printf("Escreva um programa que alimente uma matriz M de 2 x 3 elementos inteiros. Em seguida, \nleia um");
	printf("número qualquer do teclado e mostre na tela o índice em que o número se encontra na matriz, \nou");
	printf("então a mensagem Número não encontrado!, se o número não estiver presente na matriz.\n\n");
	int num,i,j,matriz[2][3];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("preencha a martriz[%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}	
	}
	printf("digite qualquer numero inteiro");
	scanf("%d",&num);
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(num == matriz[i][j]){
				printf("este numero esta localizado na matriz[%d][%d]",i,j);
				return 0;
			}
		}		
	}
	printf("Número não encontrado!");	  
}
/*4. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela o menor valor da matriz, o maior valor da matriz, a soma dos valores da matriz e a
média dos valores da matriz.*/
void exercicio4()
{
	printf("4. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela o menor valor da matriz, o maior valor da matriz, a soma dos valores da matriz e a\n");
	printf("média dos valores da matriz.\n");
	float media=0;
	int matriz[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int soma=0,i,j,maior=matriz[0][0],menor=matriz[0][0];	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matriz[i][j]>maior){maior=matriz[i][i];}
			if(matriz[i][j]<menor){menor=matriz[i][i];}			
			soma=soma+matriz[i][j];
		}	
	}
	media = soma/(i*j);
	printf("menor valor da matriz: %d\n",menor);
	printf("maior valor da matriz: %d\n",maior);
	printf("soma dos valores da matriz: %d\n",soma);	  
	printf("média dos valores da matriz: %.2f",media);
}
/* 5.Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela a soma de todos os elementos da linha 3 da matriz.

 x  x  x  x  x
 x  x  x  x  x
 x  x  x  x  x
16,17,18,19,20
 x  x  x  x  x
 */
void exercicio5(){
	printf("5.Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma de todos os elementos da linha 3 da matriz.\n\n");
	printf(" x  x  x  x  x\n x  x  x  x  x\n x  x  x  x  x\n16,17,18,19,20\n x  x  x  x  x\n\n");
	int matriz[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}},soma=0,i;
	for(i=0;i<5;i++){soma=soma+matriz[2][i];}
	printf("%d\n",soma);
}
/*6.Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela a soma de todos os elementos da coluna 2 da matriz.
 x  x  3   x  x
 x  x  8   x  x
 x  x  13  x  x
 x  x  18  x  x
 x  x  23  x  x
 */
void exercicio6(){
	printf("6.Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma de todos os elementos da coluna 2 da matriz.\n\n");
	printf(" x  x   3  x  x\n x  x   8  x  x\n x  x  13  x  x\n x  x  18  x  x\n x  x  23  x  x\n\n");
	int matriz[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}},soma=0,i;
	for(i=0;i<5;i++,soma=soma+matriz[i][2]){}
	printf("%d\n",soma);
}
/*7. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos da diagonal principal da matriz.
 1  x   x   x  x
 x  7   x   x  x
 x  x  13   x  x
 x  x   x  19  x
 x  x   x   x  15
 */
void exercicio7(){
	printf("7. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma dos elementos da diagonal principal da matriz.\n\n");
	printf(" 1  x   x   x  x\n x  7   x   x  x\n x  x  13   x  x\n x  x   x  19  x\nx  x   x   x  15\n\n");
	int matriz[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}},soma=0,i;
	for(i=0;i<5;soma=soma+matriz[i][i],i++){printf("matriz[%d][%d]=%d\n",i,i,matriz[i][i]);}
	printf("%d\n",soma);
}

/*8. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos da diagonal secundária da matriz.
  x   x   x  x  5
  x   x   x  9  x
  x   x  13  x  x
  x  17   x  x  x
 21   x   x  x  x
 */
void exercicio8(){
	printf("8. Escreva um programa que leia uma matriz M de 5 x 5 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma dos elementos da diagonal secundária da matriz.\n\n");
	printf(" x   x   x  x  5\n  x   x   x  9  x\n  x   x  13  x  x\n  x  17   x  x  x\n 21   x   x  x  x\n\n");
	int matriz[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}},soma=0,i,j;
	for(i=0,j=4;i<5;soma=soma+matriz[i][j],i++,j--)
	{
	printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
	}
	printf("%d\n",soma);
}
/*9. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos não marcados com x.
 1  2  x  x
 5  6  x  x
 x  x  x  x
 x  x  x  x
*/
void exercicio9(){
	printf("9. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma dos elementos não marcados com x.\n\n");
	printf(" 1  2  x  x\n 5  6  x  x\n x  x  x  x\n x  x  x  x\n\n");
	
	int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16,}},soma=0,i,j;
	for(i=0;i<2;i++)
	{for(j=0;j<2;soma=soma+matriz[i][j],j++){
		printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
	}
	
	}
	printf("%d\n",soma);
}
/*10. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
apresente na tela a soma dos elementos não marcados com x.*/
/*
 x  x  x  x
 x  x  x  x
 x  x 11 12
 x  x 15 16
*/
void exercicio10(){
	printf("10. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma dos elementos não marcados com x.\n\n");
	printf(" x  x  x  x\n x  x  x  x\n x  x 11 12\n x  x 15 16\n\n");
	
	
	int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16,}},soma=0,i,j;
	for(i=3;i>=2;i--)
	{for(j=3;j>=2;soma=soma+matriz[i][j],j--){
		printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
	}
	
	}
	printf("%d\n",soma);
}
//11. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
//apresente na tela a soma dos elementos não marcados com x.
/*
  1  x  x  x
  5  6  x  x
  9 10 11  x
 13 14 15 16
*/
void exercicio11(){
	printf("11. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma dos elementos não marcados com x.\n\n");
	printf(" 1  x  x  x\n  5  6  x  x\n  9 10 11  x\n 13 14 15 16\n\n");
	
	int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16,}},soma=0,i,j;
	for(i=0;i<4;i++)
	{for(j=0;j<=i;soma=soma+matriz[i][j],j++){
		printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
	}
	
	}
	printf("%d\n",soma);
}
//12. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,
//apresente na tela a soma dos elementos não marcados com x.
/*
 x  x  x  4
 x  x  7  8
 x  10 11 12
 13 14 15 16
*/
void exercicio12(){
	printf("12. Escreva um programa que leia uma matriz M de 4 x 4 elementos e, utilizando estruturas de repetição,\n");
	printf("apresente na tela a soma dos elementos não marcados com x.\n\n");
	printf("x  x  x  4\n x  x  7  8\n x  10 11 12\n 13 14 15 16\n\n");
	
	
	int matriz[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16,}},soma=0,i,j,k=3;
	for(i=0;i<4;i++,k--)
	{for(j=3;j>=k;soma=soma+matriz[i][j],j--){
		printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
	}
	
	}
	printf("%d\n",soma);
}
/*13.Escreva um programa que leia uma matriz M de 4 x 5 elementos e, utilizando uma estrutura de
repetição, armazene em um vetor V o menor elemento de cada linha da matriz.*/
void exercicio13(){
	printf("13.Escreva um programa que leia uma matriz M de 4 x 5 elementos e, \nutilizando uma estrutura de");
	printf("repetição, armazene em um vetor V o menor elemento de cada linha da matriz.\n\n");
	int matriz[4][5]={{5,4,2,8,7},{3,6,9,1,4},{0,3,5,2,9},{4,9,7,6,2}};	
	int menor[4],i,j;	
	float media=0;	
	for(i=0;i<4;i++){
		menor[i]=matriz[i][0];			
		for(j=0;j<5;j++){
			if(matriz[i][j]<menor[i]){
				menor[i]=matriz[i][j];
			}
		}	
		printf("menor da linha %d é %d \n",i,menor[i]);
	}
	
}
/*14. Escreva um programa que leia duas matrizes (A e B) de 2 linhas e 3 colunas e, utilizando uma estrutura
de repetição, realize a troca dos elementos destas matrizes.*/
void exercicio14(){
	printf("14. Escreva um programa que leia duas matrizes (A e B) de 2 linhas e 3 colunas e,\n utilizando uma estrutura");
	printf("de repetição, realize a troca dos elementos destas matrizes.\n\n");
	int matrizA[2][3]={{1,2,3},{4,5,6}},matrizB[2][3]={{10,20,30},{40,50,60}},aux,i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){			
			aux=matrizB[i][j];
			matrizB[i][j]=matrizA[i][j];
			matrizA[i][j]=aux;				
			printf("MATRIZ-A[%d][%d] é = %d e MATIRZ-B[%d][%d] é = %d\n",i,j,matrizA[i][j],i,j,matrizB[i][j]);				
		}	
	}
}
int main(){
	setlocale(LC_ALL, "portuguese");
	char resposta;
	
	
	 do {
	 	
	 	printf("escolha um exercicio entre 1 e 14\n");
		 
		 
		 validador();	  
	
        switch (resultado) {
	 
	    case  1: exercicio1();limpaBuffer();break;
	    case  2: exercicio2();limpaBuffer();break;
	    case  3: exercicio3();limpaBuffer();break;
	    case  4: exercicio4();limpaBuffer();break;
	    case  5: exercicio5();limpaBuffer();break;
	    case  6: exercicio6();limpaBuffer();break;
	    case  7: exercicio7();limpaBuffer();break;
	    case  8: exercicio8();limpaBuffer();break;
	    case  9: exercicio9();limpaBuffer();break;
	    case 10:exercicio10();limpaBuffer();break;
	    case 11:exercicio11();limpaBuffer();break;
	    case 12:exercicio12();limpaBuffer();break;
	    case 13:exercicio13();limpaBuffer();break;
	    case 14:exercicio14();limpaBuffer();break;
	    default:			
			printf("\nDIGITO INVALIDO \n\n\n");
			printf("************************************\n");
			printf("******** SIGA AS INSTRUÇOES ********\n");
			printf("************************************\n\n");
        	limpaBuffer();
	 	break;		  
	 }
      	printf("\n\n");
      
        printf("\n Deseja continuar nos exercicios? (S/N): ");
        scanf(" %c", &resposta); 
        int caso;
        if(resposta == 's'|| resposta == 'S'){
        	caso = 1;
			}
			else if (resposta == 'n'|| resposta == 'N'){
				caso = 2;
			}
			else{ 
				caso = 3;
			}
        
        switch (caso){
        	case 1 : resposta = 's'; break;
        	case 2 : resposta = 'n'; break;
        	case 3 : 
        	do { limpaBuffer();
 			   printf("\n Deseja continuar nos exercicios? (S/N): ");
 			   scanf(" %c", &resposta);
				} while (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N');
				
			 break;
		}
    }     
    while (resposta == 's'|| resposta == 'S');
	 
	printf(" \n");
    printf("\n Encerrando o programa.\n");
	limpaBuffer();
    return 0;   
}
