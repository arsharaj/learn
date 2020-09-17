// Full C++ Tutorial - Basics

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <vector>
#include <numeric>
#include <cmath>
#include <ctime>

using namespace std;


void DoubleArray(int* arr, int size);
void AssignAge3(int* age);
int AssignAge2(int age);
double AddNumber(double num1, double num2);
void AssignName();
void AssignAge(int age);

int iamGlobal = 0;
const double PI = 3.14;

int main(int argc, char const *argv[])
{
    cout << "Hello World" << endl;

    bool married = true;
    char myGrade = 'A';
    short int smallNum = 10;

    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Min signed short int " << numeric_limits<signed short int>::min() << endl;
    cout << "Min signed short int " << numeric_limits<signed short int>::max() << endl;
    cout << "Min Int " << numeric_limits<int>::min() << endl;
    cout << "Max Int " << numeric_limits<int>::max() << endl;
    cout << "Max Long " << numeric_limits<long>::min() << endl;
    cout << "Max Long " << numeric_limits<long>::max() << endl;
    cout << "Float " << numeric_limits<float>::min() << endl;
    cout << "Double " << numeric_limits<double>::max() << endl;

    double f1 = 1.1111111;
    double f2 = 1.1111111;

    printf("Sum = %.16f \n", f1 + f2);

    auto whatAmI  = true;

    cout << "Int Byte : " << sizeof(int) << endl;

    printf("%c %d %5d %.3f %s \n", 'A', 10, 3, 3.14, "Hi");

    string qi = "Enter a number : ";
    string nnum1, nnum2;
    cout << qi;
    cin >> nnum1;
    cout << "Enter another number : ";
    cin >> nnum2;
    int num1 = stoi(nnum1);
    int num2 = stoi(nnum2);
    printf("%d + %d = %d \n", num1, num2, (num1 + num2));
    printf("%d - %d = %d \n", num1, num2, (num1 - num2));
    printf("%d * %d = %d \n", num1, num2, (num1 * num2));
    printf("%d / %d = %d \n", num1, num2, (num1 / num2));
    printf("%d %% %d = %d \n", num1, num2, (num1 % num2));

    // Conditionals - > < >= <= == !=
    // Logical - && || !
    string sAge;
    cout << "Enter your Age : ";
    cin >> sAge;
    int nAge = stoi(sAge);

    if((nAge >= 1) && (nAge <= 18))
    {
        cout << "Important Birthday" << endl;
    }
    else if((nAge == 21) || (nAge == 50))
    {
        cout << "Important Birthday" << endl;
    }
    else if(nAge >= 65)
    {
        cout << "Important Birthday" << endl;
    }
    else
    {
        cout << "Not an important birthday" << endl;
    }
    
    // Ternary Operator
    int age = 43;
    bool canIVote = (age >= 18) ? true : false;
    cout.setf(ios::boolalpha);
    cout << "Can Derek Vote" << canIVote << endl;

    int arrNums[10] = {1};
    int arrNums2[] = {1, 2, 3};
    int arrNums3[5] = {8, 9};
    cout << "1st Value : " << arrNums3[0] << endl;
    arrNums3[0] = 7;
    cout << "1st Value : " << arrNums3[0] << endl;

    int arrNums4[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    cout << arrNums4[1][1][1] << endl;

    vector<int> vNums(2);
    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(3);
    cout << "Vector Size : " << vNums.size() << endl;

    int i = 1;
    while(i <= 20)
    {
        if((i % 2) == 0)
        {
            i += 1;
            continue;
        }
        if(i == 15)
        {
            break;
        }
        cout << i << endl;
        i += 1; 
    }

    vector<string> words;
    stringstream ss("Some random words");
    string word;
    while(getline(ss, word, ' '))
    {
        words.push_back(word);
    }
    for(int i = 0; i < words.size(); ++i)
    {
        cout << words[i] << endl;
    }


    int arr3[] = {1, 2, 3};
    for(auto x: arr3)
    {
        cout << x << endl;
    }

    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    do 
    {
        cout << "Guess the number : ";
        cin >> guess;
        if(guess > secretNum) cout << "To Big \n";
        if(guess < secretNum) cout << "To Small \n";
    }
    while(secretNum != guess);
    cout << "You guessed it!" << endl;

    string str1 = "I'm a string";
    cout << "1st : " << str1[0] << endl;
    cout << "Last : " << str1.back() << endl;
    cout << "Length : " << str1.length() << endl;
    string str2 = str1;
    string str3(str2, 4);
    string str4 = str1 + " and your not";
    str4.append("!");
    str4.erase(12, str4.length() - 1);
    cout << "New String " << str4 << endl;
    if(str4.find("string") != string::npos)
    {
        cout << "String index : " << str4.find("string") << endl; 
    } 
    cout << "Substring : " << str4.substr(6, 6) << endl;
    string strNum = to_string(1 + 2);
    cout << "I'm a string : " << strNum << endl;

    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number " << isalnum(letterZ) << endl;
    cout << "Is z a letter or number " << isalpha(letterZ) << endl;
    cout << "Is 5 a letter or number " << isdigit(num5) << endl;
    cout << "Is space a space or number " << isspace(aSpace) << endl;


    cout << "abs(-10) : " << abs(-10) << endl;
    cout << "max(5, 4) : " << max(5, 4) << endl;
    cout << "min(5, 4) : " << min(5, 4) << endl;
    cout << "fmax(5.3, 4,4) : " << fmax(5.3, 4.4) << endl;
    cout << "fmin(5.3, 4,4) : " << fmin(5.3, 4.4) << endl;
    cout << "ceil(5.3) : " << ceil(5.3) << endl;
    cout << "floor(5.3) : " << floor(5.3) << endl;
    cout << "round(10.45) : " << round(10.45) << endl;
    cout << "pow(2, 3) : " << pow(2, 3) << endl;
    cout << "sqrt(100) : " << sqrt(100) << endl;
    cout << "cbrt(1000) : " << cbrt(1000) << endl;
    cout << "exp(1) : " << exp(1) << endl;
    cout << "exp2(1) : " << exp2(1) << endl;
    cout << "log(20.079) : " << log(20.079) << endl; 
    cout << "log2(8) : " << log2(8) << endl; 
    cout << "hypot(2, 3) : " << hypot(2,3) << endl; 

    printf("%.1f + %.f = %.1f\n", 5.0, 4.0, AddNumber(5.0 , 4.0));

    int age = 43;
    AssignAge3(&age);
    cout << age << endl;

    int age2 = 22;
    int* pAge2 = NULL;
    pAge2 = &age2;
    cout << "Address : " << pAge2 << endl;
    cout << "Value : " << *pAge2 << endl;

    int intArray[] = {1, 2, 3, 4};
    int* pIntArray = intArray;
    cout << "1st : " << pIntArray << endl;
    pIntArray++;
    cout << "2st : " << pIntArray << endl;

    DoubleArray(intArray, 4);

    for(int i = 0; i < 4; i++)
    {
        cout << "Array " << intArray[i] << endl;
    }

    double num3 = 10, num4 = 0;
    try
    {
        if(num4 == 0)
        {
            throw "Division by Zero Error";
        }
        else
        {
            printf("%.1f / %.1f = %.1f", num3, num4, (num3 / num4));
        }
        
    }
    catch(const char* exp)
    {
        cout << "Error : " << exp << '\n';
    }

    return 0;
}

double AddNumber(double num1 = 0, double num2 = 0)
{
    return (num1 + num2);
}

void AssignName()
{
    string name = "Derek";
}

void AssignAge(int age)
{
    age = 24;
}

int AssignAge2(int age)
{
    age = 24;
    return age;
}

void AssignAge3(int* agePtr)
{
    *agePtr = 22; 
}

void DoubleArray(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}