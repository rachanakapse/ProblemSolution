#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter the value between 1-250\n");
	int weight=0;
	scanf("%d",&weight);
	int arr[] = { 1, 5,7, 9, 11 };
	int result[]={0,0,0,0,0};

	int w=0;
	int i=4;
	while(i>=0){
		if(weight>=arr[i] && weight>0)
		{
			w=weight%arr[i];
			
			
			if(w ==1 | w== 5 | w==7 | w==9 | w==0){
				result[i]=floor(weight/arr[i]);
				weight=w;
			}
			else{
		

				result[i]=floor(weight/arr[i])-1;
				weight=w+arr[i];
			
			}
			i--;
		}
		else{

			i--;

		}


	}
	int sum=0;
	for(i=0;i<5;i++)
	{
		//printf("%d ",result[i]);
		sum=sum+ result[i];

	}
	printf("weight needed\n");
	printf("%d",sum);
}