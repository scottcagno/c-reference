IDIR =./include
CC=gcc
CFLAGS=-I$(IDIR)
NAME=hello

ODIR=./obj
LDIR =./lib
BDIR=./bin

LIBS=-lm

_DEPS = hellomake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = hellomake.o hellofunc.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#$(ODIR)/%.o: %.c $(DEPS)
$(OBJ): $(ODIR)/%.o: src $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ $(BDIR)/$(NAME)