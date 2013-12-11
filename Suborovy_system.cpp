#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int vypocet_velkosti() {
	int velkost = 0;


	return 0;
}
//druhy komentar 
//pridalsom komentar
void main() {
	
	FILE *f;
	char name;int number;
	f = fopen("subor.txt","r");
	//fprintf(f,"ahoooj");
	
	 printf("\nNew contact name: ");
    scanf("%s", &name);
    printf("New contact number: ");
    scanf("%i", &number);


    fprintf(f, "%c\n[ %d ]\n\n", name, number);
	
	//printf("%s",f);
	fclose(f);
	system("pause");


}
