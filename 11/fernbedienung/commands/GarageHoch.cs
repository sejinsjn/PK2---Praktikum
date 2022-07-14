namespace Fh{
    namespace Pk2{
        namespace Commands{
            using System;
            using Devices;

            public class GarageHoch : Command{

                GaragenTor gt;
                 
                public GarageHoch(){ gt = new GaragenTor(); }

                public override void execute(){ gt.hoch(); }
            }
        }
    }
}