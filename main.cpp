#include<iostream>

using namespace std;

//предварительное объявления функций
int p_add(int, int);
int p_sub(int, int);
int p_mult(int, int);
int p_div(int, int);
double fuel_mass(double, double);
double fuel_vol(double, double);


int main(){

    int a, b; //переменные для хранения значений
    char value; //переменная для хранения выбора действия

    cout <<"Welcome to the calculator!" << endl;
    cout <<"Выберите одно из действий:" << endl;
    cout <<" Addition (+)\n Subtraction (-)\n Multiplication (*)\n Division (/)\n Fuel mass calculation (m)\n Fuel volume calculation (v)" << endl;

    cin >> value;  //принимаем значение от пользователя

    switch (value)
    {
    case '+':
        cout << "Enter first value:" << endl;
        cin >> a;

        cout << "Enter the second value" << endl;
        cin >> b;
        
        cout << "The sum is equal: " << p_add(a,b);

        break;

    case '-':
        cout << "Enter first value:" << endl;
        cin >> a;

        cout << "Enter the second value" << endl;
        cin >> b;
        
        cout << "The sum is equal: " << p_sub(a,b);

        break;
    
    case '*':
        cout << "Enter first value:" << endl;
        cin >> a;

        cout << "Enter the second value" << endl;
        cin >> b;
        
        cout << "The sum is equal: " << p_mult(a,b);

        break;
    
    case '/':
        cout << "Enter first value:" << endl;
        cin >> a;

        cout << "Enter the second value" << endl;
        cin >> b;
        
        cout << "The sum is equal: " << p_div(a,b);

        break;
    
    default:

        cout << "There is no such option!";
        break;
    }

    return 0;

}

/*Базавое сложение, принимает два параметра a и b*/
int p_add(int a, int b){ return a + b;}

/*Базавое вычитание, принимает два параметра a и b*/
int p_sub(int a, int b){ return a - b;}

/*Базавое умножение, принимает два параметра a и b*/
int p_mult(int a, int b){ return a * b;}

/*Базавое деление, принимает два параметра a и b*/
int p_div(int a, int b){

    if (b > 0){
        return a / b;
    }
    else{
        cout << "You can't divide by zero!";
        return -1;
    }
}

/*Функция определения массы топлива принимает на вход два параметра
плотность топлива (ro) и объем топлива (vol)*/
double fuel_mass(double ro, double vol){
    cout << "enter fuel density (ro)" << endl;
    cin >> ro;

    cout << "enter fuel volume (vol)" << endl;
    cin >> vol;

    return vol * ro;
}

/*Функция определения объема топлива принимает на вход два параметра
плотность топлива (ro) и масса топлива (м)*/
double fuel_vol(double ro, double m){
    cout << "enter fuel density (ro)" << endl;
    cin >> ro;

    cout << "enter fuel mass (m)" << endl;
    cin >> m;

    if (ro > 0){
        return m / ro;
    }else{
        cout <<"You can't divide by zero!";
        return -1;

    }
    
}