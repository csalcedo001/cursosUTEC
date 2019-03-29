# Variable-length Records

## Caracteres separadores

**Problemas:**

- Delimitador es parte del contenido.
- Acceso directo a un registro.
- Eliminar un registro.

## Indicadores de longitud de campo.

```
6Howard7Paredes7Zegarra11Computacion15711500.50
5Penny6Vargas7Cordero10Industrial1272850.00
```

**Ventajas:**

- Al inicio del campo.
- En archivos binarios: Tamaño del registro al inicio

**Problemas:**

- ~~Delimitador es parte del contenido.~~
- Acceso directo a un registro.
- Eliminar un registro.

## Slotted Page

**Contiene:**

- Número de registros.
- Final del espacio libre separado para la cabecera.
- Localización y tamaño de cada registro.

**Problemas:**

- ~~Delimitador es parte del contenido.~~
- ~~Acceso directo a un registro.~~
- Eliminar un registro.

**Anotaciones:**

- En algunos casos, por precausión se deja un espacio adicional a los registros por si varía su tamaño.
