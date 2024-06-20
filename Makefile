GCC = gcc -std=c11 -Wall -Wextra -Werror 
#TARGET = ../cat/

# Имена исполняемых файлов
EXECUTABLES = string

# Правило для сборки всех исполняемых файлов
all: $(EXECUTABLES)  clean 

# Цели, которые не влияют на выполнение make при обычном вызове make
.PHONY: rebuild

string: s21_strlen.o s21_strerror.o s21_strcspn.o
	$(GCC) $^ -o $(TARGET)string

# Правила для компиляции объектных файлов
s21_strlen.o: s21_strlen.c

s21_strerror.o: s21_strerror.c 
	$(GCC) -c $^ -o $@

s21_strcspn.o: s21_strcspn.c
	$(GCC) -c $^ -o $@

#запуск автотестов
test:
	chmod +x test_string.sh
	sh test_cat.sh

#проверка файла по clang
#check:
#	cp materials/linters/.clang-format .
#	clang-format -n string.c
#	clang-format -n lib_string.h
	
# Правило для очистки
clean: 
	rm -rf *.o 

# Правило для пересборки
rebuild:
	make clean
	make all
	rm -rf  *.o *.a