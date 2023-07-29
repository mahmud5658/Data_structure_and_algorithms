package Java.LinkedList.SinglyLinkedList;

public class singly2 {
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

    public singly2() {
        this.head = null;
        this.length = 0;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public int length() {
        return length;
    }

    // reverse singly linked list
    public void reverse() {
        if (isEmpty()) {
            throw new RuntimeException("linked list empty");
        }
        ListNode previous = null;
        ListNode current = head;
        ListNode next = null;
        while (current != null) {
            next = current.next;
            current.next = previous;
            previous = current;
            current = next;
        }
        head = previous;
    }

    // insert node at end of the linked list
    public void insert(int data) {
        ListNode node = new ListNode(data);
        if (isEmpty()) {
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

    // display the linked list
    public void display(ListNode head) {
        if (isEmpty()) {
            throw new RuntimeException("Linked is empty");
        }
        ListNode current = head;
        while (current != null) {
            System.out.print(current.data + "-->");
            current = current.next;
        }
        System.out.println("null");
    }

    // delete first node
    public void deleteFirst(){
        ListNode current= head;
        ListNode temp = head;
        current = current.next;
        temp.next = null;
        head = current;
    }
    // delete lastNode
    public void deleteLast(){
        ListNode current = head;
        while(current.next.next!=null){
            current = current.next;
        }
        current.next = null;
    }

    // delete middle node from linked list

    public void deleteMiddle(){
        ListNode faster = head;
        ListNode middle = head;
        ListNode previous = null;
        ListNode last = null;
        while(faster!=null && faster.next!=null){
            faster = faster.next.next;
            previous = middle;
            middle = middle.next;
            last = middle.next;
        }
        middle.next = null;
        previous.next = last;
    }
    // delete node at given position
    public void deleteoPosition(int position){
        if(position==1){
            head = head.next;
            return;
        }
        int counter=1;
        ListNode current = head;
        ListNode previous = null;
        ListNode last = null;
        while(counter<position){
            previous = current;
            current = current.next;
            last = current.next;
            counter++;
        }
        previous.next = last;
    }

    public static void main(String[] args) {
        singly2 s1 = new singly2();

        s1.insert(10);
        s1.insert(20);
        s1.insert(30);
        s1.insert(40);
        s1.insert(50);
        s1.display(s1.head);
        // s1.reverse();
        // s1.display(s1.head);

        // s1.deleteFirst();
        // s1.display(s1.head);

        // s1.deleteLast();
        // s1.display(s1.head);

        // s1.deleteMiddle();
        // s1.display(s1.head);
        // s1.deleteMiddle();
        // s1.display(s1.head);

        s1.deleteoPosition(3);
        s1.display(s1.head);
    }
}
