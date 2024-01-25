#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "welcome to the new world";
	
	int n;
	int i = strlen(str);
	char strRev[i];
	printf("%d\n",i);
	for (n=0;i != (-1);n++)
	{
		i--;
		strRev[n]=str[i];
	}
	strRev[n]='\0';
	printf("%s",strRev);
	return (0);
}
