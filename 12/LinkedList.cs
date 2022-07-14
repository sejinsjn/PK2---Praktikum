namespace LinkedListN{
    using IteratorN;

    public class LinkedList<T>{
        Node<T> head;
        Node<T> end;

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
                return;
            }
            
            Node<T> tmp = end;
            tmp.next = newN;
            end = newN;
        }

        public void Remove(int i){
            Node<T> current = head;
            int p = 0;

            if(i == 0 && head != null || head.next == null) {
                head = head.next;
                return;
            }

            while(current.next.next != null){
                if(p-1 == i++){
                    current.next = current.next.next;
                    break;
                }
                current = current.next;
            }
            current.next = null;
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