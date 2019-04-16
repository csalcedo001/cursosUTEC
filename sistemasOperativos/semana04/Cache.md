# Caches

__in detail...__

## Types MISS

* Cold miss
* conflict miss
* capacity miss

## Multiprocessors

A cache for every processor. Connected by a bus.

### Types

* Shared-Cache
* Bus-based Shared Memory
* Dance-hall
* Distributed Memory

### Problems (in bus-based shared memory)

2 variables apuntando a una misma dirección de memoria. Uno la actualiza y la otra no es notificada. ¿Qué se puede hacer?


## Sistema coherente.

* Enviar señal a través del bus

Write serialization: Same order for all processors.

### Bus snooping

* Todas las operaciones aparecen en el bus.
* Cache toma decisiones acorde a la información del bus
* Atomicidad en operaciones de escritura

__Note:__ Atomicidad: Instrucciones que se ejecutan instantaneamente.

### Numa Model

## Sistema consistente
