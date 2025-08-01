all:
	@g++ main.cpp -o cswiki

install: all
	@sudo cp cswiki /usr/bin/

uninstall:
	@sudo rm /usr/bin/cswiki

clean:
	@rm cswiki
