namespace AutoN{
    using LinkedListN;
    using System;

    public class Fuhrpark{
        LinkedList<Auto> fuhrpark;
        public delegate void NewCarEventHandler(object sender, AutoEventArgs args);
        public event NewCarEventHandler NewCarEvent;

        public Fuhrpark(){
            fuhrpark = new LinkedList<Auto>();
        }

        public void Aufnehmen(Auto auto){
            fuhrpark.Add(auto);
            NewCarEvent.Invoke(this, new AutoEventArgs(auto));
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