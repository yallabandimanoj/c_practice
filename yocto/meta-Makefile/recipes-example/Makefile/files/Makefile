CC ?= ${CC}
CFLAGS ?= "${CFLAGS}"
LDFLAGS ?= "${LDFLAGS}"
hellomake:
	$(CC) $(CFLAGS) hello.c -o hellomake $(LDFLAGS)

install:
	mkdir -p $(DESTDIR)/usr/bin
	cp hellomake $(DESRDIR)/usr/bin/

clean:
	rm -f hellomake


