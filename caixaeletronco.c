#include<stdio.h>
main()
{
 int i, total=0, operacao, retirado, saque, aux, final=0,aux2;
 int NOTA[6];
 int NOTAS[6];
 int RESTO[6];
 int SAIDA[6];
 int ENTRADA[6];
NOTA[0]=100;
NOTA[1]=50;
NOTA[2]=20;
NOTA[3]=10;
NOTA[4]=5;
NOTA[5]=1;
  printf("Caixa eletronico das Ilhas Caymano\n\n");
  printf("Insira a quantidade de notas para inicializacao do sistema\n\n");
 for (i=0; i<6;i++)
{
  printf("Quantidade de notas de R$%d,00: ", NOTA[i]);
scanf("%d", &NOTAS[i]);
}
printf("\n\n");
for (i=0;i<6;i++)
{ 
total=total+(NOTA[i]*NOTAS[i]); 
}
printf("\t\tTotal de valor em caixa = R$%d,00\n\n", total);
printf("Informe o tipo de operacao desejada\n1:\tSaque\n2:\tDeposito\n3:\tValor em caixa\n4:\tEncerrar\nOperacao: ");
scanf("%d", &operacao);
while (operacao<=3)
{
if(operacao==1)
{
printf("\nEscreva o valor desejado para saque: R$ ");
scanf("%d", &saque);
if(saque<=total)
{ aux=saque;
aux2=saque; 
for (i=0;i<6;i++)
{ 
if (aux>NOTA[i]&&aux/NOTA[i]>NOTAS[i])
{
RESTO[i]=aux-(NOTA[i]*NOTAS[i]); 
aux=RESTO[i];
} 
else 
if (aux%NOTA[i]>0&&aux%NOTA[i]!=aux)
{ 
RESTO[i]=aux%NOTA[i]; 
aux=RESTO[i];
}
else 
{
RESTO[i]=0;
}

if (saque/NOTA[i]>0&&NOTAS[i]!=0)
{
if (saque/NOTA[i]<=NOTAS[i])
{
SAIDA[i]=saque/NOTA[i];
saque=RESTO[i];
}
else 
{
SAIDA[i]=NOTAS[i];
saque=RESTO[i];
}}
else
SAIDA[i]=0;
}
for (i=0;i<6;i++)
{
final=final+SAIDA[i]*NOTA[i];
}
saque=aux2;
printf("\n");
if (final==saque) 
{
total=0;
for (i=0;i<6;i++)
{
NOTAS[i]=NOTAS[i]-SAIDA[i];
total=total+(NOTA[i]*NOTAS[i]);
printf("\tNotas de RS%d,00 entregues = %d\n ", NOTA[i],SAIDA[i]);
}}
else
printf("\nEste caixa eletronico nao possui notas suficientes para esta operacao\nConsulte o Valor em caixa para ciencia das notas disponiveis\n");
final=0;

printf("\nInforme o tipo de operacao desejada\n1:\tSaque\n2:\tDeposito\n3:\tValor em caixa\n4:\tEncerrar\nOperacao: ");
scanf("%d", &operacao);
}
else 
{
printf("\nEste caixa eletronico nao possui saldo suficiente para o saque desejado\n");
printf("\nInforme o tipo de operacao desejada\n1:\tSaque\n2:\tDeposito\n3:\tValor em caixa\n4:\tEncerrar\nOperacao: ");
scanf("%d", &operacao);
}
}
if(operacao==2)
{
total=0;
for (i=0;i<6;i++)
{
printf("\tInsira a quantidade de notas de R$%d,00 inseridas: ", NOTA[i]); 
scanf("%d", &ENTRADA[i]);
NOTAS[i]=NOTAS[i]+ENTRADA[i];
total=total+(NOTA[i]*NOTAS[i]);
}
printf("\nInforme o tipo de operacao desejada\n1:\tSaque\n2:\tDeposito\n3:\tValor em caixa\n4:\tEncerrar\nOperacao: ");
scanf("%d", &operacao);
}

if(operacao==3) 
{
for (i=0;i<6;i++)
{
printf("\t\tTotal de notas de R$%d,00 = %d\n", NOTA[i], NOTAS[i]); 
}
printf("\t\tTotal de valor em caixa = R$%d,00\n\n", total);
printf("\nInforme o tipo de operacao desejada\n1:\tSaque\n2:\tDeposito\n3:\tValor em caixa\n4:\tEncerrar\nOperacao: ");
scanf("%d", &operacao);
}
}
printf("\n\nCaixa eletronico das Ilhas Caymano agradece sua preferencia e espera reve-lo em breve");
getch();
}
