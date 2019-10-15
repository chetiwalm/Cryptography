#include<bits/stdc++.h> 
using namespace std;
string encryption(string msg,int key){
  string ans;
  for(int i=0;i<msg.size();i++){
    if(isupper(msg[i]))
  ans += char(int(msg[i]+key-65)%26 +65);
  else
      ans += char(int(msg[i]+key-97)%26 +97);
}
  return ans;
}
string decryption(string msg,int key){
    string result;
    for(int i=0;i<msg.size();i++){
        if(isupper(msg[i]))
          result += char(int(msg[i]-key-65)%26 +65);
          else
            result += char(int(msg[i]-key-97)%26 +97);

   }
   return result;
}
int main(int args, char **argv)
{
    string msg;
    int key;
    cout<<"ENTER MSG : ";
    getline(cin,msg);
    cout<<"ENTER KEY : ";
    cin>>key;
    string x=encryption(msg,key);
    cout<<"ENCRYTED MSG : "<<encryption(msg,key)<<endl;
    cout<<"DECRYPTED MSG: "<<decryption(x,key)<<endl;
}
