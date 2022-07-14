using FuhrparkN;
using AutoN;

public class main{


    static void Main() {
        Fuhrpark fp = new Fuhrpark();

        fp.Aufnehmen(new Auto{Hersteller = "Mercedes", Baujahr = 3929});
        fp.Aufnehmen(new Auto{Hersteller = "Mercedes", Baujahr = 3929});
        fp.Aufnehmen(new Auto{Hersteller = "Mercedes", Baujahr = 3929});
        fp.Aufnehmen(new Auto{Hersteller = "Mercedes", Baujahr = 3929});
        fp.Inventur();
    }
}