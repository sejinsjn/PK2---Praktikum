using System;

using Fh.Pk2.Rc;
using Fh.Pk2.Commands;

class Hauptprogramm {
  static void Main() {
    RemoteControl rc = new RemoteControl();

    rc.setCommand(0, new CdStart(), new CdStop());
    rc.setCommand(2, new GarageHoch(), new GarageRunter());

    rc.pressOn(0);
    rc.pressOn(2);
    rc.pressOff(0);
    rc.pressOff(2);
  }
}