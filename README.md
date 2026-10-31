# Caso práctico: Sistema de cálculo del total de una venta

## 1. Nombre completo del integrante y matrícula

**Nombre:** Johan Mota  
**Matrícula:** 2024-3567

## 2. Descripción breve del programa

Programa desarrollado en C++ para una tienda. Solicita la cantidad de unidades de un producto y el precio de cada unidad, calcula el importe de la venta y aplica automáticamente un descuento del 10 % cuando el total antes del descuento es mayor que RD$5,000.

## 3. Datos de entrada

- Cantidad de unidades del producto (número entero).
- Precio por unidad en pesos dominicanos (número decimal o entero).

## 4. Datos que procesa

- Multiplica la cantidad por el precio unitario para obtener el subtotal.
- Comprueba si el subtotal es estrictamente mayor que RD$5,000.
- Si supera RD$5,000, calcula y resta el 10 % de descuento.
- Valida que la cantidad sea mayor que cero y que el precio no sea negativo.

## 5. Datos de salida

- Total a pagar en pesos dominicanos, con dos decimales.
- Mensaje de error si la cantidad no es válida o el precio es negativo.

## 6. Capturas de pantalla del programa en ejecución

### Escenario 1: venta sin descuento (2 unidades × RD$1,000)

![Ejecución sin descuento](imagenes/escenario1.png)

### Escenario 2: venta con descuento (4 unidades × RD$1,500)

![Ejecución con descuento](imagenes/escenario2.png)

### Escenario 3: total exactamente igual a RD$5,000 (sin descuento)

![Límite de descuento](imagenes/escenario3.png)

### Escenario 4: cantidad no válida

![Validación de entrada](imagenes/escenario4.png)

## 7. Descripción de las estructuras utilizadas y su función

Se utilizó una **función** llamada `calcularTotalPagar`, porque realiza un cálculo y devuelve el total que debe pagar el cliente. Dentro de ella se emplea la estructura condicional `if` para verificar si el subtotal supera RD$5,000 y, en ese caso, aplicar el descuento del 10 %.

También se utilizó un **procedimiento** llamado `mostrarTotal`, declarado con `void`, porque su tarea es presentar el resultado en pantalla y no necesita devolver ningún valor.

En `main()` se solicitan los datos, se llama a la función, se guarda el valor que esta retorna y se envía al procedimiento para mostrarlo. De esta manera, el programa separa el cálculo de la presentación del resultado.
