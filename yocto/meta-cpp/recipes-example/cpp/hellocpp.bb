SUMMARY = "Simple Hello World program written in C++"
LICENSE = "CLOSED"


SRC_URI = "file://hello.cpp"

S = "${WORKDIR}"

do_compile() {
    ${CXX} ${CXXFLAGS} ${LDFLAGS} hello.cpp -o hellocpp
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 hellocpp ${D}${bindir}
}

