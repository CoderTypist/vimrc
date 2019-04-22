#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Written by Christian Bargraser Spring 2019
int main(int argc, char *argv[]){
    
    printf("\nCreated by Christian Bargraser UTSA Spring 2019\n");

    if(2 != argc){
        printf("\nERROR: 2 arguments are required, received %d\n", argc);

	      printf("\nFor usage info:");
        printf("\n./tab help\n\n");

	    exit(1);
    }

    FILE *pInput = NULL;
    pInput = fopen(".vimrc","w");

    if(NULL == pInput){
        printf("\nERROR: .vimrc file was not found\n");
        printf("\nMake sure that you are in the home directory\n");
    }

    else if(0 == strcmp(argv[1], "help")){
        printf("\nFor a tab that is four spaces:");
        printf("\n./tab spaces");
        printf("\n\nFor an actual tab:");
        printf("\n./tab tab\n\n");
    }

    else if(0 == strcmp(argv[1], "tab")){
        fprintf(pInput, ":set ai sw=4\n");
        fprintf(pInput, ":set number\n");
        printf("\ntab set to an actual tab\n\n");
    }

    else if(0 == strcmp(argv[1], "spaces")){
        fprintf(pInput, ":set ai sw=4\n");
        fprintf(pInput, ":set number\n");
        fprintf(pInput, ":set expandtab\n");
        fprintf(pInput, ":set tabstop=4\n");
        fprintf(pInput, ":set shiftwidth=4");
        printf("\ntab set to four spaces\n\n");
    }

    else{
        printf("\nInvalid input\n");
	printf("\nFor a tab that is four spaces:");
	printf("\n./tab spaces");
        printf("\n\nFor an actual tab:");
        printf("\n./tab tab\n\n");
    }

    fclose(pInput);
}
