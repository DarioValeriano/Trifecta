# Algoritmos y Programación II - Trabajo Práctico 3: Trifecta

## Descripción del Proyecto

Este proyecto fue desarrollado como parte del curso "Algoritmos y Programación II". Se abordaron tres ejercicios que involucraron la implementación y modificación de listas, así como la creación de clases para gestionar información académica. A continuación, se describen los ejercicios realizados y las habilidades adquiridas durante el desarrollo del proyecto.

## Ejercicios Realizados

### Ejercicio 1

**Implementación de Métodos en Listas**

- **Métodos Implementados**:
  - `union(Lista lista)`: Implementado para devolver un puntero a una lista que representa la unión entre la lista actual y la lista pasada como parámetro.

- **Versiones del Método**:
  - Para listas no ordenadas.
  - Para listas ordenadas de menor a mayor, manteniendo el orden en la lista resultante.

**Habilidades Adquiridas**:
- Manejo avanzado de punteros y estructuras de datos no ordenadas.
- Implementación de métodos de unión en listas ordenadas y no ordenadas.
- Mantenimiento del orden en listas resultantes, gestionando eficientemente los datos.

### Ejercicio 2

**Adaptación de la Clase Lista a una Lista Circular**

- **Modificaciones Realizadas**:
  - Implementación de una lista circular con un tamaño máximo `N` (inicialmente 5).
  - Métodos adaptados:
    - `alta()`: Añade un nodo al final de la lista o reemplaza el elemento más antiguo si la lista está llena.
    - `mas_antiguo()`: Devuelve el valor más antiguo en la lista.
    - `promedio()`: Calcula el promedio de todos los elementos en la lista.

**Habilidades Adquiridas**:
- Gestión de listas circulares y manejo de memoria dinámica.
- Implementación de técnicas para mantener el tamaño máximo de la lista y manejar elementos antiguos.
- Cálculo de estadísticas y actualización eficiente de listas.

### Ejercicio 3

**Implementación de Clases Carrera y Buscador_Carreras**

- **Clases Implementadas**:
  - `Carrera`: Maneja el nombre, duración y una lista de materias de una carrera.
  - `Buscador_Carreras`: Sugerencia de carreras basada en una lista de materias preferidas y una duración máxima.

- **Método Implementado**:
  - `sugerir_carreras(Lista<Carrera*>* carreras, int duracion_maxima, Lista<string>* materias_predilectas)`: Devuelve una lista de carreras que cumplen con los criterios de materias y duración.

**Habilidades Adquiridas**:
- Diseño y manejo de clases con atributos complejos y métodos de búsqueda.
- Gestión de listas de objetos y filtrado eficiente basado en criterios específicos.
- Diseño de interfaces y métodos orientados a la gestión académica.

## Buenas Prácticas y Consideraciones

- **Modularización**: El código está bien modularizado para facilitar su comprensión y mantenimiento.
- **Nombres Adecuados**: Variables, atributos y métodos tienen nombres claros y descriptivos.
- **Documentación**: Se incluye documentación técnica detallada sobre los métodos y las clases.
- **Eficiencia**: Se ha prestado especial atención a la eficiencia de los algoritmos y el uso de memoria dinámica.

## Conclusión

Este proyecto ha permitido desarrollar habilidades en la implementación y gestión de estructuras de datos avanzadas y en la creación de sistemas orientados a objetos. La experiencia adquirida será valiosa para futuros proyectos en desarrollo de software.




# Algorithms and Programming II - Practical Work 3: Trifecta

## Project Description

This project was developed as part of the "Algorithms and Programming II" course. It involved three exercises focusing on the implementation and adaptation of linked and circular lists, as well as the creation of classes for managing academic career information. Below is a description of the completed exercises and the skills acquired during the project.

## Completed Exercises

### Exercise 1

**Implementation of Methods in Lists**

- **Implemented Methods**:
  - `union(Lista lista)`: Implemented to return a pointer to a list representing the union between the current list and the parameter list.

- **Method Versions**:
  - For unordered lists.
  - For ordered lists from smallest to largest, maintaining order in the resulting list.

**Skills Acquired**:
- Advanced handling of pointers and unordered data structures.
- Implementation of union methods in both ordered and unordered lists.
- Efficiently managing data and maintaining order in resulting lists.

### Exercise 2

**Adapting the List Class to a Circular List**

- **Modifications Made**:
  - Implemented a circular list with a maximum size `N` (initially 5).
  - Adapted methods:
    - `alta()`: Adds a node to the end of the list or replaces the oldest element if the list is full.
    - `mas_antiguo()`: Returns the oldest value in the list.
    - `promedio()`: Calculates the average of all elements in the list.

**Skills Acquired**:
- Managing circular lists and dynamic memory handling.
- Implementing techniques to maintain maximum list size and handle old elements.
- Calculating statistics and efficiently updating lists.

### Exercise 3

**Implementation of Career and CareerFinder Classes**

- **Implemented Classes**:
  - `Carrera`: Manages the name, duration, and a list of subjects for a career.
  - `Buscador_Carreras`: Suggests careers based on a list of preferred subjects and a maximum duration.

- **Implemented Method**:
  - `sugerir_carreras(Lista<Carrera*>* carreras, int duracion_maxima, Lista<string>* materias_predilectas)`: Returns a list of careers that meet the subject and duration criteria.

**Skills Acquired**:
- Designing and managing classes with complex attributes and search methods.
- Handling lists of objects and efficient filtering based on specific criteria.
- Designing interfaces and methods for academic management.

## Best Practices and Considerations

- **Modularization**: The code is well-modularized to enhance understanding and maintenance.
- **Appropriate Naming**: Variables, attributes, and methods have clear and descriptive names.
- **Documentation**: Includes detailed technical documentation on methods and classes.
- **Efficiency**: Special attention was given to algorithm efficiency and dynamic memory usage.

## Conclusion

This project provided valuable experience in implementing and managing advanced data structures and creating object-oriented systems. The skills acquired will be beneficial for future software development projects.

