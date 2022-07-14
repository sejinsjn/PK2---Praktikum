namespace Fh{
    namespace Pk2{
        namespace Commands{
            using System;
            using Devices;

            public class GarageRunter : Command{

                GaragenTor gt;
                 
                public GarageRunter(){ gt = new GaragenTor(); }

                public override void execute(){ gt.runter(); }
            }
        }
    }
}