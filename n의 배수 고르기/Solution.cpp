#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// numlist_len�� �迭 numlist�� �����Դϴ�.
int* solution(int n, int numlist[], size_t numlist_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(numlist_len * sizeof(int));

    int idx = 0;

    for(int i = 0 ; i< numlist_len; i++)
    {
        if (numlist[i] % n == 0)
        {
            answer[idx] = numlist[i];
            idx++;
        }
    }

    return 0;


}
