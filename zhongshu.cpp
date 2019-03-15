#include<stdio.h>


int num=0;

int sum=0;

int count(int a[],int p,int q)

{

  int n=a[(p+q)/2];

  int counts=0;

  for(int i=p;i<q;i++)

  { 

  if(a[i]==n){
  counts++;
  }

  }

  return counts;

}

int start(int a[],int p,int q)

{

  int x=0;

   
   for(int i=p;i<q;i++)

{

  if(a[i]==a[(p+q)/2])

  {

     x=i;

     break;

  }

}

return x;

}

void mode( int a[],int p,int q)

{

    int  tnum=(p+q)/2;

    int  tsum=count(a,p,q);

    int left=start(a,p,q);

    if(tsum>sum)

	{

       sum=tsum;

       num=a[tnum];

	}

    if(q-(left+tsum)>sum)

	{

         mode(a,left+tsum,q);

	}

     if(left>sum)

	 { 

          mode(a,0,left);

	 }

}



void main()

{

      

	int a[100];
	int count1=0;
	int i=0;
	char y;

do{	
	scanf("%d",&a[i++]);
	count1++;
	}while((y=getchar())!='\n');

      printf("个数：%d\n",count1);
      printf("输出结果：\n");
     
	 
	  
	  for(int j=0;j<i;j++){
		  
		  printf("%d\n",a[j]);
		 
	  }
	  
	  mode(a,0,count1+1);
	  printf("众数：%d\n",num);
	  printf("重数：%d\n",sum);


}
