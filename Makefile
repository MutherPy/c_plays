folder := pointers

compile: $(folder)/main.c
	cc $(folder)/main.c -o $(folder)/main && ./$(folder)/main