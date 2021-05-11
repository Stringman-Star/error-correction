#define STACK_INIT_SIZE  10
#define STACK_INCREMENT  5
#include <stdio.h>
#include <stdlib.h>

//栈结点定义//
typedef struct Sqstack
{
  int *base;
  int *top;
  int stacksize;
}Sqstack;

//初始化栈//
int InitStack(Sqstack *s)
{
  

//请填入代码完成程序，初始化成功则返回1，不成功则输出error，返回0//
//********Begin1************//  
	if(s->top=(int*)malloc(sizeof(int))){
		s->base=s->top;
		return 1;
	}
		printf("error");
		return 0;

 //********End1****************//  

}


//取栈顶元素，若栈不为空则以data返回其值，若栈为空输出empty stack!，返回-1//
int GetTop(Sqstack *s)
{
  	int data;
 	if(s->top==s->base)
   	{
    	printf("empty stack!\n");
    	return -1;
    }
    data=*(s->top--);
 	 return data; 
}


//将值e入栈//
void push(Sqstack *s,int e)
{
 
//请填入代码完成程序//
//********Begin2************// 
	(s->top)++;
	*(s->top)=e;
 //********End2****************//  
  
}

//将栈顶元素出栈，若栈不为空则以data返回其值，若栈为空输出empty stack!//
int pop(Sqstack *s)
{
  int data;
  
//请填入代码完成程序//
//********Begin3************//  
	if(s->top==s->base){
		printf("empty stack!\n");
	}else{
		data=*(s->top);
		s->top--;
		return data;
	}
	return 0;

 //********End3****************//  
  
}

//判空栈，若为空返回1，不为空则返回0//
int empty(Sqstack s)
{
 
 //请填入代码完成程序//
//********Begin4************// 
	if(s.base==s.top){
		return 1;
	}
	return 0;
//********End4****************// 

}

main()
{
 int a;
 int result;
 Sqstack s;
 result=InitStack(&s);
 if(result==1)  printf("success\n");
 else  printf("failure\n");
 printf("input :\n");
 scanf("%d",&a);
 while(a!=0)
 {
  	push(&s,a);
 	 scanf("%d",&a);
 }

 while(!(empty(s))){
	 printf("%3d",pop(&s));
}
}
