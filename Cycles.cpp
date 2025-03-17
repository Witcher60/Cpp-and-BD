// Present: Witcher
// Date: 16/03/2025
#include <iostream>
using namespace std;
int main ()
{
// Task 1
int num;
int num1 = 0;
for (num = 1; num <= 10; num++)
{
num1 += num;
}
cout << "Task 1: " << num1;

// // Task 2
float num_cel_start_C = 0;
float num_cel_end_C = 0;
cout << "Введіть початок діапазона температури в Цельсіях: ";
cin >> num_cel_start_C;
cout << "Введіть кінець діапазона температури в Цельсіях: ";
cin >> num_cel_end_C;
float num_cel_start_F = 0;
for (num_cel_start_C; num_cel_start_C <= num_cel_end_C; num_cel_start_C++){
num_cel_start_F = (num_cel_start_C * 9/5) + 32;
cout << "\n" << num_cel_start_C << " за цельсієм!" << num_cel_start_F << " за фаренгейтом!";
}

// Task 3
srand (time(0));
rand();
int step = 0;
int final = 100;
int num_pos = 0;
int num_neg = 0;
int num_zero = 0;
while (step < final - 1){
    int num3 = rand() % 201 - 100;
    cout << num3 << " ";
    if (num3 > 0){
        num_pos++;
    }
    else if (num3 < 0){
        num_neg++;
    }
    else{
        num_zero++;
    }
    step++;
}
int num_procent_pos = (num_pos * 100) / 100;
int num_procent_neg = (num_neg * 100) / 100;
int num_procent_zero = (num_zero * 100) / 100;
cout << "\n" << "Відсоток позитивних чисел: " << num_procent_pos << "%" << "\n" << "Відсоток негативних чисел: " << num_procent_neg << "%" << "\n" << "Відсоток нулів: " << num_procent_zero << "%" << "\n";

// Task 4
int num_fact = 0;
cout << "Введіть число: ";
cin >> num_fact;
int num_fact1 = 1;
for (int i = 1; i <= num_fact; i++){
    num_fact1 *= i;
}
cout << "Факторіал числа " << num_fact << " = " << num_fact1 << "\n";

// Task 5
int num5 = 0;
int num5_1 = 0;
int num5_2 = 0;
cout << "Введіть число: ";
cin >> num5;
while (num5 != 0){
    num5_1 += num5 % 10;
    num5_2++;
    num5 /= 10;
}
cout << "Кількість цифр у числі: " << num5_2 << "\n" << "Сума всіх цифр у числі: " << num5_1 << "\n";

// Task 6
int num6 = 0;
cout << "Введіть число: ";
cin >> num6;
for (int i = 1; i <= num6; i++){
    if (num6 % i == 0){
        cout << i << " ";
    }
}

// Task 7
int num7 = 0;
int num7_1 = 0;
cout << "Введіть число: ";
cin >> num7;
for (int i = 1; i <= num7; i++){
    if (num7 % i == 0){
        num7_1++;
    }
}
if (num7_1 == 2){
    cout << "Число " << num7 << " є простим!" << "\n";
}
else{
    cout << "Число " << num7 << " не є простим!" << "\n";   
}

// Task 8
int num8 = 0;
int num8_1 = 0;
int num8_2 = 0;
cout << "Введіть число: ";
cin >> num8;
while (num8 != 0){
    num8_1 = num8 % 10;
    num8 /= 10;
    num8_2 = num8 % 10;
    if (num8_1 == num8_2){
        break;
    }
}
if (num8_1 == num8_2){
    cout << "В числі є одинакові цифри підряд!" << "\n";
}
else{
    cout << "В числі немає одинакових цифр підряд!" << "\n";
}

// Task 9
int num_pal = 0;
int num_pal1 = 0;
int num_pal2 = 0;
cout << "Введіть число: ";
cin >> num_pal;
num_pal1 = num_pal;
while (num_pal != 0){
    num_pal2 = num_pal2 * 10 + num_pal % 10;
    num_pal /= 10;
    cout << num_pal2 << " ";
}
if (num_pal1 == num_pal2){
    cout << "Число " << num_pal1 << " є паліндромом!" << "\n";
}
else{
    cout << "Число " << num_pal1 << " не є паліндромом!" << "\n";
}

// Task 10
int num10 = 0;
int num_start = 0;
int num_finish = 1000;
cout << "Загадайте число від 0 до 1000!" << "\n";
while (num_start < num_finish){
    num10 = (num_start + num_finish) / 2;
    cout << "Ваше число: " << num10 << " ?" << "\n";
    cout << "1 - Так" << "\n" << "2 - Ні" << "\n";
    int num10_1 = 0;
    cin >> num10_1;
    if (num10_1 == 1){
        cout << "Ваше число: " << num10 << "\n";
        break;
    }
    else{
        cout << "Ваше число більше за " << num10 << " чи менше?" << "\n";
        cout << "1 - Більше" << "\n" << "2 - Менше" << "\n";
        int num10_2 = 0;
        cin >> num10_2;
        if (num10_2 == 1){
            num_start = num10 + 1;
        }
        else{
            num_finish = num10 - 1;
        }
}
}

// Task 11
float step_stud = 0;
float step_live = 0;
float parent_sos = 0;
cout << "Введіть стипендію студента: ";
cin >> step_stud;
cout << "Введіть витрати на проживання: ";
cin >> step_live;
for (int i = 1; i <= 10; i++){
    step_live += step_live * 0.05;
    parent_sos += step_live - step_stud;
}
cout << "Сума грошей, яку необхідно одноразово попросити у батьків: " << parent_sos << "\n";

// Task 12
int num_pif = 0;
int num_pif1 = 0;
for (int i = 1; i <= 10; i++){
    for (int j = 1; j <= 10; j++){
        num_pif = i * j;
        cout << i << " * " << j << " = " << num_pif << "\n";
    }
}

// Task 13
int lycky = 0;
int lycky1 = 0;
int lycky2 = 0;
int sum_lycky1 = 0;
for (int i = 000001; i <= 999999; i++){
    lycky = i;
    lycky1 = lycky / 1000;
    lycky2 = lycky % 1000;
    int sum1 = 0;
    int sum2 = 0;
    while (lycky1 != 0){
        sum1 += lycky1 % 10;
        lycky1 /= 10;
    }
    while (lycky2 != 0){
        sum2 += lycky2 % 10;
        lycky2 /= 10;
    }
    if (sum1 == sum2){
        cout << i << " ";
        sum_lycky1++;
    }
}
cout << "\n" << "Кількість щасливих квитків: " << sum_lycky1 << "\n";

// Task 14
int num_eight = 0;
int num_eight1 = 0;
int num_eight2 = 0;
for (int i = 00000001; i <= 99999999; i++){
    num_eight = i;
    num_eight1 = num_eight / 10000;
    num_eight2 = num_eight % 10000;
    int num_eight3 = 0;
    int num_eight4 = 0;
    while (num_eight1 != 0){
        num_eight3 += num_eight1 % 10;
        num_eight1 /= 10;
    }
    while (num_eight2 != 0){
        num_eight4 += num_eight2 % 10;
        num_eight2 /= 10;
    }
    if (num_eight3 == num_eight4 && i % 12345 == 0){
        cout << i << " ";
    }
}

// Task 15
int num_simple = 0;
int num_simple1 = 0;
for (int i = 2; i <= 10000000; i++){
    num_simple = i;
    for (int j = 2; j <= num_simple; j++){
        if (num_simple != j && num_simple % j == 0){
            break;
        }
        else if (num_simple == j){
            cout << num_simple << " ";
        }
}
}

// Task 16
// Завдання на Псевдо графіку
int num_N = 0;
cout << "Введіть висоту трикутника: ";
cin >> num_N;
for (int i = 1; i <= num_N; i++){
    for (int j = 1; j <= num_N - i; j++){
        cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++){
        cout << "*";
    }
    cout << "\n";
}

// Task 17
int num_A = 0;
int num_B = 0;
int num_C = 0;
cout << "Введіть довжину паралелепіпеда: ";
cin >> num_A;
cout << "Введіть ширину паралелепіпеда: ";
cin >> num_B;
cout << "Введіть висоту паралелепіпеда: ";
cin >> num_C;
for (int i = 1; i <= num_A; i++){
    for (int j = 1; j <= num_B; j++){
        if (i == 1 || i == num_A || j == 1 || j == num_B){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << "\n";
}

// Task 18
// Бонус 
int dragon_hp = 0;
int dragon_attack = 0;
int unit_hp = 0;
int unit_attack = 0;
int unit_count = 0;
int unit_attack_sum = 0;
int unit_hp_sum = 0;
cout << "Введіть кількість живих копійників: ";
cin >> unit_count;
cout << "Введіть очки здоров'я дракона: ";
cin >> dragon_hp;
cout << "Введіть атаку дракона: ";
cin >> dragon_attack;
cout << "Введіть очки здоров'я одного копійника: ";
cin >> unit_hp;
cout << "Введіть атаку одного копійника: ";
cin >> unit_attack;
for (int i = 1; i <= unit_count; i++){
    unit_hp_sum += unit_hp;
    unit_attack_sum += unit_attack;
}
// Для вбивства дракона треба таку кількість копійників
int unit_count_sum_need = unit_count;
int dragon_hp1 = dragon_hp;
int unit_hp_sum1 = unit_hp_sum;
int unit_attack_sum1 = unit_attack_sum;
int dragon_attack1 = dragon_attack;
int unit_count_sum_need1 = unit_count_sum_need;
while (dragon_hp1 > 0){
    dragon_hp1 -= unit_attack_sum1;
    if (dragon_hp1 <= 0){
        break;
    }
    unit_hp_sum1 -= dragon_attack1;
    if (unit_hp_sum1 <= 0){
        unit_count_sum_need++;
    }
}
// Лог бою
while (dragon_hp > 0 && unit_hp_sum > 0){
    dragon_hp -= unit_attack_sum;
    cout << "Копійники атакують (урон " << unit_attack_sum << ") — у дракона залишилось " << dragon_hp << " очок здоров'я." << "\n";
    if (dragon_hp <= 0){
        cout << "Дракон вбитий!" << "\n";
        break;
    }
    unit_hp_sum -= dragon_attack;
    unit_count = unit_hp_sum / unit_hp;
    cout << "Дракон атакує (урон " << dragon_attack << ") — залишилось " << unit_count << " копійників," << "\n";
    if (unit_hp_sum <= 0){
        cout << "Дракон переміг!" << "\n";
        break;
    }
}
cout << "Мінімальна кількість копійників, необхідних для вбивства дракона: " << unit_count_sum_need << "\n";
}