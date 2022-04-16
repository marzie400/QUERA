#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[100][900];
  int n,i,j;
  char ch;
    scanf("%d",&n);
     while( ch = getchar() != '\n' && ch != EOF);
       for(i=0;i<n;i++)
  {
       fgets(str[i], 900 , stdin);
                     continue;
  }
    for(i=0;i<n;i++){
	for(j=0;j<strlen(str[i]);j++){
  	    if(j==0)
	{
	str[i][j]=(char)toupper(str[i][j]);
	j++;
       	}
	if(str[i][j]==' ')
	{
	str[i][j+1]=(char)toupper(str[i][j+1]);
	j++;
		}
	else{
		str[i][j]=(char)tolower(str[i][j]);
	    }
		                       }
		      }
	               for(i = 0; i<n; i++)
			   printf("%s\n",str[i]);
 return 0;
}
