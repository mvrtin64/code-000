#!/bin/bash

## Compilo código objeto
g++ -Wall -std=c++11 -c ../src/Article.cpp -o Article.o -I../include

g++ -Wall -std=c++11 -c ArticleUnitTest.cpp -o ArticleUnitTest.o \
-I../include -I../include/vendors/catch

## Compilo el Binario
g++ -Wall -std=c++11 Article.o ArticleUnitTest.o -o ArticleUnitTest.bin

## Permisos de Ejecución para el binario
chmod +x ./ArticleUnitTest.bin

## Limpio los códigos objeto
rm ./*.o

## Ejecuto el binario:
./ArticleUnitTest.bin   