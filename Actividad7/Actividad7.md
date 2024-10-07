#  Actividad 7
* María Julissa García Morán - 201602805

### Describir las características principales y el funcionamiento del Completely Fair Scheduler (CFS) de Linux. 
* **Proporciones de tiempo de CPU:** El CFS asigna a cada tarea una proporción de tiempo de CPU en lugar de un segmento de tiempo fijo. Esta proporción se determina en función del valor "nice" de cada tarea, que varía de -20 (prioridad más alta) a +19 (prioridad más baja). Las tareas con valores "nice" más bajos reciben más tiempo de CPU.

* **Latencia Objetivo:** En lugar de asignar un tiempo de ejecución fijo a cada tarea, el CFS utiliza un valor de latencia objetivo. Este valor indica el intervalo de tiempo durante el cual cada tarea en ejecución debe recibir al menos una vez una parte de tiempo en la CPU.

* **Granularidad mínima:** CFS asegura que cada tarea reciba al menos una cantidad mínima de tiempo de CPU, evitando que el cambio entre tareas sea demasiado frecuente, lo que podría aumentar los costos de cambio de contexto. Esto es especialmente importante cuando hay muchas tareas activas.

* **Tiempo de ejecución virtual (vruntime):** El CFS utiliza el tiempo de ejecución virtual (vruntime) para determinar la prioridad dinámica de una tarea. Las tareas que han ejecutado menos tiempo tendrán un menor vruntime y, por lo tanto, tendrán mayor prioridad para ejecutar. Este valor de vruntime se ajusta en función de la prioridad (nice value) de la tarea, lo que significa que las tareas con mayor prioridad acumulan vruntime más lentamente y, por lo tanto, se les otorga más tiempo de CPU.

* **Uso de árboles rojo-negro:** CFS organiza las tareas utilizando un árbol rojo-negro, que es una estructura de datos de búsqueda balanceada. Esta estructura permite seleccionar la tarea con el menor valor de vruntime en un tiempo O(log N), lo que garantiza la equidad y la eficiencia.

* **Preempción:** Las tareas pueden ser preemptadas si una tarea de mayor prioridad se vuelve disponible. Esto asegura que las tareas más importantes reciban tiempo de CPU de manera oportuna, respetando las prioridades del sistema

