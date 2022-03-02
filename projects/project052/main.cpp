/*
          _____                    _____                    _____            _____                   _______         
         /\    \                  /\    \                  /\    \          /\    \                 /::\    \        
        /::\    \                /::\    \                /::\____\        /::\    \               /::::\    \       
       /::::\    \               \:::\    \              /:::/    /       /::::\    \             /::::::\    \      
      /::::::\    \               \:::\    \            /:::/    /       /::::::\    \           /::::::::\    \     
     /:::/\:::\    \               \:::\    \          /:::/    /       /:::/\:::\    \         /:::/~~\:::\    \    
    /:::/  \:::\    \               \:::\    \        /:::/    /       /:::/  \:::\    \       /:::/    \:::\    \   
   /:::/    \:::\    \              /::::\    \      /:::/    /       /:::/    \:::\    \     /:::/    / \:::\    \  
  /:::/    / \:::\    \    ____    /::::::\    \    /:::/    /       /:::/    / \:::\    \   /:::/____/   \:::\____\ 
 /:::/    /   \:::\ ___\  /\   \  /:::/\:::\    \  /:::/    /       /:::/    /   \:::\ ___\ |:::|    |     |:::|    |
/:::/____/     \:::|    |/::\   \/:::/  \:::\____\/:::/____/       /:::/____/     \:::|    ||:::|____|     |:::|    |
\:::\    \     /:::|____|\:::\  /:::/    \::/    /\:::\    \       \:::\    \     /:::|____| \:::\    \   /:::/    / 
 \:::\    \   /:::/    /  \:::\/:::/    / \/____/  \:::\    \       \:::\    \   /:::/    /   \:::\    \ /:::/    /  
  \:::\    \ /:::/    /    \::::::/    /            \:::\    \       \:::\    \ /:::/    /     \:::\    /:::/    /   
   \:::\    /:::/    /      \::::/____/              \:::\    \       \:::\    /:::/    /       \:::\__/:::/    /    
    \:::\  /:::/    /        \:::\    \               \:::\    \       \:::\  /:::/    /         \::::::::/    /     
     \:::\/:::/    /          \:::\    \               \:::\    \       \:::\/:::/    /           \::::::/    /      
      \::::::/    /            \:::\    \               \:::\    \       \::::::/    /             \::::/    /       
       \::::/    /              \:::\____\               \:::\____\       \::::/    /               \::/____/        
        \::/____/                \::/    /                \::/    /        \::/____/                 ~~              
         ~~                       \/____/                  \/____/          ~~                                       
                                                                                                                     
                                                                                                                     
                                                                                                                                                  
*/

typedef int32_t i64;
typedef long double ld;

i64 ___eroare;
// double ___senzori;
i64 ___SA0;
i64 ___SA1;
i64 ___SA2;
i64 ___SA3;
i64 ___SA4;
i64 _input_SA0 = A0;
i64 _input_SA1 = A1;
i64 _input_SA2 = A2;
i64 _input_SA3 = A3;
i64 _input_SA4 = A4;
i64 _output_PD4 = 4;
i64 _output_PD5 = 5;
i64 _output_PD6 = 6;
i64 _output_PD7 = 7;
i64 _output_PWM9 = 9;
i64 _output_PWM10 = 10;

i64 _led_L = 13;


void citesteSenzoriAnalogi() {
    ___SA0 = (i64)analogRead(_input_SA0);
    ___SA1 = (i64)analogRead(_input_SA1);
    ___SA2 = (i64)analogRead(_input_SA2);
    ___SA3 = (i64)analogRead(_input_SA3);
    ___SA4 = (i64)analogRead(_input_SA4);
}
 
void calculEroare() {
  //((___SA3 < 500) || (___SA4 < 500)) && ((___SA0 < 500) || (___SA1 < 500))
    if(___SA4 < 500){
      ___eroare = -2;
    } else if((___SA3 < 500) || (___SA4 < 500)) {
        ___eroare = -1;
    } else if((___SA0 < 500) || (___SA1 < 500)) {
        ___eroare = 1;
    } else {
        ___eroare = 0;
    }

//     if ( ___SA2 < 500 ) {
//         ___eroare = 0;
//     } else {
//         if ( ( ___SA0 < 500 ) || ( ___SA1 < 500 ) ) {
//             ___eroare = 1;
//         } else {
//             if ( ( ___SA3 < 500 ) || ( ___SA4 < 500 ) ) {
//                 ___eroare = -1;
//             }
//         }
//     }
}

void fullWrite(char dir) {
  if(dir == 'F') {
    digitalWrite(_output_PD4, HIGH);
    digitalWrite(_output_PD5, LOW);
    digitalWrite(_output_PD6, LOW);
    digitalWrite(_output_PD7, HIGH);

    Serial.print("Forward ");
  } else if(dir == 'R') {
    digitalWrite(_output_PD4, HIGH);
    digitalWrite(_output_PD5, LOW);
    digitalWrite(_output_PD6, LOW);
    digitalWrite(_output_PD7, LOW);

    Serial.print("Right ");
  } else if(dir == 'L') {
    digitalWrite(_output_PD4, LOW);
    digitalWrite(_output_PD5, LOW);
    digitalWrite(_output_PD6, LOW);
    digitalWrite(_output_PD7, HIGH);

    Serial.print("Left ");
  } else if (dir == 'X') {
    digitalWrite(_output_PD4, HIGH);
    digitalWrite(_output_PD5, LOW);
    digitalWrite(_output_PD6, HIGH);
    digitalWrite(_output_PD7, LOW);

    Serial.print("Hard Right ");
    } else {
    digitalWrite(_output_PD4, LOW);
    digitalWrite(_output_PD5, LOW);
    digitalWrite(_output_PD6, LOW);
    digitalWrite(_output_PD7, LOW);

    Serial.print("Off ");
  }

}
 
void controlMotoare() {
    // digitalWrite(_output_PD4, 1);
    // digitalWrite(_output_PD5, 0);
    // digitalWrite(_output_PD6, 0);
    // digitalWrite(_output_PD7, 1);
    analogWrite(_output_PWM9, 100);
    analogWrite(_output_PWM10,100);
    if ( ___eroare == 0 ) {
        fullWrite('F');
    } else {
        if ( ___eroare == -1 ) {
            fullWrite('R');
        } else if(___eroare == -2) {
            fullWrite('X');
        }else {
            fullWrite('L');
        }
    }
}
 
void setup() {
    Serial.begin(9600);
    pinMode(_input_SA0, INPUT);
    pinMode(_input_SA1, INPUT);
    pinMode(_input_SA2, INPUT);
    pinMode(_input_SA3, INPUT);
    pinMode(_input_SA4, INPUT);
    pinMode(_output_PD4, OUTPUT); 
    pinMode(_output_PD5, OUTPUT);
    pinMode(_output_PD6, OUTPUT);
    pinMode(_output_PD7, OUTPUT);
    pinMode(_output_PWM9, OUTPUT);
    pinMode(_output_PWM10, OUTPUT);
    
    pinMode(_led_L, OUTPUT);


    ___eroare = 0;
    // ___senzori = 5;
    ___SA0 = 0;
    ___SA1 = 0;
    ___SA2 = 0;
    ___SA3 = 0;
    ___SA4 = 0;
}
 
void loop()
{
    citesteSenzoriAnalogi();
    calculEroare();
    controlMotoare();
    Serial.print((i64)___SA0);
    Serial.print(" ");
    Serial.print((i64)___SA1);
    Serial.print(" ");
    Serial.print((i64)___SA2);
    Serial.print(" ");
    Serial.print((i64)___SA3);
    Serial.print(" ");
    Serial.print((i64)___SA4);
    Serial.println();
    delay(5);
    fullWrite('S');
    delay(27);
    
}