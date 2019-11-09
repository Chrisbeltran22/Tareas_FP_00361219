'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''

import os
def menu():

    os.system('clear') # NOTA para windows tienes que cambiar clear por cls
    print("BIENVENIDO A GUANACOCINE503")
    print("Selecciona una de nuestras clasificaciones de peliulas")
    print("\t1 - Clasificacion A")
    print("\t2 - Clasificacion B")
    print("\t3 - Clasificacion C")
    print("\t4 - Clasificacion D")
    print("\t5 - Clasificacion E")
    print("\t0 - salir")
    
def pelicula():
    """ para presentar peliculas """
    print("Las peliculas de hoy son:" )
    comida()
    
def comida():
    """ funcion para comidas"""
    print("¿Desea comida para disfrutar de su funcion?" )
    
def plato():
    print("Excelente eleccion")
    
def adolecente():
    print("1- Logan\n2- Endgame")

def mayores():
    print("1- El Bromas\n2- Deadpool 2")

def adulto():
    print("1- La Purga\n2- Halloween")

def opcionMenu():
    print("Tenemos gran variedad de comida")

def opcionPelicula():
    print("Gran eleccion")
    
while True:
    # Mostramos el menu
    menu()
    # solicituamos una opción al usuario
    opcionMenu = input("Seleccione una de nuestra clasificaciones >> ")
    
    if opcionMenu=="1":
        print("")
        print("Has pulsado Clasificacion A...\nLas peliculas disponibles para el dia de hoy son:")
        print("1- Frozen 2\n2- El Rey Leon")
        opcionPelicula= int(input("Seleccione una pelicula a ver: "))
        if opcionPelicula==1:
            print("Esperemos disfrute de Frozen")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
                
        elif opcionPelicula==2:
            print("Esperemos disfrute de El Rey Leon")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
        
    elif opcionMenu=="2":
        print("")
        print("Has pulsado Clasificacion B...\nLas peliculas disponibles para el dia de hoy son:")
        print("1- Titanic\n2- The Bucket List")
        opcionPelicula= int(input("Seleccione una pelicula a ver: "))
        if opcionPelicula==1:
            print("Esperemos disfrute de Titanic")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
                
        elif opcionPelicula==2:
            print("Esperemos disfrute de The Bucket List")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
        
    elif opcionMenu=="3":
        print("")
        print("Has pulsado Clasificacion C...\nLas peliculas disponibles para el dia de hoy son:")
        print("1- Marley y Yo\n2- Jurasic world 2")
        opcionPelicula= int(input("Seleccione una pelicula a ver: "))
        if opcionPelicula==1:
            print("Esperemos disfrute de Marley y Yo")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
                
        elif opcionMenu==2:
            print("Esperemos disfrute de Jurasic world")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
        
    elif opcionMenu=="4":
        print("")
        print("Has pulsado Clasificacion D...\nLas peliculas disponibles para el dia de hoy son:")
        print("1- Deadpool 2\n2- El Guason")
        opcionPelicula= int(input("Seleccione una pelicula a ver: "))
        if opcionPelicula==1:
            print("Esperemos disfrute de Deadpool 2")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
                
        elif opcionMenu==2:
            print("Esperemos disfrute de El Guason")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
        adolecente()
        
    elif opcionMenu=="5":
        print("")
        print("Has pulsado Clasificacion E...\nLas peliculas disponibles para el dia de hoy son:")
        print("1- La noche del demonio\n2- the Hangover")
        opcionPelicula= int(input("Seleccione una pelicula a ver: "))
        if opcionPelicula==1:
            print("Esperemos disfrute de La noche del demonio")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
            
        elif opcionMenu==2:
            print("Esperemos disfrute de The Hangover")
            comida= input("¿Desea un combo para acompañar su pelicula?\nSI\nNO\n")
            if comida=="SI":
                print("Seleccione un producto de nuestro menu")
                plato= int(input("1- Pizza\n2- Palomitas (saladas o acarameladas)"))
                if plato==1:
                    print("Excelente eleccion, disfrute de su pelicula")
                elif plato==2:
                    print("Excelente eleccion, disfrute de su pelicula")
            else:
                print("Disfrute de su pelicula")
        
        mayores()
    elif opcionMenu=="0":
        break
    else:
        print("")
        input("No has pulsado ninguna opción correcta...\npulsa una tecla para continuar")
print("Esperamos que regrese pronto")

