DAY=$(notdir ${PWD})
CFLAGS=
DAYFLAGS=
INPUT=${DAY}.input

all: run

-include override.mk

${DAY}.bin: ${DAY}.c
	gcc ${CFLAGS} -o $@ $< ${DAYFLAGS}

run: ${DAY}.bin ${INPUT}
	./${DAY}.bin < ${INPUT}

clean:
	rm -f ${DAY}.bin

.PHONY: run clean
