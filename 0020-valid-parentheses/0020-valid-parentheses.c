bool isValid(char* s) {
    int top = -1;
    int n = strlen(s);

    char stack_arr[100009];
    int isEmpty(const int *top) {
    return *top == -1;
}

void push(int *top, char c) {
    (*top)++;
    stack_arr[*top] = c;
}

char peek(const int *top) {   // chỉ đọc, không sửa -> const
    return stack_arr[*top];
}

void pop(int *top) {          // chỉ xóa, không trả về gì nữa
    (*top)--;
}

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            push(&top, c);
        } else {
            if (isEmpty(&top)) return 0;

            char t = peek(&top);   // đọc trước
            if (c == ')' && t != '(') return 0;
            if (c == ']' && t != '[') return 0;
            if (c == '}' && t != '{') return 0;

            pop(&top);              // rồi mới xóa
        }
    }
    return isEmpty(&top);
}
