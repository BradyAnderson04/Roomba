#pragma config(Motor,  port2,           motor1,        tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while(1==1){
	setMotor(motor1, 127);
	wait(5);
	stopMotor(motor1);
}
}
