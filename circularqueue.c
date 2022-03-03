{\rtf1\ansi\ansicpg1252\cocoartf1348\cocoasubrtf170
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww31500\viewh14860\viewkind0
\deftab720
\pard\pardeftab720

\f0\fs26 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 cirular queue implimentation using array ha haa haaaa haaaa hiii hiii hiii hiii huuu huu huu huu#include <stdio.h>\
#define max 2\
int cqueue[max],front = \'a0- 1,rear = \'a0- 1;\
void insertq(int item)\
\{\
\'a0 \'a0 if ((front == 0 && rear == max - 1) || (front == rear + 1))\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("queue is full");\
\'a0 \'a0 \'a0 \'a0 return;\
\'a0 \'a0 \}\
\'a0 \'a0 else if (rear == \'a0- 1)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 rear++;\
\'a0 \'a0 \'a0 \'a0 front++;\
\'a0 \'a0 \}\
\'a0 \'a0 else if (rear == max - 1 && front > 0)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 rear = 0;\
\'a0 \'a0 \}\
\'a0 \'a0 else\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 rear++;\
\'a0 \'a0 \}\
\'a0 \'a0 cqueue[rear] = item;\
\}\
void deleteq()\
\{\
\'a0 \'a0 if (front == \'a0- 1)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("Queue is empty ");\
\'a0 \'a0 \}\
\'a0 \'a0 else if (front == rear)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("\\n %d deleted", cqueue[front]);\
\'a0 \'a0 \'a0 \'a0 front = \'a0- 1;\
\'a0 \'a0 \'a0 \'a0 rear = \'a0- 1;\
\'a0 \'a0 \}\
\'a0 \'a0 else\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("\\n %d deleted", cqueue[front]);\
\'a0 \'a0 \'a0 \'a0 front++;\
\'a0 \'a0 \}\
\}\
\
void display()\
\{\
\'a0 \'a0 int i;\
\'a0 \'a0 printf("\\n");\
\'a0 \'a0 if (front > rear)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 for (i = front; i < max; i++)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("%d ", cqueue[i]);\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 for (i = 0; i <= rear; i++)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("%d ", cqueue[i]);\
\'a0 \'a0 \}\
\'a0 \'a0 else\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 for (i = front; i <= rear; i++)\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("%d ", cqueue[i]);\
\'a0 \'a0 \}\
\}\
\
int main()\
\{\
\'a0 \'a0 int n, ch;\
\
\'a0 \'a0 \'a0 \'a0 printf("\\n\\n Circular Queue:\\n1. Insert \\n2. Delete\\n3. Display\\n0. Exit");\
\'a0 \'a0 \'a0 \'a0 do\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("\\nEnter Choice 0-3? : ");\
\'a0 \'a0 \'a0 \'a0 scanf("%d", &ch);\
\'a0 \'a0 \'a0 \'a0 switch (ch)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 1:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 printf("\\nEnter number: ");\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 scanf("%d", &n);\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 insertq(n);\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 2:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 deleteq();\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 case 3:\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 display();\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 break;\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \}while (ch != 0);\
\}\
\
\
\
}