namespace Fh{
    namespace Pk2{
        namespace Rc{

            using System;
            using Commands;

            public class RemoteControl{

                Command[,] command;

                public RemoteControl(){
                    command = new Command[4,2];
                }

                public void setCommand(int i, Command on, Command off){
                    command[i,0] = on;
                    command[i,1] = off;
                }

                public void pressOn(int i){
                    command[i,0].execute();
                }

                public void pressOff(int i){
                    command[i,1].execute();
                }
            }  
        }
    }
}