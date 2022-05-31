main()
{
	int pl,fl,i,j,k,n;
	char p[100],f[100],c[100];
	memset(p,0,sizeof(p));
	memset(f,0,sizeof(f));
	memset(c,0,sizeof(c));
	printf("Enter the polynomial\n");
	gets(p);
	printf("Enter the Frame\n");
	gets(f);
	pl=strlen(p);
	fl=strlen(f);
	for(i=0;i<fl;i++)
	c[i]=f[i];
	n=pl+fl-1;
	for(i=fl;i<n;i++)
	f[i]='0';
	for(i=0;i<fl;i++)
	if(f[i]=='1')
	{
		for(j=i,k=0;k<pl;k++,j++)
			if(f[j]==p[k])
				f[j]='0';
			else
				f[j]='1';
	}
	for(i=0;i<fl;i++)
		f[i]=c[i];
			printf("\n The DATA TO BE SENT IS %s",f);
	getch();
}
