#include<string.h>
#include<conio.h>
main()
{
	char s[30],s2[30];
	int i=0,j=0,k=0;
	memset(s,0,sizeof(s));
	memset(s2,0,sizeof(s2));
	puts("Enter String");
	gets(s);
	while(s[i]!='\0')
	{
		if((s[i]=='d')&&(s[i+1]=='l')&&(s[i+2]=='e'))
		{
 			j=i+3;
 			k=0;
 			while(s[j]!='\0')
 			{
 				s2[k]=s[j];
 				k++;
 				j++;
 			}
			s[i+3]='d';
			s[i+4]='l';
			s[i+5]='e';
			s[i+6]='\0';
			strcat(s,s2);
			memset(s2,0,sizeof(s2));
			i=i+6;
		}
		else
			i++;
	}
	printf("The Frame is dle stx %s dle etx",s);
	getch();
}
