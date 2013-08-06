


CC = g++
FIND = find

BIN := ooEmployee

HEADERS := $(wildcard *.h)
SOURCES := $(wildcard *.cc)

LDLIBS :=

CPPFLAGS += -g

DEPENDFILE = fs_depend

#CPPFLAGS += -Wall

# ======================================

all: $(BIN)


# ======================================

depend: $(DEPENDFILE)


# generates dependencies
$(DEPENDFILE): $(SOURCES) $(HEADERS)
	$(CC) -M $(CPPFLAGS) $^ > $@

include $(DEPENDFILE)


# ======================================

all: $(BIN)

ooEmployee: ooEmployee.o structures.o


# ======================================

depend: $(DEPENDFILE)


# generates dependencies
$(DEPENDFILE): $(SOURCES)
	$(CC) -M $(CPPFLAGS) $^ > $@

include $(DEPENDFILE)

# ======================================

clean: cleanbin cleandepend cleanobjects cleanbak

cleanbin:
	$(RM) $(BIN)

cleandepend:
	$(RM) $(DEPENDFILE)

cleanobjects:
	$(FIND) -iname "*.o" -delete

cleanbak:
	$(RM) *~
	$(RM) *.bak
