OUTDIR = executables
f = 1-1
APP = ${OUTDIR}/${f}

.DEFAULT_GOAL = all

.PHONY: help
help:
	@echo 'Usage: make [exercise number]'
	@echo 'Example: make 1-3'

.PHONY: clean
clean:
	find . -type f -depth 1 | grep [0-9]-[0-9]$$ | xargs rm

.PHONY: compile
compile:
	find executables/${f} -type f | xargs rm
	gcc -o ${APP} ${f}.c

.PHONY: run
run: $(APP)
	$(APP)

.PHONY: all
all: compile run
