int pwm1A = 2;//mddA
int pwm2A = 3;//mddA
int dir1A = 4;//mddA
int dir2A = 5;//mddA

int pwm1B = 6;//mddB
int pwm2B = 7;//mddB
int dir1B = 8;//mddB
int dir2B = 9;//mddB

int Speed_RightJoystickRX;
int Speed_RightJoystickRY;
int Speed_LeftJoystickLX;
int Speed_LeftJoystickLY;

int Speed_ACW_L2;
int Speed_CW_R2;

int LX, LY, RX, RY;
int L2, R2;

int UP,DOWN,LEFT,RIGHT;

int leftJoy_min_speed = 0;
int leftJoy_max_speed = 100;
int rightJoy_min_speed = 0;
int rightJoy_max_speed = 50;

int L2_ACW_min_speed = 0;
int L2_ACW_max_speed = 100;
int R2_CW_min_speed = 0;
int R2_CW_max_speed = 100;

int LX_Buffer_Right = 40;
int LX_Buffer_Left = -40;
int LY_Buffer_Forward = -40;
int LY_Buffer_Backward = 40;

int RX_Buffer_Right = 40;
int RX_Buffer_Left = -40;
int RY_Buffer_Forward = -40;
int RY_Buffer_Backward = 40;

int botStop_speed = 0;

//Stepper Pins
int pulsePinA = 10;
int enablePinA = 22;
int dirA = 23;
int pulsePinB = 11;
int enablePinB = 24;
int dirB = 25;

int Triangle;
int Cross;

int dirPinA_fly = 26;
int pwmPinA_fly = 12;
int dirPinB_fly = 27;
int pwmPinB_fly = 13;

int L1,R1;
int motorSpeed_L1,motorSpeed_R1;

int dirPinA_belt = 28;
int pwmPinA_belt = 44;

int motorSpeed = 100;
int Circle,Square;

  int indexA;
  int indexB;
  int indexC;
  int indexD;
  int indexE;
  int indexF;
  int indexG;
  int indexH;
  int indexI;
  int indexJ;
  int indexK;
  int indexL;
  int indexM;
  int indexN;
  int indexO;
  int indexP;

  String data1;
  String data2;
  String data3;
  String data4;
  String data5;
  String data6;
  String data7;
  String data8;
  String data9;
  String data10;
  String data11;
  String data12;
  String data13;
  String data14;
  String data15;
  String data16;

  String datain;

  int Buffer_positive = 100;
  int Buffer_negative = -100;

  int solenoidSwitch_1 = 29;
  int solenoidSwitch_2 = 30;

  //Ball shoot mechanism variables
  int sensorPin = A0; // proximity sensor pin
  int sensorRead; // proximity sensor read
  int flag_left=0;
  int c_left=0;
  int flag_right=0;
  int c_right=0;

void setup()
{
  pinMode(pulsePinA,OUTPUT);
  pinMode(enablePinA,OUTPUT);
  pinMode(dirA,OUTPUT);
  pinMode(pulsePinB,OUTPUT);
  pinMode(enablePinB,OUTPUT);
  pinMode(dirB,OUTPUT);
  digitalWrite(enablePinA,HIGH);
  digitalWrite(enablePinB,HIGH);
  digitalWrite(pulsePinA,LOW);
  digitalWrite(pulsePinA,LOW);
  
  
  pinMode(pwm1A, OUTPUT);
  pinMode(dir1A, OUTPUT);
  pinMode(pwm2A, OUTPUT);
  pinMode(dir2A, OUTPUT);

  pinMode(pwm1B, OUTPUT);
  pinMode(dir1B, OUTPUT);
  pinMode(pwm2B, OUTPUT);
  pinMode(dir2B, OUTPUT);

  pinMode(dirPinA_fly,OUTPUT);
  pinMode(pwmPinA_fly,OUTPUT);
  pinMode(dirPinB_fly,OUTPUT);
  pinMode(pwmPinB_fly,OUTPUT);

  pinMode(dirPinA_belt,OUTPUT);
  pinMode(pwmPinA_belt,OUTPUT);

  pinMode(solenoidSwitch_1,OUTPUT);
  pinMode(solenoidSwitch_2,OUTPUT);

  pinMode(sensorPin,INPUT); // proximity sensor pin

  Serial.begin(115200);
  Serial2.begin(57600);
}

void loop()
{
  
  parse_data_condition();
  base_chassis_condition();
  stepper_acctuator_condition();
  fly_wheel_condition();
  conveyer_belt_condition();
  pneumatic_condition();
  
  // ball shoot functions
  toggleSwitch_LEFT();
  toggleSwitch_RIGHT();
  flyWheel_START_Condition();
  flyWheel_STOP_Condition();
  
  datain=""; 
}
