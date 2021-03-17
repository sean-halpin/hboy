IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR) `pkg-config --cflags glib-2.0`

ODIR=obj
LDIR =../lib

LIBS=`pkg-config --libs glib-2.0`

_DEPS = halboy.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = halboy.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

halboy: $(OBJ)
	$(CC) -g -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 