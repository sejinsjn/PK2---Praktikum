public class Rational{

    public int A { get; set; }
    public int B { get; set; }

    public Rational(int a, int b){
        A = a;
        B = b;
    }

    public static Rational operator*(Rational r1, Rational r2){
        return new Rational(r1.A * r2.A, r1.B * r2.B);
    }

    public override string ToString(){
        return "(" + A + "/" + B + ")";
    }
}