#include <stdio.h>
#include <stdlib.h>

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);
void call_func(char *);

struct command {
	char *cmd_name;
	void (*cmd_pointer)(void);
} file_cmd[] = {
    {"new", new_cmd},		{"open", open_cmd},
    {"close", close_cmd},	{"close all", close_all_cmd},
    {"save", save_cmd},		{"save as", save_as_cmd},
    {"save all", save_all_cmd}, {"print", print_cmd},
    {"exit", exit_cmd},
};

int main(void)
{
	call_func("new");
	call_func("open");
	call_func("close");
	call_func("close all");
	call_func("save");
	call_func("save as");
	call_func("save all");
	call_func("print");
	call_func("exit");
	call_func("not a command");
	return 0;
}

void call_func(char *str)
{
	struct command *cmd_ptr = malloc(sizeof(struct command));
	if (cmd_ptr == NULL) {
		fprintf(stderr,
			"not enough memory to account for command struct\n");
		exit(EXIT_FAILURE);
	}

	cmd_ptr = file_cmd;
	int size_of_file_cmd = sizeof(file_cmd) / sizeof(file_cmd[0]);

	for (; cmd_ptr < file_cmd + size_of_file_cmd; cmd_ptr++) {
		if (str == cmd_ptr->cmd_name) {
			cmd_ptr->cmd_pointer();
			return;
		}
	}
	printf("No Command by name '%s' found\n", str);
}

void new_cmd(void) { printf("new_cmd called!!\n"); }
void open_cmd(void) { printf("open_cmd called!!\n"); }
void close_cmd(void) { printf("close_cmd called!!\n"); }
void close_all_cmd(void) { printf("close_all_cmd called!!\n"); }
void save_cmd(void) { printf("save_cmd called!!\n"); }
void save_as_cmd(void) { printf("save_as_cmd called!!\n"); }
void save_all_cmd(void) { printf("save_all_cmd called!!\n"); }
void print_cmd(void) { printf("print_cmd called!!\n"); }
void exit_cmd(void) { printf("exit_cmd called!!\n"); }
