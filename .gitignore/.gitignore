#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "main.h"
#include "io.h"



/*ejecuciones

./simpletron.o -h
./simpletron.o -m N
./simpletron.o -i archivo
./simpletron.o -if bin
./simpletron.o -of txt
./simpletron.o -o archivo
./simpletron.o -of bin
./simpletron.o -of txt

ej: ./simpletron.o -i archivo -o archivo -m N como maximo 6 argumentos, puede tener 1 arg(-h) o 2 (*/
	
status_t validate_args(int argc,char *argv[])
{	
	if(argc==AMOUNT_OF_ARGS_HELP+1){
		if(strcmp(argv[POS_HELP],HELP_ARG)){
			return ERR_ARGS;
		}

		return OK;
	}

	if(argc==AMOUNT_OF_ARGS+1){
		if(strcmp(argv[POS_INPUT_FILE_ARG],INPUT_FILE_ARG)){
			return ERR_ARGS;
		}
			if(strcmp(argv[POS_INPUT_FILE_ARG],FINPUT_FILE_ARG)){
			return ERR_ARGS;
		}
		if(strcmp(argv[POS_OUTPUT_FILE_ARG],OUTPUT_FILE_ARG)){
			return ERR_ARGS;
		}
		if(strcmp(argv[POS_OUTPUT_FILE_ARG],FOUTPUT_FILE_ARG)){
			return ERR_ARGS;
		}
		return OK;
	}

	if(argc==AMOUNT_OF_ARGS_MEM_SIZE+1){
		if(strcmp(argv[POS_INPUT_FILE_ARG],INPUT_FILE_ARG)){
			return ERR_ARGS;
		}
			if(strcmp(argv[POS_INPUT_FILE_ARG],FINPUT_FILE_ARG)){
			return ERR_ARGS;
		}
		if(strcmp(argv[POS_OUTPUT_FILE_ARG],OUTPUT_FILE_ARG)){
			return ERR_ARGS;
		}
		if(strcmp(argv[POS_OUTPUT_FILE_ARG],FOUTPUT_FILE_ARG)){
			return ERR_ARGS;
		}
		if(strcmp(argv[POS_SIZE_ARG],SIZE_ARG)){
			return ERR_ARGS;
		}
		return OK;
	}

    return ERR_AMOUNT_OF_ARGS;
}

status_t config_simpletron(config_t * config, char *argv[], int argc){

	char * temp;	

	if(argc==AMOUNT_OF_ARGS_HELP+1){
		config->help=TRUE;
		return OK;
	}

	if(argc==AMOUNT_OF_ARGS+1){
	
		/*ver luego de que den archivos*/

		return OK;
	}

	if(argc==AMOUNT_OF_ARGS_MEM_SIZE+1){
		
		/*ver luego de que den archivos*/
		config->mem_size=strtol(argv[SIZE], &temp, 10);
		if(temp != '\0'){return ERR_SIZE;}

		return OK;
	}

	else return ERR_ARGS;
}

status_t load_memory(config_t config, simpletron_t * simpletron){

	if(simpletron==NULL)return ERR_NULL_PTR;
	
	if((simpletron->operation_memory=(char **)malloc( (config.mem_size)*sizeof(char *) ))==NULL) return ERR_OUT_OF_MEMORY;/*pido memoria
	hay que hacer un destructor*/
	
	return OK;
	

}

void print_error(status_t st, string error_msg[AMOUNT_OF_ERR]){

	puts(error_msg[(int)st]);
}
void print_manual(void){

	puts("aca deberia ir el manual del programa");
}
	
int main(int argc,char *argv[]){

	    
	status_t st;
	simpletron_t simpletron;
	config_t config;

	string error_msg[]={
        ERR_MSG_NULL_PTR,
        ERR_MSG_ARGS,
        ERR_MSG_AMOUNT_OF_ARGS,
        ERR_MSG_SIZE,
        ERR_MSG_OUT_OF_MEMORY
	};

	if((st=validate_args(argc,argv))!=OK){ /*Valido argumentos*/
        print_error(st, error_msg);
        return EXIT_FAILURE;
	}

	if((st=config_simpletron(&config, argv, argc)) != OK){
	print_error(st, error_msg);
	return EXIT_FAILURE;
	}

	if(config.help==TRUE){
	print_manual();
	return EXIT_SUCCESS;
	}

	if((st=load_memory(config, &simpletron)) != OK){
	print_error(st, error_msg);
	return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
	
		
