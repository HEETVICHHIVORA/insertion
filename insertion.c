#include<stdio.h>

void main()

{int size;

printf("Enter the size of array:");

scanf("%d",&size);

int a[size];

for(int i=0;i<size;i++)

{

printf("Enter %d element of the array:",i+1);

scanf("%d",&a[i]);

}

for(int i=1;i<size;i++)

{

int key=a[i];

int j=i-1;

while(j>=0 && a[j]>key){

a[j+1]=a[j];

j=j-1;

}

a[j+1]=key;

}

for(int i=0;i<size;i++){

printf("%d\t",a[i]);

}

}