CFLAGS += `pkg-config --cflags glib-2.0`
CFLAGS += `pkg-config --libs glib-2.0`
# TODO: improve 
# 		https://stackoverflow.com/questions/17400437/getting-a-list-of-all-dependencies-in-make

MAIN_BINARY := gibmain

MAIN_SOURCE_FILES := \
	gibmain.c \
	console.c
MAIN_HEADER_FILES := \
	console.h

.PHONY: $(MAIN_SOURCE_FILES)
$(MAIN_SOURCE_FILES): $(MAIN_HEADER_FILES)
	gcc $(MAIN_SOURCE_FILES) $(CFLAGS) -o $(MAIN_BINARY)

$(MAIN_BINARY): $(MAIN_SOURCE_FILES) 
	

.PHONY: all
all: $(MAIN_BINARY)

.PHONY: clean
clean:
	rm -f $(MAIN_BINARY)

