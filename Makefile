CC = gcc
CFLAGS = -g -no-pie -fno-stack-protector -z execstack
IF_32 = -m32

SRC_DIR=src
BIN_DIR=bin

SOURCES := $(wildcard $(SRC_DIR)/*.c)
OBJECTS := $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%, $(SOURCES))

all: 
	@echo 'Usage:'
	@echo '   make 32 # For 32 bits binaries'
	@echo '   make 64 # For 64 bits binaries'
	@echo '   make clean # Remove all compiled bins'

64: dossier $(OBJECTS)

32: is_32 dossier $(OBJECTS)

is_32: 
	$(eval CFLAGS := $(CFLAGS) $(IF_32))

$(BIN_DIR)/%: $(SRC_DIR)/%.c
	$(CC) -o $@ $^ $(CFLAGS) 

dossier:
	mkdir -p $(BIN_DIR)


clean:
	rm $(BIN_DIR)/*