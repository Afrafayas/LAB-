{\rtf1\ansi\ansicpg1252\deff0{\fonttbl{\f0\fswiss\fcharset0 Helvetica;}}
{\colortbl ;\red0\green0\blue0;}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\cf1\lang9\f0\fs26 #include <stdio.h>\par
#define max 2\par
int cqueue[max],front = \~- 1,rear = \~- 1;\par
void insertq(int item)\par
\{\par
\~ \~ if ((front == 0 && rear == max - 1) || (front == rear + 1))\par
\~ \~ \{\par
\~ \~ \~ \~ printf("queue is full");\par
\~ \~ \~ \~ return;\par
\~ \~ \}\par
\~ \~ else if (rear == \~- 1)\par
\~ \~ \{\par
\~ \~ \~ \~ rear++;\par
\~ \~ \~ \~ front++;\par
\~ \~ \}\par
\~ \~ else if (rear == max - 1 && front > 0)\par
\~ \~ \{\par
\~ \~ \~ \~ rear = 0;\par
\~ \~ \}\par
\~ \~ else\par
\~ \~ \{\par
\~ \~ \~ \~ rear++;\par
\~ \~ \}\par
\~ \~ cqueue[rear] = item;\par
\}\par
void deleteq()\par
\{\par
\~ \~ if (front == \~- 1)\par
\~ \~ \{\par
\~ \~ \~ \~ printf("Queue is empty ");\par
\~ \~ \}\par
\~ \~ else if (front == rear)\par
\~ \~ \{\par
\~ \~ \~ \~ printf("\\n %d deleted", cqueue[front]);\par
\~ \~ \~ \~ front = \~- 1;\par
\~ \~ \~ \~ rear = \~- 1;\par
\~ \~ \}\par
\~ \~ else\par
\~ \~ \{\par
\~ \~ \~ \~ printf("\\n %d deleted", cqueue[front]);\par
\~ \~ \~ \~ front++;\par
\~ \~ \}\par
\}\par
\par
void display()\par
\{\par
\~ \~ int i;\par
\~ \~ printf("\\n");\par
\~ \~ if (front > rear)\par
\~ \~ \{\par
\~ \~ \~ \~ for (i = front; i < max; i++)\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ printf("%d ", cqueue[i]);\par
\~ \~ \~ \~ \}\par
\~ \~ \~ \~ for (i = 0; i <= rear; i++)\par
\~ \~ \~ \~ \~ \~ printf("%d ", cqueue[i]);\par
\~ \~ \}\par
\~ \~ else\par
\~ \~ \{\par
\~ \~ \~ \~ for (i = front; i <= rear; i++)\par
\~ \~ \~ \~ \~ \~ printf("%d ", cqueue[i]);\par
\~ \~ \}\par
\}\par
\par
int main()\par
\{\par
\~ \~ int n, ch;\par
\par
\~ \~ \~ \~ printf("\\n\\n Circular Queue:\\n1. Insert \\n2. Delete\\n3. Display\\n0. Exit");\par
\~ \~ \~ \~ do\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ printf("\\nEnter Choice 0-3? : ");\par
\~ \~ \~ \~ scanf("%d", &ch);\par
\~ \~ \~ \~ switch (ch)\par
\~ \~ \~ \~ \{\par
\~ \~ \~ \~ \~ \~ case 1:\par
\~ \~ \~ \~ \~ \~ \~ \~ printf("\\nEnter number: ");\par
\~ \~ \~ \~ \~ \~ \~ \~ scanf("%d", &n);\par
\~ \~ \~ \~ \~ \~ \~ \~ insertq(n);\par
\~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \~ \~ case 2:\par
\~ \~ \~ \~ \~ \~ \~ \~ deleteq();\par
\~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \~ \~ case 3:\par
\~ \~ \~ \~ \~ \~ \~ \~ display();\par
\~ \~ \~ \~ \~ \~ \~ \~ break;\par
\~ \~ \~ \~ \}\par
\~ \~ \}while (ch != 0);\par
\}\par
\par
\par
\par
}
 