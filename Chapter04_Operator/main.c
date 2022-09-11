#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Practice 01
// -----------

//int main(void)
//{
//    int num1 = 0, num2 = 0;
//    int sum = 0;
//    double average = 0.0;
//
//    scanf("%d %d", &num1, &num2);
//
//    sum = num1 + num2;
//    average = (double)sum / 2.0;
//
//    printf("%d %.2f\n", sum, average);
//
//    return 0;
//}
//----------------------------------------------------

// Practice 02
// -----------

//int main(void)
//{
//    float num1 = 0.0, num2 = 0.0;
//    float sum = 0.0, average = 0.0;
//
//    scanf("%f %f", &num1, &num2);
//
//    sum = num1 + num2;
//    average = sum / 2.0;
//
//    printf("%.2f %.2f\n", sum, average);
//
//    return 0;
//}
//----------------------------------------------------

// Practice 03
// -----------

//int main(void) {
//    float num1 = 0.0, num2 = 0.0;
//    int sum = 0, average = 0;
//
//    scanf("%f %f", &num1, &num2);
//
//    sum = (int)num1 + (int)num2;
//    average = sum / 2;
//
//    printf("%f %f\n", (float)sum, (float)average);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 04
// -----------
//
//int main(void) {
//    int num1, num2;
//
//    scanf("%d %d", &num1, &num2);
//
//    if(num1>num2) {
//        printf("%d %d\n", num1/num2, num1%num2);
//    }
//    else {
//        printf("%d %d\n", num2/num1, num2%num1);
//    }
//    return 0;
//}
//----------------------------------------------------
// Practice 05
// -----------
//
//int main(void) {
//    double weight_kg;
//    double weight_pound;
//
//    scanf("%lf", &weight_kg);
//
//    weight_pound = weight_kg / 0.453592;
//
//    printf("%.3lf\n", weight_pound);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 06 centimeter to feet
// -----------
//
//int main(void) {
//    double centi;
//    double feet;
//
//    scanf("%lf", &centi);
//
//    feet = centi / 30.48;
//
//    printf("%.3lf\n", feet);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 07 const radius
// -----------
//
//int main(void) {
//    const RADIUS = 7.58;
//
//    float volume = (4.0/3.0) * 3.14 * RADIUS * RADIUS * RADIUS;
//    float surface = 4.0 * 3.14 * RADIUS * RADIUS;
//
//    printf("%f %f\n", volume, surface);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 08 variable radius
// -----------
//
//int main(void) {
//    float radius = 0.0;
//
//    scanf("%f", &radius);
//
//    float volume = (4.0/3.0) * 3.14 * radius * radius * radius;
//    float surface = 4.0 * 3.14 * radius * radius;
//
//    printf("%f %f\n", volume, surface);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 09 Separating units
// -----------
//
//int main(void) {
//    int num;
//
//	printf("천만 이하의 하나의 정수를 입력해주세요. >> ");
//	scanf("%d", &num);
//
//	printf("입력한 정수 %d는 ", num);
//	printf("%d만 ", num / 10000);
//	printf("%d천 ", num % 10000 / 1000);
//	printf("%d백 ", num % 1000 / 100);
//	printf("%d십 ", num % 100 / 10);
//	printf("%d입니다.\n", num % 10);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 10 First half and Second half
// -----------
//
//int main(void) {
//    int month;
//
//    scanf("%d", &month);
//
//    printf("%d is ", month);
//    printf("%s\n", month <= 6 ? "the first half" : "the second half");
//
//    return 0;
//}
//----------------------------------------------------
// Practice 11 Maxinum Number
// -----------
//
//int main(void) {
//    int num1, num2, num3;
//
//    scanf("%d %d %d", &num1, &num2, &num3);
//
//    printf("%d\n", num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3));
//
//    return 0;
//}
//----------------------------------------------------
// Practice 12 Caculate BMI
// -----------
//
//int main(void) {
//    float height, weight;
//    float BMI;
//
//    scanf("%f %f", &height, &weight);
//
//    BMI = ((height - 100) * 0.9) - weight;
//
//    printf("Your BMI is %.3f\n", BMI);
//    printf("Result: %s\n", BMI >= 0 ? "Nomal" : "Obesity");
//
//    return 0;
//}
//----------------------------------------------------
// Practice 13 Simple interest
// -----------
//
//int main(void) {
//
//    const float RATE = 0.045;
//    const PRIN = 1000000;
//
//    int year;
//    float Sim_interest;
//
//    scanf("%d", &year);
//
//    printf("Expected Interest: %.2f\n", PRIN * RATE * year);
//    printf("Expected Amount: %.2f\n", PRIN * (1 + RATE * year));
//
//    return 0;
//}
//----------------------------------------------------
// Practice 14 Compound interest
// -----------
//
//int main(void) {
//
//    double principal = 1000000;
//	double rate = 0.045;
//	double total_receipts;
//	int period_year;
//
//	printf("예치 기간을 년 단위로 입력해 주세요: ");
//	scanf("%d", &period_year);
//
//	total_receipts = principal * pow((1 + rate), period_year);
//
//	printf("\n만기시 총 수령액은 %.0f 원 입니다.\n", total_receipts);
//
//	return 0;
//}


//----------------------------------------------------
// Practice 15 Midpoint Between Two Points
// -----------
//
//int main(void) {
//
//    const double X1 = 3.2, Y1 = 4.6, X2 = -8.3, Y2 = -2.3;
//    const double MID_X = (X1 + X2) / 2;
//    const double MID_Y = (Y1 + Y2) / 2;
//
//    printf("Midpoint Coordinate: (%.1lf, %.1lf)\n", MID_X, MID_Y);
//
//    return 0;
//}
//----------------------------------------------------
// Practice 16 Needed Money Unit
// -----------
//
int main(void) {

    const int UNIT01 = 50000, UNIT02 = 10000, UNIT03 = 5000, UNIT04 = 1000;

    int payment = 0;

    scanf("%d", &payment);

    printf("%d\n", payment%UNIT01);

    printf("%d: %dEA\n", UNIT01, payment / UNIT01);
    printf("%d: %dEA\n", UNIT02, payment%UNIT01 / UNIT02);
    printf("%d: %dEA\n", UNIT03, payment%UNIT02 / UNIT03);
    printf("%d: %dEA\n", UNIT04, payment%UNIT03 / UNIT04);

    return 0;
}
