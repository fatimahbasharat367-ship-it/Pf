# include <iostream>
using namespace std;
int main (){
float n1, n2;
char op;
cout <<"Enter the first number:" <<endl;
cin >> n1;
cout <<"Enter the second number:" <<endl;
cin >> n2;
cout <<"Enter the operator:";
cin >> op;
if(op == '+'){
cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
}
if(op == '-'){
cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
}
if(op == '*'){
cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
}
if(op == '/'){
cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
}

}