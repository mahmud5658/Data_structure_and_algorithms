package Java.Stack;

public class stack1 {
    private int top;
    private int[] arr;

    public stack1(int capacity) {
        top = -1;
        arr = new int[capacity];
    }

    // push data into the stack
    public void push(int data) {
        if (isFull()) {
            throw new RuntimeException("Stack is full");
        }
        top++;
        arr[top] = data;
    }

    // pop data from the stack
    public void pop() {
        if (isEmpty()) {
            throw new RuntimeException("Stack is Empty");
        }

        top--;
    }

    // peek value from the stack

    public int peek() {
        if (isEmpty()) {
            throw new RuntimeException("Stack is Empty");
        }
        return arr[top];
    }

    public boolean isFull() {
        return arr.length == size();
    }

    public int size() {
        return top + 1;
    }

    public boolean isEmpty() {
        return top < 0;
    }

    public static void main(String[] args) {
        stack1 s1 = new stack1(5);
        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);
        s1.push(50);
        s1.pop();
        s1.pop();
        System.out.println(s1.peek());
    }
}
