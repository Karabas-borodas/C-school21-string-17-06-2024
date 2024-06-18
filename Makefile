GCC = gcc -std=c11 -Wall -Wextra -Werror 
#TARGET = ../cat/

# Имена исполняемых файлов
EXECUTABLES = string

# Правило для сборки всех исполняемых файлов
all: $(EXECUTABLES)  clean 

# Цели, которые не влияют на выполнение make при обычном вызове make
.PHONY: rebuild

string: string.o
	$(GCC) $^ -o $(TARGET)string

# Правила для компиляции объектных файлов
string.o: string.c
	$(GCC) -c $^ -o $@

#запуск автотестов
#test:
#	chmod +x test_cat.sh
#	sh test_cat.sh

#проверка файла по clang
#check:
#	cp materials/linters/.clang-format .
#	clang-format -n string.c
#	clang-format -n string.h
	
# Правило для очистки
clean: 
	rm -rf *.o 

# Правило для пересборки
rebuild:
	make clean
	make all
	rm -rf  *.o *.a