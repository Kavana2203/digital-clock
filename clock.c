#include<stdio.h>
int main()
{
	int hr,min,sec,i,j;
	printf("Enter the present time\n");
	scanf("%d%d%d",&hr,&min,&sec);
	for(i=1;;i++)
	{
        for(j=1;j<470000000;j++);
		if(sec==59)
		{
			min++;
			sec=0;	
		}	
		else
			sec++;
		if(min>59)
		{
			hr++;
			min=0;
		}
		if(hr==24)
			hr=min=sec=0;
		printf("%d:%d:%d\a\n",hr,min,sec);
		
	}
	return 0;	
}
