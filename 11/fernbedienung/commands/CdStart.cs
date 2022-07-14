namespace Fh{
    namespace Pk2{
        namespace Commands{
            using System;
            using Devices;

            public class CdStart : Command{

                CdPlayer cdp;
                 
                public CdStart(){ cdp = new CdPlayer(); }

                public override void execute(){ cdp.start(); }
            }
        }
    }
}