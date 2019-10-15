 #include<bits/stdc++.h> 
using namespace std; 

string newkey(string msg, string key) 
{ 
	int x = msg.size(); 

	for (int i = 0; ; i++) 
	{ 
		if (x == i) 
			i = 0; 
		if (key.size() == msg.size()) 
			break; 
		key.push_back(key[i]); 
	} 
	return key; 
} 
string encryption(string msg, string key) 
{ 
	string e_msg; 

	for (int i = 0; i < msg.size(); i++) 
	{ 
		int x = (msg[i] + key[i]) %26;  
		x += 'A'; 

		e_msg.push_back(x); 
	} 
	return e_msg; 
}  
string decryption(string e_msg, string key) 
{ 
	string d_msg; 

	for (int i = 0 ; i < e_msg.size(); i++) 
	{ 
		int x = (e_msg[i] - key[i] + 26) %26; 
		x += 'A'; 
		d_msg.push_back(x); 
	} 
	return d_msg; 
} 


int main() 
{ 
	string msg; 
	string keyword;
    cout<<"enter msg: ";
    getline(cin,msg);
    cout<<"enter keyword: ";
    getline(cin,keyword); 

	string key = newkey(msg, keyword); 
	string cipher_text = encryption(msg, key); 

	cout << "Ciphertext : "<< cipher_text << "\n"; 

	cout << "Decrypted Text : "<< decryption(cipher_text, key); 
	return 0; 
} 
