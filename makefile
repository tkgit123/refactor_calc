UNITY_LIB = ../../my_libs/unity/src/unity.c
CALC_SRC = src/calc.c
CALC_INPUT_FUNC = src/calc_input.c
CALC_MATH_FUNC = src/calc_function.c

TEST_SRC = test/test.c

Q = @

calculator : $(CALC_SRC)
	@echo Building program...
	$(Q) gcc $(CALC_SRC) -o calculator

test : $(CALC_INPUT_FUNC)
	@echo Building tests...
	$(Q) gcc $(CALC_INPUT_FUNC) -o test

clean:
	$(Q) rm -f *.o *.exe
	@echo Files removed...
