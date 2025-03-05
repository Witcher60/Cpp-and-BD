// Present: Misha Nazarchuk
// Date: 05/03/2025

#include <iostream>
using namespace std;
auto const Pi = 3.14;
int main() {
// task 1
    float radius = 0;
    float area = 0;
    float length = 0;
    cout << "Введіть радіус окружності: ";
    cin >> radius;
    area = Pi * radius * radius;
    length = 2 * Pi * radius;
    cout << "Площа окружності: " << area << "\n";
    cout << "Довжина окружності: " << length << "\n";
    return 0;


// task 2

    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";    
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n"; 
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    //task 3
    cout << "Введіть вашу суму: ";
    float sum = 0;
    cin >> sum;
    int uan = sum;
    int kop = (sum - uan) * 100;
    cout << "Ваша сума: " << uan << " гривень " << kop << " копійок\n"; 

    //task 4
    cout <<"Введіть кількість секунд: ";
    int second = 0;
    cin >> second;
    int sec = second % 60;
    int min = (second / 60) % 60;
    int hour = (second / 3600) % 24;
    int day = (second / 86400);
    cout << "Кількість днів, годин, хвилин та секунд:\n";
    cout << day << " днів " << hour << " годин " << min << " хвилин " << sec << " секунд\n";

    //task 5
    int start_hour = 0;
    int start_min = 0;
    int start_sec = 0;
    int end_hour = 0;
    int end_min = 0;
    int end_sec = 0;
    float tarif_min = 0.15;
    float tarif_sec = tarif_min / 60;
    cout << "Коли ви почали телефону розмову: ";
    cout << "Введіть години: ";
    cin >> start_hour;
    cout << "Введіть хвилини: ";
    cin >> start_min;
    cout << "Введіть секунди: ";
    cin >> start_sec;
    cout << "Коли ви закінчили телефону розмову: ";
    cout << "Введіть години: ";
    cin >> end_hour;
    cout << "Введіть хвилини: ";
    cin >> end_min;
    cout << "Введіть секунди: ";
    cin >> end_sec;
    float time = (end_hour - start_hour) * 3600 + (end_min - start_min) * 60 + (end_sec - start_sec);
    float pay = time * tarif_sec;
    int pay_uan = pay;
    int pay_kop = (pay - pay_uan) * 100;
    cout << "Ви розмовляли " << time << " секунд\n";
    cout << "Ви повинні заплатити " << pay_uan << " гривень " << pay_kop << " копійок\n";
    
    //task 6
    double mass_mercury = 3.3 * 1e23;
    double mass_venera = 4.9 * 1e24;
    double mass_earth = 6.0 * 1e24;
    double mass_mars = 6.4 * 1e23;
    double mass_jupiter = 1.9 * 1e27;
    double mass_saturn = 5.7 * 1e26;
    double mass_uran = 8.7 * 1e25;
    double mass_neptun = 1.0 * 1e26;
    double mass_all_planets = mass_mercury + mass_venera + mass_earth + mass_mars + mass_jupiter + mass_saturn + mass_uran + mass_neptun;
    double middle_mass = mass_all_planets / 8;
    double mass_planets = mass_all_planets - mass_jupiter;
    double num = mass_jupiter / mass_planets;
    cout << "Загальна маса всіх планет: ";
    cout << mass_all_planets << " кг\n";
    cout << "Середня маса планет: ";
    cout << middle_mass << " кг\n";
    cout << "Відсоткове значення планети відносно маси всіх планет:\n";
    cout << "Меркурій: " << (mass_mercury / mass_all_planets) * 100 << "%\n";
    cout << "Венера: " << (mass_venera / mass_all_planets) * 100 << "%\n";
    cout << "Земля: " << (mass_earth / mass_all_planets) * 100 << "%\n";
    cout << "Марс: " << (mass_mars / mass_all_planets) * 100 << "%\n";
    cout << "Юпітер: " << (mass_jupiter / mass_all_planets) * 100 << "%\n";
    cout << "Сатурн: " << (mass_saturn / mass_all_planets) * 100 << "%\n";
    cout << "Уран: " << (mass_uran / mass_all_planets) * 100 << "%\n";
    cout << "Нептун: " << (mass_neptun / mass_all_planets) * 100 << "%\n";
    cout << "Маса найбільшої планети а саме Юпітера більша за масу всіх остальних планет разом взятих в: ";
    cout << num << " разів\n";

    //task 7
    int num1 = 0;
    int num2 = 0;
    cout << "Введіть ваше перше число: ";
    cin >> num1;
    cout << "Введіть ваше друге число: ";
    cin >> num2;
    int num1_1 = num1 / 100;
    int num1_2 = (num1 / 10) % 10;
    int num1_3 = num1 % 10;
    int num2_1 = num2 / 100;
    int num2_2 = (num2 / 10) % 10;
    int num2_3 = num2 % 10;
    int new_num1 = num1_1 * 100 + num2_2 * 10 + num1_3;
    int new_num2 = num2_1 * 100 + num1_2 * 10 + num2_3;
    cout << "Перше число: " << new_num1 << "\n";
    cout << "Друге число: " << new_num2 << "\n";
    
    //task 8
    int chicken = 0;
    int egg_week = 0;
    float price_chicken_one = 0;
    float price_egg_ten = 0;
    cout << "Введіть скільки курок ви купили: ";
    cin >> chicken;
    cout << "Введіть за скільки ви купили одну курку: ";
    cin >> price_chicken_one;
    cout << "Введіть скільки 1 курка несе яєць на тиждень: ";
    cin >> egg_week;
    cout << "Введіть за скільки ви збираєтеся продавати 10 яєць: ";
    cin >> price_egg_ten;
    float invest = chicken * price_chicken_one;
    float price_egg_one = price_egg_ten / 10;
    int egg_per_day = egg_week / 7;
    int total_egg_per_day = egg_per_day * chicken;
    float profit_per_day = total_egg_per_day * price_egg_one;
    int result = invest / profit_per_day;
    cout << "Ви вклали " << invest << " гривень\n";
    cout << "Ви окупите свої вкладення через " << result << " днів\n";

}