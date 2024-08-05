### Paso 1: Gestión de Usuarios
```
Se agregan los usuarios 1, 2 y 3 mediante el uso de useradd
sudo useradd usuario1
sudo useradd usuario2
sudo useradd usuario3
```

### Paso 2: Asignamos contraseña a los usuarios
```
Se agregan las contraseñas a los usuarios 1, 2 y 3 mediante el uso de passwd
sudo passwd pass1
sudo passwd pass2
sudo passwd pass3
```

### Paso 3: Obtener Información
```
Se agregan obtiene información de los usuarios mediante el uso de id
id usuario1

Resultado:
uid=1001(usuario1) gid=1001(usuario1) grupos=1001(usuario1)
```

### Paso 4: Eliminación de usuario
```
Se elimina el usuario de la siguiente manera:
sudo userdel -r usuario3
```

## Parte 2: Gestión de Grupos
### Paso 1: Crear grupos
```
Se crean los grupos 1 y 2:
sudo groupadd grupo1
sudo groupadd grupo2
```

### Paso 2: Agregar usuarios a los grupos creados
```
sudo usermod -aG grupo1 usuario1
sudo usermod -aG grupo2 usuario2
```

### Paso 3: Verificar membresías
```
groups usuario1
groups usuario2

Resultado:
usuario1 : usuario1 grupo1
usuario2 : usuario2 grupo2
```

### Paso 4: Eliminar grupo
```
sudo groupdel grupo2
```

## Parte 3: Gestión de Permisos
### Paso 1: Creación de Archivos y Directorios
```
su - usuario1
echo "Contenido del archivo1" > ~/archivo1.txt
mkdir ~/directorio1
echo "Contenido del archivo2" > ~/directorio1/archivo2.txt
```

### Paso 2: Verificar permisos
```
ls -l ~/archivo1.txt
ls -ld ~/directorio1
```

### Paso 3: Modificar Permisos usando chmod con Modo Numérico
```
chmod 640 ~/archivo1.txt
```

### Paso 4: Modificar Permisos usando chmod con Modo Simbólico
```
chmod u+x ~/directorio1/archivo2.txt
```

### Paso 5: Cambiar el Grupo Propietario
```
sudo chgrp grupo1 ~/directorio1/archivo2.txt
ls -l ~/directorio1/archivo2.txt
```

### Paso 6: Configurar Permisos de Directorio
```
chmod 750 ~/directorio1
ls -ld ~/directorio1
```

### Paso 7: Comprobación de Acceso
```
su - usuario2
cat /home/usuario1/archivo1.txt
cat /home/usuario1/directorio1/archivo2.txt
```

### Paso 8: Verificación Final
```
ls -l ~/archivo1.txt
ls -ld ~/directorio1
ls -l ~/directorio1/archivo2.txt
```
