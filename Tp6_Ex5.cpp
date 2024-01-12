//Ecrire un programme C permettant de simuler le fonctionnement de la fonction strncat
//permettant de concaténer n caractères de la deuxième chaine en utilisant le mécanisme de
//pointeurs.
#include<stdio.h>
#include<string.h>

int main(){
	char ch1[10], ch2[10];
	int n2; //longueur de ch2
	int n ; //nombre de caractere à concatener
	char* p1;
	char* p2;
	
	//saisie de ch1 et ch2
	printf("donner ch1: ");
	gets(ch1);
	printf("donner ch2: ");
	gets(ch2);
	
	//determination de n
	n2= strlen(ch2);
	do{
		printf("donner n: ");
		scanf("%d",&n);
	}while ((n<0)||(n>n2));
	
	//concarenation 
	p1=ch1+strlen(ch1); //p1 pointe apres le dernier caractere de ch1
	p2=ch2;
	while((p2-ch2)<n){
		*p1 += *p2 ;
		p1++;
		p2++;
	}
	*p1='\0';
	//affichage
	puts (ch1);
	
	return 0;
}
