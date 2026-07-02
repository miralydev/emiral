#include "virtual-machine/virtual-machine.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static uint8_t *bin_code = NULL;

static uint32_t PC = 0;
static uint32_t *IR = NULL;

static int recv_code(const int argc, const char **argv)
{
	/* TODO: Read code from files */

	(void)argv;

	if (argc < 2) {
		fprintf(stderr, "No input files\n");
		return -1;
	}

	return 0;
}

static uint32_t *getcmd(void)
{
	/* Get cmd from bin_code by PC */
	return NULL;
}

static int fetch(void)
{
	IR = getcmd();
	++PC;
}

static int decode(void)
{
	/* Decode cmd */
}

static int execute(void)
{
	/* Execute cmd */
}

int vm_run(const int argc, const char **argv)
{
	if (recv_code(argc, argv) < 0)
		return -1;

	while (fetch()) {
		decode();
		execute();
	}
}
