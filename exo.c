//Bokenova Marzhan
//3En04E
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char*argv[]){
int checkin = 0;

for (int i = 1; i < argc; i++){
if(i==1 && !strcmp(argv[1],"-n")){
checkin = 1;
}else{
printf("%s ",argv[i]);
}

}
if(checkin == 0){
printf("\n");
}

return 0;
}
