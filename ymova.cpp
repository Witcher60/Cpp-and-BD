// Present: Misha Nazarchuk
// Date: 10/03/2025

// Task 1
// Калькулятор з If/else

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     cout << "Введіть числа над якими хочете виконати операції: ";
//     cin >> a >> b;
//     cout << "Тепер виберіть операцію яку хочете виконати: \n";
//     cout << "1. Додавання\n";
//     cout << "2. Віднімання\n";
//     cout << "3. Множення\n";
//     cout << "4. Ділення\n";
//     cin >> c;
//     if (a == 0 || b == 0) {
//         cout << "Ви ввели неправильні дані";}
//     else if (c == 1) {
//         cout << "Ви вибрали додавання. Результат: " << a + b;}
//     else if (c == 2) {
//         cout << "Ви вибрали віднімання. Результат: " << a - b;} 
//     else if (c == 3) {
//         cout << "Ви вибрали множення. Результат: " << a * b;} 
//     else if (c == 4) {
//         cout << "Ви вибрали ділення. Результат: " << a / b;} 
//     else {
//         cout << "Ви вибрали неправильну дію";}
// }
// Task 1
// Калькулятор з Switch
// int main() {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     cout << "Введіть числа над якими хочете виконати операції: ";
//     cin >> a >> b;
//     cout << "Тепер виберіть операцію яку хочете виконати: \n";
//     cout << "1. Додавання\n";
//     cout << "2. Віднімання\n";
//     cout << "3. Множення\n";
//     cout << "4. Ділення\n";
//     cin >> c;
//     switch (c) {
//         case 1:
//             cout << "Ви вибрали додавання. Результат: " << a + b;
//             break;
//         case 2:
//             cout << "Ви вибрали віднімання. Результат: " << a - b;
//             break;
//         case 3:
//             cout << "Ви вибрали множення. Результат: " << a * b;
//             break;
//         case 4:
//             cout << "Ви вибрали ділення. Результат: " << a / b;
//             break;
//         default:
//             cout << "Ви вибрали неправильну дію";
//             break;
//     }
// }


// Мольфар 4000
#include <iostream>
using namespace std;


int main(){
    cout << "Введіть ваше ім'я: ";
    string name;
    cin >> name;
    cout << "Вітаємо, " << name << "!\n";
    cout << "Ви граєте в 'Мольфар 4000'.\n";
    cout << "Напишіть ваше питання: ";
    string question;
    cin >> question;
    srand (time(0));
    int answer = rand() % 102;
    if (answer < 5){
        cout << "Так\n";}
    else if (answer < 10){
        cout << "Ні\n";}
    else if (answer < 15){
        cout << "Можливо\n";}
    else if (answer < 20){
        cout << "Цього ніколи не станеться\n";}
    else if (answer < 25){
        cout << "Ви пошкодуєте про це\n";}
    else if (answer < 30){
        cout << "Ви знайдете щастя\n";}
    else if (answer < 35){
        cout << "Ви зустрінете свою любов\n";}
    else if (answer < 40){
        cout << "Це невідомо нікому\n";}
    else if (answer < 45){
        cout << "Ви знайдете своє покликання\n";}
    else if (answer < 50){
        cout << "Все у ваших руках\n";}
    else if (answer < 55){
        cout << "Ви зробите правильний вибір\n";}
    else if (answer < 60){
        cout << "Це вам не допоможе\n";}
    else if (answer < 65){
        cout << "Ви знайдете відповідь\n";}
    else if (answer < 70){
        cout << "Я не можу точно сказати\n";}
    else if (answer < 75){
        cout << "Це станеться але коли невідомо\n";}
}
        
    