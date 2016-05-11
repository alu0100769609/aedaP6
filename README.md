# Algoritmos y Estructuras de Datos Avanzadas

## Práctica 6: Árbol Binario de Búsqueda

### Enunciado
Desarrollar en lenguaje **C++** un árbol binario de búsqueda. Las operaciones que podrá realizar este programa deben ser:

* [ ] **Búsqueda**
* [ ] **Inserción**
* [ ] **Eliminación**

Para ello se utilizará una plantilla de clases tanto para el nodo como para el árbol. Se utilizará como valores de clave el tipo DNI definido en la [práctica 5](https://github.com/alu0100769609/aedaP5).

Se deben implementar dos programas para ejecutar el código implementado:

* **Modo demostración:** El programa crea un árbol binario de búsqueda vacío, y presenta un menú con las siguientes opciones:
 * 0.- Salir
 * 1.- Insertar clave
 * 2.- Eliminar clave

 Tras cada operación se mostrará el árbol resultante mediante un recorrido por niveles. En cada nivel se muestran los nodos de izquierda a derecha. El subárbol vacío se visualiza con `[.]`

 En este modo se trabajará con árboles de tamaño limitado para permitir una correcta visualización.

 Ejemplo de visualización:
 ```bash
 ÁRBOL VACÍO
 Nivel 0: [.]
 INSERTAR: 30
 Nivel 0: [30]
 Nivel 1: [.] [.]
 INSERTAR: 35
 Nivel 0: [30]
 Nivel 1: [.] [35]
 Nivel 2: [.] [.]
 INSERTAR: 15
 Nivel 0: [30]
 Nivel 1: [15] [35]
 Nivel 2: [.] [.]
 ELIMINAR: 15
 Nivel 0: [30]
 Nivel 1: [.] [35]
 Nivel 2: [.] [.]
 ...
 ```

* **Modo estadísticas:** El programa cuenta las comparaciones para buscar e insertar claves en el árbol.

 El programa solicita los siguientes parámetros:
 * N (int): Tamaño del árbol (número de nodos del árbol)
 * P (int): Número de pruebas

 Al final del experimento se presentarán por pantalla los datos de entrada y los resultados de ambos experimentos:

|             |    N     |    P     | Mínimo   |  Medio   |  Máximo  |
|-------------|----------|----------|----------|----------|----------|
|**Búsqueda** |   xxxx   |   xxxx   |   xxxx   |   xxxx   |   xxxx   |
|**Inserción**|   xxxx   |   xxxx   |   xxxx   |   xxxx   |   xxxx   |
|  **....**   |   ....   |   ....   |   ....   |   ....   |   ....   |

De forma **opcional** se puede:
* Utilizar el programa desarrollado para realizar un estudio sobre el comportamiento de un árbol binario de búsqueda cuando se incrementa el tamaño del árbol.
* Mejorar la salida del programa haciendo un esquema del árbol más realista que el propuesto en esta práctica

### Objetivo
El objetivo de esta práctica es la implementación del **árbol de búsqueda binaria** y la comprobación de su ejecución mediante los modos `estadístico` y `demostración` además de recordar la **sobrecarga de operadores**, el **manejo de excepciones** mediante try-catch y la definición de **plantillas** que se han implementado en prácticas anteriores.

### Forma de uso

#### Compilación

```bash
$ g++ main/main.cpp cpp/*.cpp -std=c++11 -o main.out
```

#### Ejecución

```bash
$ ./main.out
```

### Autor

* [Adexe Sabina Pérez](http://alu0100769609.github.io)
* [Adexe en GitHub](http://github.com/alu0100769609)
