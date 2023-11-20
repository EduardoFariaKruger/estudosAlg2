void insertion_sort_i (int v[], int tam)
{
  for (int i = 1; i < tam; i++)
  {
    v[0] = v[i];
    int j = i - 1;
    while (v[0] < v[j]) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = v[0];
  }
}

void shell_sort(int vetor[], int tam)
{
    int h = 1;
    int aux;
    while (h > 0)
    {
        h = (h - 1)/3;
        for (int i = h; i < tam; i++)
        {
            aux = vetor[i];
            int j = i;
            while (j > (h -1) && vetor[j - h] > aux)
            {
                vetor[j] = vetor[j - h];
                j = j - h;
            }
            vetor[j] = aux;
        }
    }
}


int pos_menor(int v[], int n, int i)
{
    int p = i;
    for (int j = i+1; j < n; j++)
    {
        if (v[j] < v[p])
        {
            p = j;
        }
    }
    return p;
}

void troca(int v[], int i, int posicao_menor)
{
    int aux = v[i];
    v[i] = v[posicao_menor];
    v[posicao_menor] = aux;
}

void selection_sort_i (int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        troca(v, i, pos_menor(v, tam, i));
    }
}