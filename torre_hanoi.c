#include <stdio.h>

void move (int n, int p1, int p2){
    printf ("moveu disco %d do pino %d para o pino %d\n", n, p1, p2);
}

/* 
    Move da pilha 1 para pilha 2 usando aux.
    Retorna o numero de movimentos feitos.
    n eh o numero de discos.
*/
int hanoi (int n, int p1, int p2, int aux){
    int n_movimentos;
    if (n == 1)
    {
        move(n, p1, p2);
        return 1;
    }
    n_movimentos = hanoi(n-1, p1, aux, p2);
    move(n, p1, p2);
    return n_movimentos + hanoi(n-1, aux, p2, p1) + 1;
}

int main(){
    int cont, n;

    scanf ("%d",&n);

    cont = hanoi (n, 1, 3, 2);
    printf ("\nTerminou fazendo %d movimentos\n",cont);

    return 0;
}