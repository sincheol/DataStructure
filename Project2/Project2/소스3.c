#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

char Stack[100];
int index = -1;

void push(char a) {
	index++;
	Stack[index] = a;
}

char pop() {
	char tmp = Stack[index];
	index--;
	return tmp;
}

int empty() {
	if (index == -1)   return 1;
	return 0;
}

char top() {
	return Stack[index];
}

int high(char a) {
	if (empty())return 1;
	else if (top() == '(') {
		if (a != '(')   return 1;
	}
	else if (top() == '+' || top() == '-') {
		if (a == '*' || a == '/')
			return 1;
		else
			return 0;
	}
	return 0;
}

int main() {
	while (1) {
		char input[100] = { 0, };
		scanf("%[^\n]%*c", input);
		for (int i = 0; input[i]; i++) {
			if (input[i] == ' ') continue;
			if (input[i] >= 'a'&&input[i] <= 'z') {
				printf("%c ", input[i]);
			}
			else if (input[i] == '(')
				push(input[i]);
			else if (input[i] == ')') {
				while (top() != '(') {
					printf("%c ", pop());
				}
				pop();
			}
			else {
				while (high(input[i]) == 0) {
					printf("%c ", pop());
				}
				push(input[i]);
			}
		}
		while (empty() == 0) {
			printf("%c ", pop());
		}
		printf("\n");
	}
	return 0;
}