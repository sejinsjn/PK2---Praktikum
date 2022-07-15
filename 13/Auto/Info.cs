namespace AutoN{
    using System;

    public class Info {
        public Info(Fuhrpark fuhrpark) {
            fuhrpark.NewCarEvent += printNewCarInfo;
        }

        public void printNewCarInfo(object sender, AutoEventArgs args) {
            System.Console.Write("Neues Auto: ");
            args.Auto.DruckeDaten();
        }
    }
}