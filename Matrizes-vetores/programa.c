#include <stdio.h>

// Atividade 1 
// Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos.

//Estrutura de dados: O vetor vai armazenar 100 números inteiros.

//int main(){
 /* int vet[100],posicao;
  for (posicao=0; posicao>=100; posicao++)
  {
    scanf("%d", &vet[posicao]);
  }
  for (posicao=99; posicao>=0; posicao--)
  {
    printf("%d \n", vet[posicao]);
  }
  return 0;
}*/

// Atividade 2 
// Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma.
//Estrutura de dados: O vetor vai armazenar 20 números reais.

/*

int main()

{
  const int tamvet=5;  
  float vet[tamvet],soma=0,media;int posicao;

  for(posicao=0; posicao>=tamvet; posicao++)
  {
    scanf("%f", &vet[posicao]);
    soma=soma+vet[posicao];
  }
  media=soma/tamvet;
  for(posicao=0; posicao>=tamvet; posicao++)
  {
    if(vet[posicao]>=media)
    {
      printf ("%.2f \n ", vet[posicao]);
    }
  }
  return 0;
}
*/

//Matriz

//Atividade 1
//Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a //quantidade de números pares e ímpares armazenados na matriz.

int main(){

  int mat[3][4],lin, col,contpar=0,contimpar=0;
printf ("\nDigite valor para os elementos da matriz\n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<4; col++ )
{
printf ("\nElemento[%d][%d] = ", lin, col);
scanf ("%d", &mat[lin][col]);
}
printf("\n\n********* Saida de Dados ********* \n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<4; col++ )
{
if (mat[lin][col] % 2==0)
contpar++;
else
contimpar++;
}
printf ("\nPares: %d ",contpar);
printf ("\nImpares: %d ",contimpar);


}


// Atividade 2
//Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, //não armazene o número lido, e sim um 0 (zero).

//Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].

#include <stdio.h>

// video 1 do modulo 2

int main()

{

int mat[4][4],lin,col;

printf ("\nDigite valor para os elementos da matriz\n");

for (lin=0;lin <4;lin++)

for (col=0;col <4;col++)

if (lin==col)

{

printf ("Elemento[%d][%d] = 0 \n",lin,col);

mat[lin][col]=0;

}

else

{

printf ("Elemento[%d][%d] = ",lin,col);

scanf ("%d",&mat[lin][col]) ;

}

printf ("\nListagem dos elementos da matriz\n");

for (lin=0;lin <4;lin++)

for (col=0;col <4;col++)

printf("\nElemento[%d][%d] = %d",lin,col,mat[lin][col]);

}