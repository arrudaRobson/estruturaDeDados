#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	 setlocale(LC_ALL,"portuguese");
 
  char login[] = "Aluno";
  char senha[] = "uni9";
  printf("Login: \n");
  gets(login);
  printf("Senha: \n");
  gets(senha);

   	   if (strcmp(login, "Aluno") == 0 && strcmp(senha, "uni9") == 0){
       printf("acesso liberado/n");
    } else{
       printf("Usuário ou senha inválidos/n"); 
    }
   
   
   
   return 0;
}
