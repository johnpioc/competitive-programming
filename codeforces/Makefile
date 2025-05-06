# ──────────────────────────────────────────────────────────────────────────
# Makefile (at your project root, next to contests/ cp-31/ gym/ problem-set/)
# ──────────────────────────────────────────────────────────────────────────

CXX      := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra -g
SRC_DIRS := contests cp-31 gym problem-set
BINDIR   := build

# find every .cpp recursively under your four folders
SRCS     := $(shell find $(SRC_DIRS) -type f -name '*.cpp')
# map a/b.cpp → build/a/b
PROGS    := $(SRCS:%.cpp=$(BINDIR)/%)

.PHONY: all clean

all: $(PROGS)

# compile each .cpp → build/…/same_path_minus_cpp
$(BINDIR)/%: %.cpp
	@echo "↪ Compiling $< → $@"
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	@echo "↪ Removing all binaries"
	@rm -rf $(BINDIR)

