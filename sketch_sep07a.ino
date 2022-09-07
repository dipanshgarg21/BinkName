void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int size;  
  char arr[] = "-.. .. .--. .- -. ... ....";  //Enter name in the morse code
  size = sizeof(arr)/sizeof(arr[0]);          //Counts the size of the array that consists of name in morse code

  for (int i = 0; i < size; i++)              //Iterates through morse code
  {   
    if (arr[i] == '.')                        //if...else conditions were used to check if the element is '.' or '-'
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
    }
    else if (arr[i] == '-')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(1500);
      digitalWrite(LED_BUILTIN, LOW);
    }
    else if (arr[i] == ' ')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(3000);
      digitalWrite(LED_BUILTIN, LOW);
    }
    delay(200);                             //An unnoticable delay after each blink
  }
}
