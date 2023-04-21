def combinaciones_recursivas(letras, longitud, palabra_actual, combinaciones):
    if longitud == 0:
        combinaciones.append(palabra_actual)
        return
    
    for letra in letras:
        nueva_palabra = palabra_actual + letra
        combinaciones_recursivas(letras, longitud - 1, nueva_palabra, combinaciones)

def generar_combinaciones(letras, longitud):
    combinaciones = []
    combinaciones_recursivas(letras, longitud, '', combinaciones)
    return combinaciones

# Crear una lista con todas las letras en inglés en minúscula
letras = 'abcdefghijklmnopqrstuvwxyz'

# Establecer la longitud deseada de las combinaciones
longitud = 3

# Generar todas las combinaciones posibles de palabras con la longitud dada
combinaciones = generar_combinaciones(letras, longitud)

# Imprimir la lista de combinaciones
print(combinaciones)



""" 
# Crear una lista con todas las letras en inglés en minúscula
letras = 'abcdefghijklmnopqrstuvwxyz'

# Crear una lista vacía para almacenar las combinaciones
combinaciones = []

# Utilizar tres bucles anidados para generar todas las combinaciones
for letra1 in letras:
    for letra2 in letras:
        for letra3 in letras:
            # Crear una combinación y añadirla a la lista de combinaciones
            combinacion = letra1 + letra2 + letra3
            combinaciones.append(combinacion)

# Imprimir la lista de combinaciones
print(combinaciones)
"""