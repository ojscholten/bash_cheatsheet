// data types
int inty;
long longy;
char chary;
float floaty;
double dubby;

// read in multiple integers
cin >> x >> y >> z;

// read in floats
cin.precision(10);  // to 10 decimal places
cin >> y;

// string to int
string s = "10";
int i = stoi(s); // stoi function is from #include <string>

// print to console
cout << x << endl;
// printing can get really advanced with things like
cout << setprecision(2) << scientific << showpos << setw(15) << right;

// conditionals
if (x == y){
  cout << "yee"; 
}
else{
  cout << "haw"; 
}

// arrays
int n = 10;
int arr[n];

// vectors
vector<int> numbers;

// array of vectors
vector<int> numbers[n];

// class definitions
class MyClass{
  public:
    int member_int;  
    // constructor
    MyClass(){
      // do things
    };    
};

// inheritence
class Square: public Shape{ ... };
