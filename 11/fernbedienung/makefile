main: commands.dll rc.dll main.cs
	mcs -out:main.exe -r:commands.dll,rc.dll main.cs

commands.dll: devices.dll commands/Command.cs commands/CdStart.cs commands/CdStop.cs commands/GarageHoch.cs commands/GarageRunter.cs
	mcs -t:library -out:commands.dll -r:devices.dll commands/Command.cs commands/CdStart.cs commands/CdStop.cs commands/GarageHoch.cs commands/GarageRunter.cs

devices.dll: devices/CdPlayer.cs devices/Garagentor.cs
	mcs -t:library -out:devices.dll devices/CdPlayer.cs devices/Garagentor.cs

rc.dll: commands.dll RemoteControl.cs
	mcs -t:library -out:rc.dll -r:commands.dll RemoteControl.cs

clean:
	rm main commands.dll devices.dll rc.dll