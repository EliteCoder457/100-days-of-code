//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

#define MAX 100000

int deque[MAX];  
int front = 0, rear = -1;

void push_back(int x) {
    deque[++rear] = x;
}

void pop_back() {
    rear--;
}

void pop_front() {
    front++;
}

int front_element() {
    return deque[front];
}

int is_empty() {
    return front > rear;
}

void reset_deque() {
    front = 0;
    rear = -1;
}

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);
    if(k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }
    reset_deque();
    for(int i = 0; i < k; i++) {

        while(!is_empty() && arr[deque[rear]] <= arr[i])
            pop_back();
        push_back(i);
    }
    for(int i = k; i < n; i++) {
        printf("%d ", arr[front_element()]);  
        if(!is_empty() && front_element() <= i - k)
            pop_front();


        while(!is_empty() && arr[deque[rear]] <= arr[i])
            pop_back();

        push_back(i);
    }


    printf("%d\n", arr[front_element()]);

    return 0;
}
