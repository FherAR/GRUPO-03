# Algorítmica y Fundamentos de Programación
## Documentación de Programas y Pruebas de Escritorio

Este repositorio contiene el desarrollo integral de la guía práctica de diseño algorítmico y control de flujo. Cada solución presenta su respectivo enunciado, el modelado mediante pseudocódigo académico y la verificación analítica a través de matrices de prueba de escritorio.

---

### Información Institucional
* **Institución:** Universidad Nacional Mayor de San Marcos
* **Escuela:** Escuela de Estudios Generales
* **Área:** Ciencias Básicas
* **Periodo Académico:** 2026
* **Docente:** Benito Pacheco, Oscar

### Autores
* Alvarado Romero, Fher Eli
* Huaman Rios, Sebastian
* Samame Pisco, Jesus Vierick

---

### Estado del Proyecto

Se ha completado la totalidad de los módulos algorítmicos planificados. A continuación se presenta la métrica de cobertura:

Progreso General: [████████████████████████████████████████] 100%


| Módulo Evaluado | Estado | Cobertura de Pruebas |
| :--- | :---: | :---: |
| Estructuras Secuenciales y Vectores | Completado | 100% |
| Matrices e Identidades | Completado | 100% |
| Algoritmos de Ordenamiento | Completado | 100% |
| Gestión Dinámica de Memoria y Referencias | Completado | 100% |
| Persistencia y Flujo de Archivos (I/O) | Completado | 100% |

---

### Estructura del Repositorio

El proyecto está organizado de forma modular para facilitar la auditoría del código y la revisión de las pruebas analíticas:

├── core/
│   ├── vectores_matrices/    # Operaciones algebraicas y arreglos
│   ├── ordenamiento/         # Métodos de ordenación (Bubble, Insertion, QuickSort, Merge)
│   └── memoria_dinamica/     # Punteros, referencias y gestión de memoria
├── io/
│   ├── archivos/             # Gestión académica e inventarios mediante archivos TXT
│   └── reportes/             # Filtrado de datos complejos (Tercio superior)
└── docs/
└── pruebas_escritorio/   # Tablas analíticas de control de variables


---

### Índice Interactivo de Programas

Haga clic en cada sección para expandir la documentación técnica detallada de los algoritmos base desarrollados en este bloque.

<details>
<summary><b>Bloque I: Estructuras de Datos Lineales y Matrices</b></summary>
<br>

#### Ejercicio 1: Suma de Elementos en un Vector
* **Enunciado:** Leer un vector de enteros de tamaño $n$ y calcular la suma total de sus elementos.
* **Técnica:** Iteración lineal acotada.

#### Ejercicio 2: Promedio de Calificaciones
* **Enunciado:** Ingresar calificaciones en un vector dinámico y determinar el promedio aritmético exacto (punto flotante).
* **Técnica:** Acumulador de datos de tipo real.

#### Ejercicio 3: Matriz Identidad
* **Enunciado:** Generar una estructura bidimensional de orden $n \times n$ que configure una matriz identidad.
* **Técnica:** Condicional de igualdad de índices de posición ($i = j$).

#### Ejercicio 4: Extremos en Arreglos (Máximos y Mínimos)
* **Enunciado:** Desarrollar un algoritmo iterativo que localice de forma simultánea el valor máximo y mínimo dentro de un vector dado.

</details>

<details>
<summary><b>Bloque II: Modularidad y Algoritmos de Ordenamiento</b></summary>
<br>

#### Ejercicio 5: Función Factorial
* **Enunciado:** Implementar una función puramente matemática para calcular el factorial de un número entero no negativo.

#### Ejercicio 6: Ordenamiento Burbuja (Bubble Sort)
* **Enunciado:** Aplicar el método de ordenamiento por intercambio de burbuja sobre un arreglo de caracteres (cadenas).

#### Ejercicio 7: Ordenamiento por Inserción (Insertion Sort)
* **Enunciado:** Diseñar e implementar el algoritmo de ordenamiento por inserción directa sobre vectores numéricos.

#### Ejercicio 16: Ordenamiento Rápido (QuickSort)
* **Enunciado:** Solución avanzada utilizando funciones recursivas y la estrategia de división por pivote.

#### Ejercicio 19: Análisis Comparativo (Merge Sort vs. Bubble Sort)
* **Enunciado:** Implementar el método de ordenamiento por mezcla (Merge Sort) y contrastar analíticamente su eficiencia frente a las iteraciones complejas del método burbuja.

</details>

<details>
<summary><b>Bloque III: Álgebra Lineal y Gestión Avanzada de Memoria</b></summary>
<br>

#### Ejercicio 8: Transposición de Matrices
* **Enunciado:** Calcular y retornar la transpuesta de una matriz de dimensiones generales $n \times m$.

#### Ejercicio 9: Multiplicación de Matrices Cuadradas
* **Enunciado:** Ejecutar el producto algebraico de dos matrices cuadradas de dimensión $N$. Permite asignación de valores de forma manual o mediante generadores aleatorios uniformes.

#### Ejercicio 10: Vectores Dinámicos Explicitos
* **Enunciado:** Simular e implementar la reserva y liberación de memoria explícita empleando operadores análogos a `new` y `delete`.

#### Ejercicio 11: Intercambio por Referencia (Uso de Plantillas)
* **Enunciado:** Desarrollar subprocesos genéricos capaces de permutar variables de múltiples naturalezas (enteros, textos) mediante el paso de argumentos por referencia.

</details>

<details>
<summary><b>Bloque IV: Persistencia de Datos y Flujos de Archivos (I/O)</b></summary>
<br>

#### Ejercicio 12: Sistema de Gestión Académica
* **Enunciado:** Leer listados de estudiantes desde bases de datos planas (`usuarios.txt`), procesar calificaciones segmentadas por criterios evaluativos (EP1, EP2) y exportar los reportes ponderados a archivos externos (`Notas.txt` y `Promedio.txt`).

#### Ejercicio 13 y 17: Automatización de Inventarios y Beneficios
* **Enunciado:** Analizar listas de bienes desde `productos.txt`, aplicar lógicas de negocio restrictivas (descuentos por volumen superiores a 5 unidades) y estructurar un reporte final de beneficios económicos.

#### Ejercicio 20: Filtrado por Orden de Mérito y Tercio Superior
* **Enunciado:** Consolidar e integrar las calificaciones de múltiples grupos independientes de estudiantes, aplicar un ordenamiento descendente estricto y segregar los registros de aquellos que componen el tercio superior de cada segmento analizado.

</details>

---

### Metodología de Verificación: Pruebas de Escritorio

Todos los programas documentados han sido validados mediante matrices de estados. Este proceso asegura la correspondencia lógica entre las especificaciones del diseño funcional y el comportamiento de las variables en memoria.

#### Ejemplo Analítico de Control (Producto de Matrices Cuadradas - Ejercicio 9)

| Paso | Fase del Algoritmo | i | j | k | Acumulador C[i,j] | Operación / Salida en Pantalla |
| :---: | :--- | :---: | :---: | :---: | :---: | :--- |
| 12 | Inicialización de Celda | 1 | 1 | - | 0 | `C[1,1] <- 0` |
| 13 | Procesamiento Bucle k | 1 | 1 | 1 | 5 | `C[1,1] <- 0 + (A[1,1] * B[1,1])` |
| 14 | Procesamiento Bucle k | 1 | 1 | 2 | 19 | `C[1,1] <- 5 + (A[1,2] * B[2,1])` |
| 15 | Inicialización de Celda | 1 | 2 | - | 0 | `C[1,2] <- 0` |

---

### Requisitos del Entorno de Ejecución

Para la correcta interpretación del pseudocódigo académico y la validación de los scripts de persistencia de archivos, se requiere:
1. Intérprete compatible con configuraciones de perfil flexible o académico (e.g., PSeInt o entornos IDE con soporte C++ estándar).
2. Permisos de lectura/escritura en el directorio de ejecución para los archivos de datos (`.txt`).
