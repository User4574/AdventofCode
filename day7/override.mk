${DAY}.c: ${DAY}gen
	./$< < ${INPUT} > logic 2> prototypes 3> preamble
	cat preamble prototypes logic > $@

${DAY}gen: ${DAY}gen.c
	gcc ${CFLAGS} -o $@ $< ${DAYFLAGS}

genclean:
	rm -f ${DAY}gen ${DAY}.c logic prototypes preamble

.PHONY: genclean
