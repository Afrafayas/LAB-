{\rtf1\ansi\ansicpg1252\deff0{\fonttbl{\f0\fswiss\fcharset0 Helvetica;}}
{\colortbl ;\red0\green0\blue0;}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\cf1\lang9\f0\fs26 #include<stdio.h>\par
#include<stdlib.h>\par
#include<math.lib>\par
\par
struct node\par
\{\par
\~ \~ \~ \~ int val;\par
\~ \~ \~ \~ struct node*next;\par
\};\par
\~\par
struct node *head;\par
void push(int data)\par
\{\par
\~ \~ \~ \~\par
\~ \~ \~ \~ struct node *ptr=(struct node*)malloc(sizeof(struct node)); \~ \~ \~ \~\par
\~ \~ \~ \~ if(ptr==NULL)\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("overflow");\par
\~ \~ \~ \~ \}\par
\~ \~ \~ \~ else\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ if(head==NULL)\par
\~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ ptr->val=data;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ ptr->next=NULL;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ head=ptr;\par
\~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \~ \~ else\par
\~ \~ \~ \~ \~ \~ \~ \~ \{ \~ \~ \~ \~\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ ptr->val=data;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ ptr->next=head;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ head=ptr;\par
\~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("item pushed");\par
\~ \~ \~ \~ \}\par
\}\par
\par
void pop()\par
\{\par
\~ \~ \~ \~ int item;\par
\~ \~ \~ \~ struct node *ptr;\par
\~ \~ \~ \~ if(head==NULL)\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("underflow");\par
\~ \~ \~ \~ \}\par
\~ \~ \~ \~ else\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ item=head->val;\par
\~ \~ \~ \~ \~ \~ \~ \~ ptr=head;\par
\~ \~ \~ \~ \~ \~ \~ \~ head=head->next;\par
\~ \~ \~ \~ \~ \~ \~ \~ free(ptr);\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("item poped");\par
\~ \~ \~ \~ \}\par
\}\par
void display()\par
\{\par
\~ \~ \~ \~ int i;\par
\~ \~ \~ \~ struct node *ptr;\par
\~ \~ \~ \~ ptr=head;\par
\par
\~ \~ \~ \~ if(head==NULL)\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("undrflow");\par
\~ \~ \~ \~ \}\par
\~ \~ \~ \~ else\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("elements\\n");\par
\~ \~ \~ \~ \~ \~ \~ \~\par
\~ \~ \~ \~ \~ \~ \~ \~ while(ptr!=NULL)\par
\~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ printf("%d\\n",ptr->val);\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ ptr=ptr->next;\par
\~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \}\par
\}\par
void main()\par
\{\par
\~ \~ \~ \~ int c,x,i;\par
\~ \~ \~ \~ printf("STACK OPERATIONS USING LINKEDLIST");\par
\~ \~ \~ \~ printf("1.PUSH\\n2.POP\\n3.DISPLAY\\n4.EXIT\\n");\par
\~ \~ \~ \~ do\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("ENTER YOUR CHOICE:");\par
\~ \~ \~ \~ \~ \~ \~ \~ scanf("%d",&c);\par
\~ \~ \~ \~ \~ \~ \~ \~ switch(c)\par
\~ \~ \~ \~ \~ \~ \~ \~\par
\~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ case 1:\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ printf("enter element:");\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ scanf("%d",&x);\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ push(x); \~ \~ \~ \~\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ case 2:\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ pop();\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ case 3:\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ display();\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ case 4:\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ printf("exit point");\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ default:\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ printf("enter valid choice(1/2/3/4)");\par
\~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \~ \}\par
\par
\~ \~ \~ \~ \~ \~ \~ \~ \}\par
\~ \~ \~ \~ \}while(c!=4);\par
\par
\par
\pard\sa200\sl276\slmult1\}\par
}
 