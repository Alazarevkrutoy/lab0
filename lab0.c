#include <stdio.h>
#include <stdlib.h>
main (){
int a,c;
float b[3][4];
for(a=0; a<3; a++)
    for(c=0; c<4; c++)
	{
		scanf("%f", &b[a][c]);
    }
	printf("Matrix: \n");
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
            printf("%.2f ",b[a][c]);
        }
    	printf("\n");
	}
	float str;
	str=b[0][0]; 
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
            if(a==0)
            {
            	b[a][c]= b[a][c]/str;
			}
        }
	}
	float str1,tm;
	str1=b[1][0];
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
        	   tm=b[0][c];
        	   if(a==1)
        	   {
        			b[a][c]=tm*(-str1)+b[a][c];
			   }
        }
	}
	float str2;
	str2=b[2][0];
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
        	   tm=b[0][c];
        	   if(a==2)
        	   {
        			b[a][c]=tm*(-str2)+b[a][c];
			   }
        }
	}
	float str3;
	str3=b[1][1];
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
        	   if(a==1)
        	   {
        			b[a][c]/=str3;
			   }
        }
	}
	float str4;
	str4=b[2][1];
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
        	   tm=b[1][c];
        	   if(a==2)
        	   {
        			b[a][c]=tm*(-str4)+b[a][c];
			   }
        }
	}
	float str5;
	str5=b[2][2];
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {
        	   if(a==2)
        	   {
        			b[a][c]/=str5;
			   }
        }
	}

	printf("Matrix: \n");
	for(a=0; a<3; a++)
	{
    	for(c=0; c<4; c++)
        {	
        	if(a==1 && c==0 || a==2 && c==0 || a==2 && c==1)
        	{
        		b[a][c]=abs(b[a][c]);
			}
            printf("%.2f ",b[a][c]);
        }
    	printf("\n");
	}
	
	printf("\n");
	float x1,x2,x3;
	x3 = b[2][3];
	x2 = b[1][3]-b[1][2]*x3; 
	x1 = b[0][3]-b[0][1]*x2-b[0][2]*x3; 
	printf("Result X1: %f\n",x1);
	printf("Result X2: %f\n",x2);
	printf("Result X3: %f\n",x3);

		
 return 0;
}
