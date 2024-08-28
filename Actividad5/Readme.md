### Tipos de Kernel y sus diferencias
```
#!/bin/bash
while true; do
    echo "¡Hola! La fecha actual es: $(date)"
    sleep 1
done
```

### User vs Kernel Mode
```
En el modo Usuario, las aplicaciones y programas se ejecutan con permisos limitados a diferencia del modo Kernel ya que aquí el sistema operativo
tiene control total sobre el hardware y los recursos del sistema. 
```
| Criterios            | Modo Kernel                                 | Modo de Usuario                     |
|---------------------|--------------------------------------------------|---------------------------------------------------|
| **Acceso a los recursos** | Cuenta con acceso directo a la memoria RAM y el hardware en el modo núcleo. | No hay acceso directo a la memoria RAM y el hardware en el modo núcleo. Para acceder al hardware y la memoria RAM en el modo del núcleo, es necesario hacer una llamada al Sistema.|
| **Microkernel**      | Kernel que solo incluye funciones básicas, delegando otras al espacio de usuario. | Minix, QNX                                        |
| **Kernel Híbrido**   | Combina características de kernels monolíticos y microkernels. | Windows NT, MacOS X                               |
| **Modo Usuario**     | Modo en el que las aplicaciones se ejecutan con permisos limitados. | Aplicaciones no pueden acceder directamente al hardware. |
| **Modo Kernel**      | Modo en el que el sistema operativo tiene control total sobre el hardware. | Funciones críticas del sistema se ejecutan aquí.  |
| **Interrupciones**   | Señales generadas para notificar al procesador de eventos externos. | Interrupción del teclado o ratón.                 |
| **Trampas**          | Interrupciones generadas intencionadamente por el software para manejar excepciones o llamadas al sistema. | Manejo de excepciones o errores.                  |


### Interruptions vs traps
```
sudo nano /etc/systemd/system/actividad4.service
```



