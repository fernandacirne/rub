int main () {
int rub, soma = 0

for(rub =1; rub <= 10000; rub++)
     if(rub % 2 == 1)
         soma += rub; // soma = soma = rub

printf("soma dos impares de 1 a 10000: %d\n\n",  soma);
}