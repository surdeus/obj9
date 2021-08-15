include makeconfig
.PHONY: clean install
TGT = ${NAME}.a
CFLAGS = ${DEFS} ${CPPFLAGS} ${INCS}
all: ${TGT}
${TGT}: ${OFILES}
	${AR} ${ARFLAGS} $@ ${OFILES}
.c.o:
	${CC} -c -o $@ ${CFLAGS} $<
clean:
	rm -f ${OFILES} ${TGT}
install: ${TGT}
	mkdir -p ${MANDIR}/7 ${INCDIR}/${NAME} ${OBJDIR}/${NAME}
	cp -f ${TGT} ${OBJDIR}/
	cp -f ${HFILES} ${INCDIR}/${NAME}
