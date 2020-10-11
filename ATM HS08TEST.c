#include<stdio.h>
int main()
{
unsigned int x; //amount withdrawn
float y; //bank balance
scanf("%d%f", &x,&y);
if(((x>0)&&(x<=2000))&&((y>0)&&(y<=2000)))
{

	if(x>y&&x%5==0)
		printf("%0.2f", y);
	else if(x%5==0)
	{
		y=(y-x)-0.5;
		printf("%0.2f", y);
	}
	else
		printf("%0.2f", y);
}
getchar();
return 0;
}
