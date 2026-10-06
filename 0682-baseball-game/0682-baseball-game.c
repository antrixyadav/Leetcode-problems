int calPoints(char** operations, int operationsSize) {
    int* ops = malloc(operationsSize * sizeof(int));
    int top = -1;
    for(int i = 0; i < operationsSize; i++)
    {
        if(strcmp(operations[i], "+") == 0)
            ops[++top] = ops[top] + ops[top - 1];
        else if(strcmp(operations[i], "C") == 0)
            top--;
        else if(strcmp(operations[i], "D") == 0)
        {
            ops[top + 1] = 2 * ops[top];
            top++;
        }
        else
            ops[++top] = atoi(operations[i]);
    }
    int sum = 0;
    for(int i = 0; i <= top; i++)
        sum += ops[i];
    free(ops);
    return sum;
}