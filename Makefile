br: compilar ejecutar

compilar: src/main.cpp
g++ src/main.cpp -o din/mascotas -I include

ejecutar: bin/mascotas
./bin/mascotas

clean: bin/mascotas
rm bin/mascotas  //se borra el archivo de mascotas