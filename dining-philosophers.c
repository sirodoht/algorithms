// Dining philosophers algorithm demonstration

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define N 5
#define LEFT (i+N-1)%N
#define RIGHT (i+1)%N
#define THINKING 0
#define HUNGRY 1
#define EATING 2

void *philosopher(void *i);
void take_forks(int i);
void put_forks(int i);
void test(int i);
void eat(int num);
void think(int num);
void down(sem_t *sem);
void up(sem_t *sem);

int state[N];
int phil_number[N]={0, 1, 2, 3, 4};
sem_t mutex;
sem_t s[N];

int main(int argc, char *argv[])
{
    int i;
    pthread_t phil_threads[N];
    sem_init(&mutex, 0, 1);

    for(i = 0; i < N; i++)
        sem_init(&s[i], 0, 0);

    for(i = 0; i < N; i++)
    {
        pthread_create(&phil_threads[i], NULL, philosopher, &phil_number[i]);
		printf("Philosopher %d is thinking.\n", i+1);
    }

    for(i=0;i<N;i++)
        pthread_join(phil_threads[i], NULL);
}

void *philosopher(void *i)
{
    while(1)
    {
        int *number = i;
        think(1);
        take_forks(*number);
        eat(0);
        put_forks(*number);
    }
}

void take_forks(int i)
{
    down(&mutex);
    state[i] = HUNGRY;
    printf("Philosopher %d is hungry.\n", i);
    test(i);
    up(&mutex);
    down(&s[i]);
    sleep(1); // wait a bit
}

void put_forks(int i)
{
    down(&mutex);
    state[i] = THINKING;
    printf("Philosopher %d putting fork %d and %d down.\n", i, LEFT, i);
    printf("Philosopher %d is thinking.\n", i);
    test(LEFT);
    test(RIGHT);
    up(&mutex);
}

void test(int i)
{
    if(state[i] == HUNGRY && state[LEFT] != EATING && state[RIGHT] != EATING)
    {
    	state[i] = EATING;
    	printf("Philosopher %d takes fork %d and %d.\n", i, LEFT, i);
        printf("Philosopher %d is eating.\n", i);
        sleep(1);  // wait a bit
    	up(&s[i]);
    }
}

void eat(int num)
{
    sleep(num);  // wait a bit
}

void think(int num)
{
    sleep(num);  // wait a bit
}

void down(sem_t *sem)
{
    sem_wait(sem);
}

void up(sem_t *sem)
{
    sem_post(sem);
}
