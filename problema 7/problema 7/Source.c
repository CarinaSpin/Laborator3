#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, nr,b[101],k=0,sum=0,j,v[101],s=0,l;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for(i=0;i<n;i++)
	{
		
		while (v[i] != 0)
		{
			b[k++] = v[i] % 2;
			v[i] = v[i] / 2;
		}
		for(j=0;j<k;j++)
			if (b[j]%10 == 1)
				sum = sum + b[j];
		k = 0;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}