package Java.LinkedList.SinglyLinkedList;

import java.util.NoSuchElementException;

public class singly1 {

    // declare singly linked list
    private ListNode head;
    private int length;

    private class ListNode {
        private int data;
        private ListNode next;

        public ListNode(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public singly1() {
        this.head = null;
        this.length = 0;
    }

    // check is empty or not

    public boolean isEmpty() {
        return length == 0;
    }

    // find length

    public int length() {
        return length;
    }

    // insert node at the beginning of the linked list
    public void insertAtFirst(int data) {
        ListNode node = new ListNode(data);
        // if(isEmpty()){
        // node.next = head;
        // head = node;
        // }
        node.next = head;
        head = node;
        length++;
    }

    // insert node at the end of the linked list

    public void insertAtLast(int data) {
        ListNode node = new ListNode(data);
        if (isEmpty()) {
            node.next = head;
            head = node;
        } else {
            ListNode current = head;
            while (current.next != null) {
                current = current.next;
            }
            current.next = node;
        }
        length++;
    }

    // insert node at given position

    public void insertAtPosition(int data, int position) {
        if (position > (length() + 1)) {
            throw new RuntimeException("Invalid position");
        }
        ListNode node = new ListNode(data);
        if (position == 1) {
            node.next = head;
            head = node;
        } else {
            ListNode previous = head;
            int count = 1;
            while (count < position - 1) {
                previous = previous.next;
                count++;
            }
            ListNode current = previous.next;
            previous.next = node;
            node.next = current;
        }
    }

    // search element from linked list

    public void searchKey(int key) {
        ListNode current = head;
        boolean find = false;
        while (current != null) {
            if (current.data == key) {
                System.out.println(key + " is the present in the linked list.");
                find = true;
            }
            current = current.next;
        }
        if (find == false) {
            System.out.println(key + " is not found in the linked list.");
        }
    }

    // find length of the linkd list with recursive method

    public int getLength(ListNode current) {
        if (current == null) {
            return 0;
        }
        return 1 + getLength(current.next);
    }

    // display linked list

    public void display(ListNode head) {
        if (isEmpty()) {
            throw new NoSuchElementException("No such elemet");
        }
        ListNode current = head;
        while (current != null) {
            System.out.print(current.data + "-->");
            current = current.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {

        singly1 s1 = new singly1();
        s1.insertAtFirst(10);
        s1.insertAtFirst(20);
        s1.insertAtFirst(30);
        s1.insertAtFirst(40);
        s1.insertAtFirst(50);
        s1.insertAtPosition(100, 3);
        s1.display(s1.head);

        System.out.println(s1.getLength(s1.head));

        s1.searchKey(30);

        singly1 s2 = new singly1();

        s2.insertAtLast(10);
        s2.insertAtLast(20);
        s2.insertAtLast(30);
        s2.insertAtLast(40);
        s2.insertAtLast(50);
        s2.insertAtPosition(70, 4);

        // s1.insertAtPosition(100, 10);

        s2.display(s2.head);

    }
}
