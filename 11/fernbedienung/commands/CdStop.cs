namespace Fh{
    namespace Pk2{
        namespace Commands{
            using System;
            using Devices;

            public class CdStop : Command{

                CdPlayer cdp;
                 
                public CdStop(){ cdp = new CdPlayer(); }

                public override void execute(){ cdp.stop(); }
            }
        }
    }
}