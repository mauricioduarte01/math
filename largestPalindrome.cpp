
#include <stdio.h>
#include <string.h>


int isPalindrome(int val)
{
	char buff[100];
	sprintf(buff,"%d",val);
    
        int a = 0;
	int b = strlen(buff)-1;

	while(a < b && buff[a] == buff[b])
	{
    		a++;
    		b--;
	}
	return(a >= b);
}

int main(int argc, char **argv)
{
	int i,j,k;
	int max = 0;
	for(i = 1;i <= 999; i++) {
    		for(j = 1;j <= 999; j++) {
        		k = i * j;
        		if(k > max && isPalindrome(k))
        		{
            			max=k;
        		}
    		}
	}
	printf("max: %d\n", max);
}