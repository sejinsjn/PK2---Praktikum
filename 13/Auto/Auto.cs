namespace AutoN{
    using System;

    public class Auto{

        private string hersteller;
        public string Hersteller{
            get { return hersteller; }
            set { hersteller = value; }
        }
        public int Baujahr{get; set;}

        public Auto(string hersteller, int baujahr){
            Hersteller = hersteller;
            Baujahr = baujahr;
        }

        public void DruckeDaten(){
            Console.WriteLine("Hersteller: {0}, Baujahr: {1}", Hersteller, Baujahr);
        }
    }
}