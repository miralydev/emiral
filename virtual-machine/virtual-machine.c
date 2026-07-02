#include "virtual-machine/virtual-machine.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint8_t *byte_code = NULL;

static int fetch(void)
{
	/* Fetch next cmd */
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
	while (fetch()) {
		decode();
		execute();
	}
}
