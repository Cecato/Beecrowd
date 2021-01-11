#include <stdio.h>

int main (){

    int n, i, j, t;

    while (1){

        scanf("%d", &n);

		if ( n == 0 ) break;

		int m [n] [n], aux = 1;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				m [i] [j] = aux;
				aux *= 2;
			}

			aux = m [i] [0] * 2;
		}

		t = m [n - 1] [n - 1];

		for( aux = 0; t > 0; aux++){
            t % 10;
			t = t/10;
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0, printf("%*d", aux, m [i] [j]); j < n; j++)
			{
				if (j != 0) printf(" %*d", aux, m [i] [j]);
			}

			printf("\n");
		}

		printf("\n");

	}

	return 0;
}
