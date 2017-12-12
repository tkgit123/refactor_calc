

Q = @

calculator : calc.c
	@echo Building program...
	$(Q) gcc calc.c -o calculator

clean:
	$(Q) rm -f *.o *.exe
	@echo Files removed...
