#include <stdio.h>
int armarios[100000];

int n,l;

int coberturaJanela(int inicio)
{
 int i=inicio;
 int posFinal = armarios[inicio] + n;

 while(1)
 {
  if(i < l && armarios[i] < posFinal) i++;

  else break;
 }

 return i-inicio;
}

// Pega a janela com melhor cobertura
int melhorJanela()
{
 int i;
 int maiorNumArmariosDesocupados = 0;
 int indFinal = l-1;

 //identifica elemento que pode dar inicio a ultima janela
 while(indFinal > 0 && armarios[indFinal] > armarios[l-1]-n) indFinal--;
 if(indFinal < l-1 && armarios[indFinal] < armarios[l-1]-n) indFinal++;

 for(i=0; i <= indFinal; i++)
 {
  int x = coberturaJanela(i);
  if(x > maiorNumArmariosDesocupados) maiorNumArmariosDesocupados = x;
 }


 return maiorNumArmariosDesocupados;
}

int main()
{
 int i;

 while(scanf("%d %d", &n, &l) == 2)
 {
  if((n|l) == 0) return 0;
  for(i=0; i < l; i++) scanf("%d", armarios+i);

  printf("%d\n", n-melhorJanela());
 }

 return 0;
}
