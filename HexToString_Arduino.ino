void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() 
{
  Serial.println(HexStrToStr("426F6e6a6f7572"));
  
  
}

String HexStrToStr(String hexString){
  String sortie = "";
  for(int i =0; i<hexString.length();i=i+2){
    char lettre = HEXToStr(char(hexString[i]) , char(hexString[i+1]));
    sortie =sortie + lettre;
  }
  return sortie;
}

char HEXToStr(char c1,char c2){
 char output=0;
  if(c1 <= '9' && c1 >= '0') output += c1-'0';
  if(c1 <= 'f' && c1 >= 'a') output += c1-'a'+0xA;
  if(c1 <= 'F' && c1 >= 'A') output += c1-'A'+0xA;
  output *= 0x10;
  if(c2 <= '9' && c2 >= '0') output += c2-'0';
  if(c2 <= 'f' && c2 >= 'a') output += c2-'a'+0xA;
  if(c2 <= 'F' && c2 >= 'A') output += c2-'A'+0xA;
  return output;
}
