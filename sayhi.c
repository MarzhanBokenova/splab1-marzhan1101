//Bokenova Marzhan
//3En04E
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <getopt.h>
#include <string.h>

int main(int argc, char*argv[]){
  int arg;
  char* name = "";
  int isRussian = 0;
  int isEnglish = 0;
  int isKazakh = 0;


  if(argc == 1){
    if(strcmp(argv[0],"./sayhi") == 0){
      printf("hi\n");
    }
    else if(strcmp(argv[0],"./sayprivet") == 0){
      printf("privet\n");
    }
    else if(strcmp(argv[0],"./saysalem") == 0){
      printf("salem\n");
    }
  }
  else{
    static struct option long_options[] =
    {
      {"russian", no_argument, 0, 'r'},
      {"kazakh", no_argument, 0, 'k'},
      {"english", no_argument, 0, 'e'},
      {"name", required_argument, 0, 'j'}
    };
    int option_index = 0;

    arg = getopt_long(argc, argv, "mm", long_options, &option_index);
    switch(arg){
      case 'j':
        name = optarg;
        printf("%s", name);
        break;
      case 'r':
        isRussian = 1;
        break;
      case 'e':
        isEnglish = 1;
        break;
      case 'k':
        isKazakh = 1;
        break;
    }
    if(isKazakh == 1){
      printf("salem %s\n", name);
    }
    if(isEnglish == 1){
      printf("hi %s\n", name);
    }
    if(isRussian == 1){
      printf("privet %s\n", name);
    }
  }
  return 0;
}
