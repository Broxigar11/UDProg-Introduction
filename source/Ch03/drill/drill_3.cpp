#include "../../std_lib_facilities.h"

int main(){
    cout << "Enter the name of the person you want to write to:" << endl;
    string first_name;
   
    cin >> first_name;
    cout << "Dear " << first_name << ", " << endl;
   
    cout << endl << "\tHow are you? I am fine. I miss you. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed a mi eu purus finibus sagittis. Mauris euismod feugiat nisl, a porttitor dolor aliquet ullamcorper. Quisque euismod gravida leo." << endl << endl;

    string friend_name;
    cout << "Enter the name of another friend: ";
    cin >> friend_name;
    cout << endl << "Have you seen " << friend_name << " lately?" << endl;
   
    char friend_sex;
    cout << endl << "Enter the sex of the friend (m/f):";
    do{
        cin >> friend_sex;
        if(friend_sex!='m' && friend_sex!='f') cout << "Invalid sex! Enter the sex of the friend (m/f): ";
    }while(friend_sex!='m' && friend_sex!='f');
   
    cout << endl << "If you see " << friend_name << " please ask ";
    if(friend_sex=='m')
         cout << "him";
    else
         cout << "her";
   
    cout << " to call me." << endl;
   
    int age;
    cout << endl << "Enter the age of the recipient: ";
    cin >> age;
    
    if (age<0 || age>110) simple_error("you're kidding!");

    cout << endl << "I hear you just had a birthday and you are " << age << " years old." << endl;
    if(age<12) cout << "Next year you will be " << age+1 << "." << endl;
    if(age==17) cout << "Next year you will be able to vote." << endl;
    if(age>70) cout << "I hope you are enjoying retirement." << endl;

    cout << endl << "Yours sincerely," << endl << "David" << endl;

    return 0;
}