#include<stdio.h>
#include "helpers/vector.h"
#include "compiler.h"

int main(){
    
    int res = compile_file("./test.c","./test",0);
    if(res == COMPILER_FILE_COMPILED_OK){
        printf("EVerything compiled fine!!\n");
    }else{
        printf("Compiler found some errors\n");
    }

    return 0;
}