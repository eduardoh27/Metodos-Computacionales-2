import numpy as np

def pos_ini(x):
    sig = 0.1
    return 1.0/np.sqrt(sig)*np.exp(-((x-0.3)**2)/sig**2)

def vel_ini(x):
    return np.zeros(len(x))

def solucion_ecuacion_onda_1D(dx, t_max, L, c, l0, lL) # dos perfiles
    dt = dx / (1.5 * c) # esto es para satisfacer la condicion de convergencia (ver cuaderno antes de parte computacional)
    r = (c*dt / dx)**2 # cte definida en el notebook
    a = 2 * (1 - r) # cte en notebook
    x = np.linspace(0, L, int(L/dx))
    t = np.linspace(0, t_max, int(t_max/dt))
    v0 = vel_ini(x)

    # ahora se debe crear la matriz de evolucion U
    # va a indicar como evoluciona para cada posicion para cada tiempo
    U = np.zeros((len(t), len(x)))
    # en la filas tiene lne (x)
    # en las columnas tiene len (t)
    # la primera fila es t=0
    # en la segunda fila es \Deltat
    # en la tercera fila es 2\Deltat
    
    # ahora se le pasan las condiciones iniciales
    U[0, :] = pos_init(x)
    # la primera fila es la posicion inicial
    
    #ahora las dos fronteras de tiempos:
    U[:, 0] = l0
    # la primera columna es l0
    U[:, -1] = lL
    # la ultima columna es lL

    # ahora se define la primera ecuacion
    # se evoluciona respecto al tiempo_1
    for i in range(1, len(t)-1):
        U[1, i] = 0.5 * a * U[0, 1] + 0.5*r*()
        # esta ecuacion nos dice cual es el perfil de la onda de acuerdo a la posicion de la onda en el t=0

    # recorrer todos los tiempos
    for n in range(1, len (t)-1):
        # recorrer todas las posiciones
        for i in range(1, len (x)-1):
            U[i, n] = a*U[i, n] - U[i, n-1] + r*(U[i+1, n] + U[i-1, n])

    return x, u
        

    # de condiciones iniciales:
    # primero se llenó la primera fila de U
    # luego se llena la primera columna
    # luego de la ultima columna

    # en el primer for:
    # luego se crea la evolucion temporal de la fila dos U_i^1 <- U^0
    # con los dos fors:
    # asi sucesivmanet se van llenando las otras filas U_i^n+1 <- U^n-1 y U^n