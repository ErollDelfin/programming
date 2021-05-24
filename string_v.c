#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char f[100];
    int i,v=0, c=0, L;

    printf("Input a sentence: ");
    fgets(f, sizeof(f), stdin);

    L = strlen(f);

    i=0;
    while(f[i]!='\0')
        {
        if(f[i]=='a' ||f[i]=='e' ||f[i]=='i' ||f[i]=='o' ||f[i]=='u')
            f[i]=f[i]-32;
        i++;
        }

    for(i=0;f[i];i++)
    {
    	if((f[i]>=65 && f[i]<=90)|| (f[i]>=97 && f[i]<=122))
    	{

            if(f[i]=='a'|| f[i]=='e'||f[i]=='i'||f[i]=='o'||f[i]=='u'||f[i]=='A'||f[i]=='E'||f[i]=='I'||f[i]=='O' ||f[i]=='U')
		      v++;
            else
             c++;
        }

 	}

    printf("String Converted: ");
    puts(f);
    printf("\nString length: %d\n", L);
    printf("vowels = %d\n",v);
    printf("consonants = %d\n",c);

    return 0;
}
