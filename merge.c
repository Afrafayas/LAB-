{\rtf1\ansi\ansicpg1252\cocoartf1348\cocoasubrtf170
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww24660\viewh9580\viewkind0
\deftab720
\pard\pardeftab720

\f0\fs26 \cf2 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include <stdio.h>\
void main()\
\{\
\'a0 \'a0 int a[10],b[10],c[10],i,k,n1,n2,j,t;\
\'a0 \'a0 printf("enter the size of the first array:");\
\'a0 \'a0 scanf("%d",&n1);\
\'a0 \'a0 printf("enter the array elements:");\
\'a0 \'a0 for(i=0;i<n1;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 scanf("%d",&a[i]);\
\'a0 \'a0 \}\
\'a0 \'a0 printf("after sorting of first array:");\
\'a0 \'a0 \{\
\'a0 \'a0 for(i=0;i<n1;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 for(j=i+1;j<n1;j++)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(a[i]>a[j])\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 t=a[i];\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 a[i]=a[j];\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 a[j]=t;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \}\
\'a0 \'a0 for(i=0;i<n1;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("%d\\t",a[i]);\
\'a0 \'a0 \'a0 \'a0 c[i]=a[i];\
\'a0 \'a0 \}\
\'a0 \'a0 printf("\\n");\
\'a0 \'a0 \}\
\'a0 \'a0 k=i;\
\'a0 \'a0 printf("enter the size of the second array:");\
\'a0 \'a0 scanf("%d",&n2);\
\'a0 \'a0 printf("enter the array elements:");\
\'a0 \'a0 for(i=0;i<n2;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 scanf("%d",&b[i]);\
\'a0 \'a0 \}\
\'a0 \'a0 printf("after sorting of second array:");\
\'a0 \'a0 \{\
\'a0 \'a0 j=0;\
\'a0 \'a0 for(i=0;i<n2;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 for(j=i+1;j<n2;j++)\
\'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 if(b[i]>b[j])\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 t=b[i];\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 b[i]=b[j];\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \'a0 b[j]=t;\
\'a0 \'a0 \'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \'a0 \'a0 \}\
\'a0 \'a0 \}\
\'a0 \'a0 for(i=0;i<n2;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("%d\\t",b[i]);\
\'a0 \'a0 \'a0 \'a0 c[k]=b[i];\
\'a0 \'a0 \'a0 \'a0 k++;\
\'a0 \'a0 \}\
\'a0 \'a0 printf("\\n");\
\'a0 \'a0\
\'a0 \'a0 \}\
\'a0 \'a0 printf("merged array is:");\
\'a0 \'a0 k=n1+n2;\
\'a0 \'a0 for(i=0;i<k;i++)\
\'a0 \'a0 \{\
\'a0 \'a0 \'a0 \'a0 printf("%d\\t",c[i]);\
\'a0 \'a0 \}\
\
\}\
\
\
\
}