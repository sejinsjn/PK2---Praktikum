namespace FuhrparkN{
    using AutoN;
    using LinkedListN;
    using IteratorN;
    using System;

    public class Fuhrpark{
        LinkedList<Auto> fuhrpark;

        public Fuhrpark(){
            fuhrpark = new LinkedList<Auto>();
        }

        public void Aufnehmen(Auto auto){
            fuhrpark.Add(auto);
        }

        public void Inventur(){
            Iterator<Auto> iter = new ListIterator<Auto>(fuhrpark.GetHead());

            while(iter.HasNext()){
                Auto auto = iter.Next();
                Console.WriteLine("Hersteller: {0} Baujahr: {1}", auto.Hersteller, auto.Baujahr);
            }
        }
    }
}