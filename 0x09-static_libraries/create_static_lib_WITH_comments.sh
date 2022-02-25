#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
#Se crea un script de bash para crear una libreria llamada "liball.a" con los programas
#de c que se le pasen.
#En la primer linea de codigo se compila el codigo para crear los object files (archivos
#donde esta el codigo en binario, estos terminan con la extension: .o), se le pone el *
#(es una wildecare) .c para que compile todos los archivos .c que tengamos, osea todas
#las funciones que hayamos hecho en sus distintos archivos .c
#En la segunda fila se usan los comandos ar y -rc para crear la libreria "liball.a" tomando
#todos los archivos .o , serian los object files que creamos con el paso anterior.
#ar to create an archive (option c) and to insert the objects, replacing older files where needed (option r) .
