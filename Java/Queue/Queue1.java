package Java.Queue;

import java.util.NoSuchElementException;

public class Queue1 {
    private ListNode front;
    private ListNode rear;
    private int length;

    private class ListNode {
        private int data;
        private ListNode next;

        public ListNode(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public int length() {
        return length;
    }

    public Queue1() {
        this.front = null;
        this.rear = null;
        this.length = 0;
    }

    // enqueue operation

    public void enqueue(int data) {
        ListNode temp = new ListNode(data);
        if (isEmpty()) {
            front = temp;
        } else {
            rear.next = temp;
        }
        rear = temp;
        length++;
    }

    public void print() {
        if (isEmpty()) {
            return;
        }
        ListNode current = front;
        while (current != null) {
            System.out.print(current.data + "-->");
            current = current.next;
        }
        System.out.println("null");
    }

    // Dequeue operation

    public int dequeue() {
        if (isEmpty()) {
            throw new NoSuchElementException();
        }
        int result = front.data;
        front = front.next;
        if (front == null) {
            rear = null;
        }
        length--;
        return result;
    }

    public static void main(String[] args) {
        Queue1 s1 = new Queue1();

        s1.enqueue(10);
        s1.enqueue(30);
        s1.enqueue(20);

        s1.print();

        System.out.println(s1.dequeue());
        s1.print();

    }

}
