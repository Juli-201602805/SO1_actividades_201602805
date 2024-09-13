### Tipos de Kernel y sus diferencias
```
El Kernel es el núcleo del sistema operativo y su principal función es gestionar los recursos del sistema y permitir la comunicación entre el hardware y el software.
Existen varios tipos de Kernel y son:

* Kernel Monolítico: En este diseño, todas las funciones del Kernel se implementan como un único programa en espacio de Kernel tales como las gestión de memoria,
  procesos y controladores de dispositivos. Estos Kernels son rápidos, ya que todas las funciones se ejecutan en modo Kernel, pero cualquier cambio o error en el
  código puede afectar al sistema completo. Ejemplos de este tipo son Linux y Widows.

* Microkernel: En contraste con el enfoque monolítico, un microkernel delega la mayoría de las funciones del kernel a procesos separados que se ejecutan en espacio de 
  usuario. Esto reduce la complejidad del núcleo y facilita la extensibilidad y la modularidad del sistema operativo. Ejemplos de este tipo son GNU Hurd y QNX.

* Kernel Híbrido: Un Kernel híbrido combina características de los Kernels monolíticos y Microkernels. Algunas funciones críticas se implementan en espacio de Kernel,
  mientras que otras se ejecutan como procesos en espacio de usuario. Este enfoque busca combinar la eficiencia del Kernel monolítico con la flexibilidad del Microkernel.
  Un ejemplo de este tipo es macOS.
```

### User vs Kernel Mode
```
En el modo Usuario, las aplicaciones y programas se ejecutan con permisos limitados a diferencia del modo Kernel ya que aquí el sistema operativo
tiene control total sobre el hardware y los recursos del sistema. 
```
| Criterios            | Modo Kernel                                 | Modo de Usuario                     |
|---------------------|--------------------------------------------------|---------------------------------------------------|
| **Acceso a los recursos** | Cuenta con acceso directo a la memoria RAM y el hardware en el modo núcleo. | No hay acceso directo a la memoria RAM y el hardware en el modo núcleo. Para acceder al hardware y la memoria RAM en el modo del núcleo, es necesario hacer una llamada al Sistema.|
| **Modes**  | El modo Kernel también es conocido por algunos otros nombres como el nombre maestro, el modo privilegio y el modo sistema. | El modo de Usuario también es conocido por otros nombres el modo no privilegiado, el modo esclavo y el modo restringido.|
| **Nivel de Privilegio**  | En el modo núcleo, el software y las aplicaciones tienen más privilegio acceder a los recursos del sistema, como la RAM o el hardware. | En el modo de usuario, el software y las aplicaciones tienen comparativamente menos privilegio acceder a los recursos del sistema, como la memoria RAM o el hardware.|
| **Espacio de dirección virtual**  | En el modo del núcleo, todos los procesos y solicitudes comparten el mismo espacio de dirección virtual. | En el modo de usuario, todos los procesos y solicitudes comparten un espacio separado de dirección virtual.|
| **Restricciones** | En el modo del núcleo, no hay restricciones. Puedes acceder al programa de usuario y a los programas del kernel.| En el modo de usuario, hay restricciones para esto. No puede acceder directamente al programa de usuario y a los programas del kernel. Tienes que usar una llamada del sistema para este acceso.|
| **Interrupciones** |En el kernel existe la probabilidad de apasear todo el sistema si se produce alguna interrupción durante la ejecución del proceso. | En el modo de usuario, un solo fallo de proceso no conduce a un sistema de agujeros apagado. Sólo ese proceso específico falla.|
| **Funcionalidad**  |El modo Kernel tiene la capacidad de acceder a cualquier bloque de memoria dentro del sistema informático y puede interactuar directamente con los recursos necesarios para ejecutar un proceso, lo que lo convierte en un modo extremadamente poderoso y crucial para el funcionamiento del sistema. | El modo de usuario es un entorno de ejecución básico y estándar en el que las aplicaciones no tienen acceso directo al hardware ni a la memoria RAM, lo que significa que no pueden ejecutar procesos por sí mismas. En su lugar, dependen de una API para interactuar con estos recursos.|


### Interruptions vs traps
| Interrupciones      | Trampa   |
|---------------------|----------|
| La interrupción es una señal de hardware que informa a la CPU que se debe abordar algo urgente de inmediato. | La trampa es una señal enviada por el software del usuario al sistema operativo indicándole que realice una acción específica de inmediato.|
| Es un proceso asincrónico. | Es un proceso sincronizado. |
| Son producidos por hardware.| Es generado por una instrucción del programa de usuario.|




