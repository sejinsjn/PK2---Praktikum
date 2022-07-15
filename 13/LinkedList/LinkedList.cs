namespace LinkedListN{
    using System;

    public class LinkedList<T>{
        Node<T> head;
        Node<T> end;

        public int Count {get; set;}

        public LinkedList(){
            head = new Node<T>();
            end = new Node<T>();
        }

        public Node<T> GetHead(){
            return head;
        }

        public void Add(T element){
            Node<T> newN = new Node<T>(element);
            
            if(head.element == null){
                head = newN;
                end = newN;
                Count++;
                return;
            }
            
            Node<T> tmp = end;
            tmp.next = newN;
            end = newN; 
            Count++;
        }

        public void Remove(int i){
            Node<T> current = head;
            int p = 0;

            if(i == 0 && head != null || head.next == null) {
                head = head.next;
                Count--;
                return;
            }

            while(current.next.next != null){
                if(i-1 == p++){
                    current.next = current.next.next;
                    Count--;
                    break;
                }
                current = current.next;
            }
        }

        public T GetElement(int i){
            Node<T> current = head;
            int p = 0;

            while(current.next != null){
                if(i == p++) return current.element;

                current = current.next;
            }

            return default(T);
        }

        public T this[int i]{
            get{ 
                try{
                    if(i < 0 || i > Count) throw new IndexOutOfRangeException("Index ist leer!");
                    return GetElement(i);
                }catch(IndexOutOfRangeException e){
                    Console.WriteLine(e.Message);
                    return default(T);
                }
            }
            set{ 
                try{
                    if(i != Count) throw new IndexOutOfRangeException("Index darf nur der aktuelle Listen-Count sein!");
                    Add(value);
                }catch(IndexOutOfRangeException e){
                    Console.WriteLine(e.Message);
                }
            }
        }
    }

    class ListIterator<T> : Iterator<T>{

        Node<T> head;

        public ListIterator(Node<T> head){
            this.head = head;
        }

        public override bool HasNext(){
            if(head.next != null) return true;
            return false;
        }

        public override T Next(){
            Node<T> tmp = head;
            head = head.next;
            return tmp.element;
        }
    }

    public class Node<T>{
        public T element;
        public Node<T> next;

        public Node(){
            element = default(T);
        }

        public Node(T element){
            this.element = element;
            next = new Node<T>();
        }
    }
}