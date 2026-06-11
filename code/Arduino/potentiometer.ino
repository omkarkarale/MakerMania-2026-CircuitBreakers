// Define the pin connected to the internal LED
#define L1 16
#define L2 17
#define L3 25
#define L4 26
#define L5 27
#define L6 5
#define L7 18
#define L8 19
int arr[8]={L1,L2,L3,L4,L5,L6,L7,L8};
void setup() {
  // Initialize the LED pin as an output
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  digitalWrite(L1, HIGH);   
  digitalWrite(L2, HIGH);   
  digitalWrite(L3, HIGH);   
  digitalWrite(L4, HIGH);   
  digitalWrite(L5, HIGH);   
  digitalWrite(L6, HIGH);   
  digitalWrite(L7, HIGH);   
  digitalWrite(L8, HIGH);   
  Serial.begin(9600);

}
void loop(){

   for(int i=0;i<=8;i++){
      digitalWrite(arr[i],HIGH);
    }
    int pot = analogRead(33);
    pot= map(pot,0,4096,0,80);
    pot=pot/10;
    for(int i=0;i<=pot;i++){
      digitalWrite(arr[i],LOW);
    }

Serial.println();
  // }

  
}