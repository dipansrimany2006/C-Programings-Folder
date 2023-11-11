#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Custom comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(char*)b - *(char*)a);
}

int main() {
	
    char str[] = "geeks"; 
    int n = strlen(str);

    // Sort the string in lexicographically-descending order
    qsort(str, n, sizeof(char), compare);

    printf("Lexicographically Descending Sorted String: %s\n", str);
    return 0;
}

