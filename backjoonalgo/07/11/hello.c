#include <stdio.h>
#include <pthread.h>
#include <vector.h>

thread_local int x = 0;

void* thread_func(void* arg) {
    x = (int)(size_t)arg;  // 각 쓰레드별 x 값을 다르게 세팅
    printf("Thread %d: x = %d\n", x, x);
    return NULL;
}

int main() {
    pthread_t t1, t2;
    pthread_create(&t1, NULL, thread_func, (void*)5);
    pthread_create(&t2, NULL, thread_func, (void*)2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}

void create_void_protocol(*vector<int> vr){
    vector<int> v;
    for(int i = 0; i < v.size(); i++)
}
