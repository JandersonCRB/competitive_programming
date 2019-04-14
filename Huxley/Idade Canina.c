#include <stdio.h>
#include <string.h>


void printIdade(int idade, int um, int tres, int cinco)
{
    switch(idade)
    {
    case 1:
        printf("%d",um);
        break;
    case 3:
        printf("%d", tres);
        break;
    case 5:
        printf("%d", cinco);
        break;
    }
}

void tudoMinusculo(char *string)
{
	int i;
	for(i = 0;i < strlen(string);i++)
	{
		//retorna a letra minúscula (caso ela já seja minúscula retorna ela mesma)
		string[i] = tolower(string[i]);
	}
}

int main()
{
    int idade;
    char porte[8];
    scanf("%d\n%s",&idade,&porte);
    //converte todas as letras da string para minusculo
    tudoMinusculo(porte);
//    printf("%s\n",porte);
    if(!strcmp(porte, "pequeno"))
    {
        printIdade(idade,5, 21, 26);
    }
    else if(porte[0] == 'm')
    {
        printIdade(idade,6, 19, 32);
    }
    else if(!strcmp(porte,"grande"))
    {
        printIdade(idade,8, 23, 38);
    }
}
