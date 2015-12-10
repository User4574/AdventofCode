DAY=$(notdir ${PWD})
CFLAGS=
DAYFLAGS=
INPUT=${DAY}.input

all: run

-include override.mk

${DAY}: ${DAY}.c
	gcc ${CFLAGS} -o $@ $< ${DAYFLAGS}

run: ${DAY} ${INPUT}
	./${DAY} < ${INPUT}

clean:
	rm -f ${DAY}

.PHONY: run clean
