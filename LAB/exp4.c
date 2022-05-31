#include<stdio.h>
main()
{
	int i,j,k,pl,fl,n,cl;
	char a[10],b[100],c[100],count=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	printf("Enter polynomial\n");
	scanf("%s",a);
	printf("Enter the CRC appended frame\n");
	scanf("%s",b);
	pl=strlen(a);
	fl=strlen(b);
	/* to copy original frame to c[]*/
	for(i=0;i<fl;i++)
	c[i]=b[i];
	n=fl-pl+1;
	for(i=0;i<n;i++)
	if(c[i]=='1')
	{
		for(j=i,k=0;k<pl;k++,j++)
			if(a[k]==c[j])
				c[j]='0';
			else
				c[j]='1';
	}
	for(i=0;i<n;i++)
		c[i]=b[i];
	for(i=n;i<fl;i++)
	{
		if(c[i]=='1')
			count++;
	}
	if(count==0)
		printf("The message is correct\n");
	else
		printf("The message is not correct\n");
	getch();
}
