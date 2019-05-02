# Scheduling

## Términos

* Cycle: Pulso de reloj que genera ejecucion de siguiente estado.
* CPU Burst: Periodo de operación de un proceso en un procesador.
* I/O Burst: Periodo de operaciones I/O de un proceso.
* Utilización: Porcentaje de tiempo activo.

## Objetivos

* Eficiencia
* Tener dispositivos (CPU, etc.) activas el mayor tiempo posible.

Cuando el procesador está disponible, el scheduler se encarga de poner procesos en estado "ready".

Se llama al scheduler cuando:

* Se pasa de "running" a "waiting": I/O starts
* Se pasa de "running" a "ready": Context switch
* Se pasa de "waiting" a "ready": I/O returns
* El proceso llega a "terminated"

## Scheduling mechanisms

* Non-preemptive: Cases 1 and 4. *Easier to implement*
* Preemptive: Cases 2 and 3. *Most effective*

## Dispatcher

* Makes implementation (policy is from scheduling)
* Makes Context switch.
* Changes user mode.

## Criteria

* + CPU utilization.
* + Throughput: Unidad de trabajo por unidad de tiempo
* - Turnaround time
* - Waiting time
* - Response time

## Algorithms

### First Come, First Served (FCFS)

*Characteristics*
* Non preemptive approach
* FIFO

*Problems*
* 1 large process delays the next processes.

### Shortest-Job-First Scheduling (SJF)

*Characteristics*
* Preemptive and non0preemptive.

### Priority Scheduling

* Preemptive

* A weight is given to every process.
* The first process in is the one with the greatest weight.
* __Note:__  SJF is a special case of Priority Scheduling.

* Aging: Most time in line increases priority.

### Round Robin

* For time sharing systems.
* Time Quantum: unidad de tiempo para acceder al CPU.
* Si el proceso no acaba, va al final de la cola al acabar su tiempo.
* Fair system.
* Performance depends on __q__.

### Multilevel Scheduling

...

### Aditionals

* Processor afinity: Performance
* Load Balancing: Search
* Cache afinity

__Note:__ Decouple look ahead.
