/*Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char sum[101];
    scanf("%s", sum);

    int len = strlen(sum);


    int count[4] = {0};

    for (int i = 0; i < len; i++) {
        if (sum[i] != '+') {
            count[sum[i] - '0']++;
        }
    }


    char newSum[101];
    int index = 0;

    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            newSum[index++] = i + '0';
            if (index < len) {
                newSum[index++] = '+';
            }
        }
    }

    newSum[index] = '\0';

    printf("%s\n", newSum);

    return 0;
}
