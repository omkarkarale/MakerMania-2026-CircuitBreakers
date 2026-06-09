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

}

void loop() {
  uint32_t time =100;
  for(int i=0;i<8;i++){
    digitalWrite(arr[i],1);
    delay(time);
  }
  for(int i=0;i<8;i++){
    digitalWrite(arr[i],0);
    delay(time);
  }
}
