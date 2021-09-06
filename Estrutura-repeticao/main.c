#include <stdio.h>

// For

//Mostrar os 10 primeiros números inteiros e positivos em ordem crescente
/*
int main(){
  int cont;

  for (cont=1; cont<=10 ; cont=cont+1);
  printf ("%d\n",cont);

}
*/

//Mostrar os 10 primeiros números inteiros e positivos em ordem descrescente
/*int main(){
  int cont;
  for(cont=10; cont>=1; cont=cont-1);
  {
  printf ("%d\n",cont);
  }
}*/


//Mostrar os números pares entre 1 e 10 (inclusive)
/*
int main(){
  int cont;
  for(cont=2;cont<=10;cont=cont+2);
  {
  printf ("%d\n",cont);
  }
}*/

//Mostrar todas as dezenas entre 0 e 100 (inclusive), em ordem crescente
/*
int main(){
  int cont;
  for (cont=10;cont<=100;cont=cont+10);
  {
  printf ("%d\n",cont);
  }
}*/

//Mostrar todas as centenas entre 0 e 1000 (inclusive), em ordem decrescente
/* int main(){
  int cont;
  for (cont=1000;cont>=100;cont=cont+100);
  {
  printf ("%d\n",cont);
  }
}*/

//Mostrar a soma dos números inteiros e positivos entre 1 e 10
/*
int main(){
  int cont;
  int soma =0;
  for (cont=1;cont<=10;cont=cont+1);
  {
  soma=soma+cont;
  }
  printf ("A soma dos números entre 1 e 10 =%d\n",soma);
} */

//Mostrar a média aritmética dos números inteiros e positivos entre 1 e 10
/*int main(){
  int cont;
  int soma =0;

  for (cont=1;cont<=10;cont=cont+1);
  {
  soma=soma+cont;
  }
  int media;
  media=soma/10;
  printf ("A média dos números entre 1 e 10= %f\n", media);
} */


//Prática
// Mostrar número e ler 20 vezes
/*int main() {
  int numero;
  for(numero=1; numero<=20; numero=numero+1){
    printf ("%d Número lido !\n",numero);
  }
}*/

//Ler 15 números inteiros e positivos e mostre o maior deles.
/*
int main()
{
  int cont,num,maior;
  maior=0;
  for (cont=1;cont<=15;cont++)
  {
  printf ("Digite um número: ");
  scanf("%d",&num);
  }  
  if (num > maior)
    {
    maior=num;
    {
  }
}
  printf ("O maior dos números lidos = %d\n",maior); return 0;
}
*/

// desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.
/*
int main()
{
int cont;
float salario,media,soma,maior;
maior=0; soma=0;
for (cont=1;cont<=10;cont++)
{
printf ("Digite o salário do funcionário: ");
scanf("%f",&salario);
soma=soma+salario;
if (salario > maior)
{
maior=salario;
}
}
media=soma/5;
printf ("O maior salário da empresa e = %.2f \n",maior);
printf ("A média salarial da empresa e = %.2f \n",media);
return 0;
}*/



//4° desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.
/*
int main()
{
float nota1,nota2,nota3,media;
int contalunos;
for (contalunos=1;contalunos<=40;contalunos++)
{
printf("Entre com a nota 1 do aluno: ");
scanf("%f",¬a1);
printf("Entre com a nota 2 do aluno: ");
scanf("%f",¬a2);
printf("Entre com a nota 3 do aluno: ");
scanf("%f",¬a3);
media=(nota1+nota2+nota3)/3
if (media>=7)
{
printf("Aluno APROVADO com média : %.2f",media);
}
else
{
printf("Aluno REPROVADO com média : %.2f",media);
}
}
return 0;
}*/

//5°Problema desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.
/*
int main()
  {
  float percreaj,salario,salarioreaj,maiorsal;
  int cont;
  maiorsal=0;
  printf("Percentual de reajuste salarial:");
  scanf ("%f",&percreaj);
  for (cont=1;cont<=50;cont++)
  {
  printf("Informe o salário do funcionário:");
  scanf("%f",&salario);
  salarioreaj=salario+(salario*percreaj/100);
  printf("O salário reajustado e : %.2f \n\n",salarioreaj");
  if (salarioreaj>maiorsal)
  maiorsal=salarioreaj;
  }
  printf("O maior salário reajustado e : %.2f",maiorsal);
  return 0;
}
*/



//6º problema: desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros. Este programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.
/*
int main()
{
int cont,n,num,somapar,somaimpar;
somapar=0;
somaimpar=0;
printf ("Digite a quantidade de números da lista: ");
scanf("%d",&n);
for (cont=1;cont<=n;cont++)
{
printf ("Digite um número: ");
scanf("%d",&num);
if (num%2==0)
somapar=somapar+num;
else
somaimpar=somaimpar+num;
}
printf ("A soma dos números pares = %d\n",somapar);
printf ("A soma dos números ímpares = %d\n",somaimpar);
return 0;
}*/


// While

// desenvolver um programa que leia uma sequência de números inteiros terminada em zero e mostre cada número lido (exceto o zero).





//2º problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.
/*
int main()
{
float nota1,nota2,nota3,media;
int contalunos=1;
while (contalunos<=40)
{
printf("Entre com a nota 1 do aluno: ");
scanf("%f",&nota1);
printf("Entre com a nota 2 do aluno: ");
scanf("%f",&nota2);
printf("Entre com a nota 3 do aluno: ");
scanf("%f",&nota3);
media=(nota1+nota2+nota3)/3;
if (media>=7)
printf("APROVADO com média %.2f \n\n",media);
else
printf("REPROVADO com média %.2f \n\n",media);
contalunos++;
}
return 0;
}*/