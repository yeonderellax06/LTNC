#include<iostream>

using namespace std;

int strlen (const char* a){
    int n=0;
    while (*a!='\0'){
        n++;
        a++;
    }
 return n;
}
char* reverse(char a[]){
    int n=strlen(a);
    char *st1= new char[n+1];
    int j=0;
    for (int i=n-1; i >=0; i--){
        st1[j]=a[i];
        j++;
    }
    st1[n]='\0';
 return st1;
}
char* delete_char (char a[], char c){
    int n=strlen(a);
    char *temp= new char [n+1];
    int j=0;
    for (int i = 0; i < n; i++)
    if (a[i]!= c){
        temp[j] = a[i];
        j++;
    }
    temp[j] = '\0';
    return temp;
}
char* pad_right(char a[], int n){
    int len = strlen(a);
 while (len < n){
    a[len]=' ';
    len++;
 }
 a[len]='\0';
 return a;
}

char* pad_left( char a[], int n){
    int len = strlen(a);
    if (len >= n) return(a);
    char *temp= new char [n+1];
    for (int i=0; i < (n-len); i++) temp[i]= ' ';
    for (int i=0; i< len; i++)
        temp[i+n-len]= a[i];
    temp[n]='\0';
    return temp;
}
char* truncate(char a[], int n){
    int len = strlen(a);
    if (len <=n) return (a);
    char* temp= new char[n+1];
    for (int i = 0; i < n; i++) temp[i]=a[i];
    temp[n]='\0';
    return temp;
}

bool is_palindrome(char a[]){
    char *temp = reverse(a);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
        if (a[i]!=temp[i]) return false;
    return (true);
}

char* trim_left(char a[]){;
    int i=0;
    while (a[i]==' ') i++;
    int len = strlen(a);
    char* temp = new char [len +1];
    int j=0;
    while (i<len){
        temp[j]=a[i];
        j++;
        i++;
    }
    return temp;
}

char* trim_right(char a[]){
    int len = strlen(a);
    int i= len-1;
    while (a[i] == ' ') i--;
    char* temp = new char[len + 1];
    for (int j = 0; j < i; j++) temp[j]=a[j];
    temp[i]='\0';
    return temp;
}

int main(){
    char *a=new char[100];
    cin >> a;
    char* temp= reverse(a);
    cout << temp <<endl;
    delete[] temp;
    char c;
    cin >> c;
    temp = delete_char(a,c);
    cout << temp << endl;
    delete[] temp;
    int n;
    cin >> n;
    temp = pad_right(a,n);
    cout << temp << endl;
    delete[] temp;
    cin >> n;
    temp = pad_left(a,n);
    cout << temp << endl;
    delete[] temp;
    cin >> n;
    temp = truncate(a, n);
    cout << temp << endl;
    delete[] temp;
    cout << "Kiem tra palindrome " << (is_palindrome(a) ? "Yes" : "No") << endl;



    delete[] a;
    return 0;
}
