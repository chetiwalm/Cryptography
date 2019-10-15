#include<iostream>
using namespace std;
string encryption(string msg,int key1,int key2){
  string ans;
  for(int i=0;i<msg.size();i++){
     ans += char((((int(msg[i]-65)*key1)+key2))%26 + 65);
  }
  return ans;
}
int keyinv(int key){
  int keyin;
  for(int i=0;i<26;i++){
    if((key*i)%26==1)
     keyin=i;
  }
  return keyin;
}
  string decryption(string msg,int key1,int key2){
  string ans;
  for(int i=0;i<msg.size();i++){
    ans += char((((int(msg[i]-65)-key2)*key1))%26 + 65);
  }
  return ans;
}
int main(int args,char **argv){
    string msg;
    int key1,key2;
    cout<<"ENTER MESSAGE : ";
    getline(cin,msg);
    cout<<"ENTER KEY1 AND KEY2 : ";
    cin>>key1>>key2;
    cout<<"ENCRYPTED MESSAGE : "<<encryption(msg,key1,key2)<<endl;
    string enc=encryption(msg,key1,key2);
    int x=keyinv(key1);
    cout<<"DECRYPTED MESSAGE : "<<decryption(enc,x,key2)<<endl;
}