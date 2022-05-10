#include <stdio.h>
#include <string.h>


int main()
{
	char password[]="0";
	char ture_password[]="123456";
	int i=0;
	while(i<3)
	{
		printf("请输入密码>:\n");
		scanf("%s",password);
		if(strcmp(password,ture_password)==0)
		{
			printf("密码正确\n");
			break; 
		}
		else
		{
				printf("密码错误\n"); 
		}
		i++;
	}
	if(3==i)
	{
			printf("登录失败\n");
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
//		  	printf("找到了");
//		  	break; 
//		  }
//	}
//	if(left>right)
//	{
//			printf("找不到");
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
//				printf("今天星期一"); 
//		case 2 :printf("今天星期二");break; 
//		case 3 :printf("今天星期三");break; 
//		case 4 :printf("今天星期四");break; 
//		case 5 :printf("今天星期五");break; 
//		case 6 :printf("今天星期六");break; 
//		case 7 :printf("今天星期天");break; 	
//		default : printf("输入错误");break; 												
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
//			printf("%d是奇数",i);
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
//  printf("书名：%s\n",b1.name);
//  printf("价格：%d\n",b1.price);  
//  return 0;
//}
