typedef enum{READ=10, WHRITE=11, LOAD=20, SAVE=21, PLOAD=22, PSAVE=23, ADD=30, SUBTRACT=31, DIVIDE=32, MULTIPLY=33, JMP=40, JMPNEG=41, JMPZERO= 42, JNZ=43, DJNZ=44, HALT=45}opcode_t;

typedef enum{ OK, ERR_NULL_PTR=0, ERR_ARGS=1, ERR_AMOUNT_OF_ARGS=2, ERR_SIZE=3, ERR_OUT_OF_MEMORY=4}status_t;

typedef enum{TRUE=1, FALSE=0}bool_t;

typedef enum{TEXT, BINARY}file_t;

typedef char * string;

typedef struct{

	int accumulator;/*acumulador*/

	int program_counter;

	char * instruction;

	int operand;

	opcode_t * opcode; /*aca se guarda la operacion a realizar*/	
		
	char ** operation_memory;  /*lugar donde almaceno las palabras a ejecutar, vector de punteros a entero*/
	
}simpletron_t;

typedef struct{

	bool_t help;

	int mem_size;

	file_t input_file;

	file_t output_file;

}config_t;
