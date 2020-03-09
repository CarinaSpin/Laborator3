#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n, c, i,k=0,v[101],b[101],j,aux=0;
	printf("Introduceti numarul:");
	scanf("%d", &c);
	printf("Introduceti numarul:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
		aux=v[i];
		while (v[i] != 0)
		{
			b[k++] = v[i] % 2;
			v[i] = v[i] / 2;
		}
		for (j=k-1;j>=0;j--)
			if (b[j] == 1 && j==c)
				printf("%d\n", aux);
		k = 0;
	}	
	
			
	system("pause");
	return 0;
}