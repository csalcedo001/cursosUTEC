# Buffer

## Peterson solution

'''
int turn;
boolean flag[2];

do {
	flag[i] = true
	turn = j;
	while (flag[j] && turn == j);
	
	flag[i] = false;
} while (true);

'''

## Hardware synchronization

'''
do {
	while (compare_and_swap(&lock, 0, 1) != 0);

	// ...

	lock == 0;
} while (true);

'''

## Mutex

* Unli mutual exclusion variables.
* Only 1 process has the lock.
* Spin Lock: in while true block: waiting...

## Semaphore

* Allows event synchronization
* Two operations
  * Wait
  * Signal

## Deadlock

Two processes in waiting state depend on each other.
