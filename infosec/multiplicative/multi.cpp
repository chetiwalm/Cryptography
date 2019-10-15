#include<iostream>
using namespace std;
string encryption(string msg,int key){
  string ans;
  for(int i=0;i<msg.size();i++)
  {
    if(isupper(msg[i]))
      ans +=char((int(msg[i]-65)*key)%26 + 65);
    else
      ans +=char((int(msg[i]-97)*key)%26 + 97);   
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
string decryption(string msg,int key){
  string result;
  for(int i=0;i<msg.size();i++){
    if(isupper(msg[i]))
        result += char((int(msg[i]-65)*key)%26 + 65);
        else
        result += char((int(msg[i]-97)*key)%26 + 97);
  }
  return result;
}
int main(int args,char ** argv){
    string msg;
    int key;
    cout<<"ENTER MESSAGE : ";
    getline(cin,msg);
    cout<<"ENTER KEY : ";
    cin>>key;
    int y=keyinv(key);
    string x=encryption(msg,key);
    cout<<encryption(msg,key)<<endl;
    cout<<decryption(x,y)<<endl;
}