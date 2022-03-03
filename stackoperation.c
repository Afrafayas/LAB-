{\rtf1\ansi\ansicpg1252\cocoartf1348\cocoasubrtf170
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720

\f0\fs26 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include<stdio.h>\
#include<stdlib.h>\
\
struct node\
\{\
\'a0 \'a0 \'a0 \'a0 int val;\
\'a0 \'a0 \'a0 \'a0 struct node*next;\
\};\
\'a0\
struct node *head;\
void push(int data)\
\{\
\'a0 \'a0 \'a0 \'a0\
\'a0 \'a0 \'a0 \'a0 struct node *ptr=(struct node*)malloc(sizeof(struct node)); \'a0 \'a0 \'a0 \'a0\
\'a0 \'a0 \'a0 \'a0 if(ptr==NULL)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("overflow");\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 else\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(head==NULL)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 ptr->val=data;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 ptr->next=NULL;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 head=ptr;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 else\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{ \'a0 \'a0 \'a0 \'a0\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 ptr->val=data;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 ptr->next=head;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 head=ptr;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("item pushed");\
\'a0 \'a0 \'a0 \'a0 \}\
\}\
\
void pop()\
\{\
\'a0 \'a0 \'a0 \'a0 int item;\
\'a0 \'a0 \'a0 \'a0 struct node *ptr;\
\'a0 \'a0 \'a0 \'a0 if(head==NULL)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("underflow");\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 else\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 item=head->val;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 ptr=head;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 head=head->next;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 free(ptr);\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("item poped");\
\'a0 \'a0 \'a0 \'a0 \}\
\}\
void display()\
\{\
\'a0 \'a0 \'a0 \'a0 int i;\
\'a0 \'a0 \'a0 \'a0 struct node *ptr;\
\'a0 \'a0 \'a0 \'a0 ptr=head;\
\
\'a0 \'a0 \'a0 \'a0 if(head==NULL)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("undrflow");\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 else\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("elements\\n");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 while(ptr!=NULL)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("%d\\n",ptr->val);\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 ptr=ptr->next;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \}\
\}\
void main()\
\{\
\'a0 \'a0 \'a0 \'a0 int c,x,i;\
\'a0 \'a0 \'a0 \'a0 printf("STACK OPERATIONS USING LINKEDLIST");\
\'a0 \'a0 \'a0 \'a0 printf("1.PUSH\\n2.POP\\n3.DISPLAY\\n4.EXIT\\n");\
\'a0 \'a0 \'a0 \'a0 do\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("ENTER YOUR CHOICE:");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 scanf("%d",&c);\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 switch(c)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 1:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("enter element:");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 scanf("%d",&x);\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 push(x); \'a0 \'a0 \'a0 \'a0\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 2:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 pop();\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 3:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 display();\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 4:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("exit point");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 default:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("enter valid choice(1/2/3/4)");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \}while(c!=4);\
\
\
\}}