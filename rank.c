//Bokenova Marzhan
//3En04E
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define _GNU_SOURCE
#include <stdio.h>
#define BUF 128
#define TOT 10

int compare(char* k, char* l)

{

int i = 0;
while ( k[i] != '\0' )
{
if( l[i] == '\0' ) { return 1; }
else if( k[i] < l[i] ) { return -1; }
else if( k[i] > l[i] ) { return 1; }
i++;
}
if(l[i]=='\0')
return 0;
else
return -1;
}
int main(int argc, char*argv[]){
FILE *std;
char * tuz = NULL;
size_t len = 0;
ssize_t read;
char words[TOT][BUF];
int i = 0;
int s = 0;
std = stdin;
while(fgets(words[i], BUF, std)) {
words[i][strlen(words[i]) - 1] = '\0';
i++;
}
s = i;
char *aaa[s];
for(i = 0; i < s; i++){
printf("%s\n", words[i]);
aaa[i] = words[i];
}
printf("\n");
for (int i = 0; i < s; i++){
for (int j = i+1; j < t; j++){
if (compare(aaa[i],aaa[j]) == 1){
char *temp = aaa[i];
aaa[i] = aaa[j];
aaa[j] = temp;
}
}
}
if(argc > 1 && !strcmp(argv[1],"--reverse")){
for(i = s-1; i >= 0; i--)
printf("%s\n", aaa[i]);
}else{
for(i = 0; i < s; i++)
printf("%s\n", aaa[i]);
}

return 0;
}
