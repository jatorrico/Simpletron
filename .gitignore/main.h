#define AMOUNT_OF_ARGS_HELP 1
#define AMOUNT_OF_ARGS 	4
#define AMOUNT_OF_ARGS_MEM_SIZE 6
#define POS_HELP 1
#define HELP_ARG "-h"
#define POS_SIZE_ARG 5
#define SIZE_ARG "-m"
#define SIZE 6
#define POS_INPUT_FILE_ARG 1
#define INPUT_FILE_ARG "-i"
#define FINPUT_FILE_ARG "-if"
#define INPUT_FILE 2
#define POS_OUTPUT_FILE_ARG 3
#define OUTPUT_FILE_ARG "-o"
#define FOUTPUT_FILE_ARG "-of"
#define OUTPUT_FILE 4

#define DEFAULT_MEM_SIZE 50
#define AMOUNT_OF_ERR 5

/*prototipos*/

status_t validate_args(int ,char * []);

status_t config_simpletron(config_t *, char * [], int);

status_t load_memory(config_t , simpletron_t * );

void print_error(status_t, string[AMOUNT_OF_ERR]);

void print_manual(void);
