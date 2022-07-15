using AutoN;
using LinkedListN;
using System;

public class main{


    static void Main() {
         Fuhrpark fuhrpark = new Fuhrpark();
        Info info = new Info(fuhrpark);

        fuhrpark.Aufnehmen(new Auto("Audi", 2005));
        fuhrpark.Aufnehmen(new Auto("BMW", 2017));
        fuhrpark.Aufnehmen(new Auto("VW", 2018));

        Console.WriteLine("Gesamte Flotte:");
        fuhrpark.Inventur();

        Rational a = new Rational(2, 4);
        Rational b = new Rational(9, 5);
        Rational c = a * b;

        Console.WriteLine("{0} * {1} = {2}", a, b, c);
    }
}