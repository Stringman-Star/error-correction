#define STACK_INIT_SIZE  10
#define STACK_INCREMENT  5
#include <stdio.h>
#include <stdlib.h>

//ջ��㶨��//
typedef struct Sqstack
{
  int *base;
  int *top;
  int stacksize;
}Sqstack;

//��ʼ��ջ//
int InitStack(Sqstack *s)
{
  

//�����������ɳ��򣬳�ʼ���ɹ��򷵻�1�����ɹ������error������0//
//********Begin1************//  
	if(s->top=(int*)malloc(sizeof(int))){
		s->base=s->top;
		return 1;
	}
		printf("error");
		return 0;

 //********End1****************//  

}


//ȡջ��Ԫ�أ���ջ��Ϊ������data������ֵ����ջΪ�����empty stack!������-1//
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


//��ֵe��ջ//
void push(Sqstack *s,int e)
{
 
//�����������ɳ���//
//********Begin2************// 
	(s->top)++;
	*(s->top)=e;
 //********End2****************//  
  
}

//��ջ��Ԫ�س�ջ����ջ��Ϊ������data������ֵ����ջΪ�����empty stack!//
int pop(Sqstack *s)
{
  int data;
  
//�����������ɳ���//
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

//�п�ջ����Ϊ�շ���1����Ϊ���򷵻�0//
int empty(Sqstack s)
{
 
 //�����������ɳ���//
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
