#include<stdio.h>
#include<string.h>
main(){
	int i,count=0,po=0,j;
	char a[100];
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		po=0;
		for(j=i+1;j<=strlen(a);j++)
		{
			if(a[i]==a[j])
			{
				po=1;
			}
	}

	if(po==0)count++;
}
if(count%2==0)printf("CHAT WITH HER!\n");
	else printf("IGNORE HIM!\n");
}
