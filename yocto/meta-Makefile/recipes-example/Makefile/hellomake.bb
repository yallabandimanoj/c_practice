SUMMARY = "Simple Hello World C program using Makefile"
LICENSE = "CLOSED"

SRC_URI = "file://hello.c \
           file://Makefile"

S = "${WORKDIR}"

do_compile() {
    oe_runmake
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 hellomake ${D}${bindir}
}

