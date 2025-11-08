# Makefile for C Learning Repository
# Compiles all C programs in the repository

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
BUILDDIR = build

# Find all C files
SOURCES = $(shell find . -name "*.c")
PROGRAMS = $(patsubst %.c,$(BUILDDIR)/%,$(SOURCES))

.PHONY: all clean directories help test

# Default target
all: directories $(PROGRAMS)

# Create build directory structure
directories:
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(BUILDDIR)/01_basics
	@mkdir -p $(BUILDDIR)/02_data_types
	@mkdir -p $(BUILDDIR)/03_operators
	@mkdir -p $(BUILDDIR)/04_control_flow
	@mkdir -p $(BUILDDIR)/05_functions
	@mkdir -p $(BUILDDIR)/06_arrays
	@mkdir -p $(BUILDDIR)/07_pointers
	@mkdir -p $(BUILDDIR)/08_strings
	@mkdir -p $(BUILDDIR)/09_structures
	@mkdir -p $(BUILDDIR)/10_file_io

# Compile each C file
$(BUILDDIR)/%.c: %.c
	$(CC) $(CFLAGS) $< -o $(patsubst %.c,%,$@)

$(BUILDDIR)/%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean build directory
clean:
	rm -rf $(BUILDDIR)
	rm -f *.txt *.dat
	@echo "Cleaned build directory and output files"

# Run a specific program
run-%: $(BUILDDIR)/%
	@echo "Running $<..."
	@$<

# Help target
help:
	@echo "C Learning Repository Makefile"
	@echo "=============================="
	@echo "Available targets:"
	@echo "  make all         - Compile all programs"
	@echo "  make clean       - Remove compiled programs"
	@echo "  make test        - Compile and test basic programs"
	@echo "  make help        - Show this help message"
	@echo ""
	@echo "To run a specific program:"
	@echo "  make run-<path>  - Example: make run-build/01_basics/hello_world"

# Test target - compile and run basic programs
test: all
	@echo "Testing basic programs..."
	@echo ""
	@echo "=== Hello World ==="
	@$(BUILDDIR)/01_basics/hello_world
	@echo ""
	@echo "=== Comments ==="
	@$(BUILDDIR)/01_basics/comments
	@echo ""
	@echo "=== Basic Structure ==="
	@$(BUILDDIR)/01_basics/basic_structure
	@echo ""
	@echo "All basic tests completed successfully!"
