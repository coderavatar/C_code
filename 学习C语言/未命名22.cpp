#include <stdio.h>
#include <string.h>


int main()
{
	char password[]="0";
	char ture_password[]="123456";
	int i=0;
	while(i<3)
	{
		printf("����������>:\n");
		scanf("%s",password);
		if(strcmp(password,ture_password)==0)
		{
			printf("������ȷ\n");
			break; 
		}
		else
		{
				printf("�������\n"); 
		}
		i++;
	}
	if(3==i)
	{
			printf("��¼ʧ��\n");
	}
	return 0; 
}





//int main()
//{
//	char ch[]="wel";
//	char ch1[]="###";
//	int right,left;
//	left=0;
//	right=strlen(ch)-1;
//			printf("%d\n",right);
//	while(left<=right)
//	{
//		ch1[left]=ch[left];
//		ch1[right]=ch[right];
//		left++;
//		right--;
//		printf("%s\n",ch1);
//	}
//	return 0;
//}




//int main()
//{
//	int arr1[]={1,2,3,4,6,7,8,9,10};
//	int num=6;
//	int right,left,mid;
//	left=0;
//	right=sizeof(arr1)/sizeof(arr1[0])-1;
//		printf("%d\n",right);
//	while(left<=right)
//	{
//	  	mid=(left+right)/2;
//	  	if(arr1[mid]<num)
//	  	{
//	  		
//	  		left=mid+1;
//		  }
//		  else if(arr1[mid]>num)
//		  {
//		  	right=mid-1;
//		  }
//		  else
//		  {
//		  	printf("�ҵ���");
//		  	break; 
//		  }
//	}
//	if(left>right)
//	{
//			printf("�Ҳ���");
//	}
//	return 0; 
//}







//int main()
//{
//	int i,t;
//	int n=2;
//	int sum=1;
//	int Sum_num=0;
////	scanf("%d",&n);
//   for(t=1;t<=n;t++)
// {
// 	
//	for(i=1;i<=t;i++)
//	{
//		sum=i*sum;
//	}
//	
//	Sum_num=Sum_num+sum;
//	sum=1;
// }
//	printf("%d\n",Sum_num);
//	return 0;
//}



//int main()
//{
//	int day;
//	int num=2;
//	scanf("%d",&day);
//	switch(day)
//	{
//		case 1 :
//		        switch(num)
//		        {
//		        	case 1 :break;
//		        	case 2 :num++;
//		            printf("%d",num);
//					break;	
//				}
//				printf("��������һ"); 
//		case 2 :printf("�������ڶ�");break; 
//		case 3 :printf("����������");break; 
//		case 4 :printf("����������");break; 
//		case 5 :printf("����������");break; 
//		case 6 :printf("����������");break; 
//		case 7 :printf("����������");break; 	
//		default : printf("�������");break; 												
//		
//	}
//}



//int main()
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		if(i%2==1)
//		{
//			printf("%d������",i);
//			printf(",%d\n",i);
//		}
//	}
//	return 0; 
//}
// 


//struct Book
//{
//	char name[30];
//	int price;
//};
//
//
//
//int main()
//{
//  struct Book b1={"beautiful girl",50};
//  printf("������%s\n",b1.name);
//  printf("�۸�%d\n",b1.price);  
//  return 0;
//}
