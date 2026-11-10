#include<stdio.h>

float calculateFare(char travelClass);
float checkBaggage(char travelClass, float baggageWeight);
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);
int main()
{
    char Tclass;
    float baggage;
    
    printf("Enter travel class (E for economy, B for Business): ");
    scanf(" %c", &Tclass);
    if (Tclass =='e' || Tclass =='E' || Tclass =='b' || Tclass =='B') {
        printf("Enter baggage weight (kg): ");
        scanf("%f", &baggage);
        
        float baseFare=calculateFare(Tclass);
        float excessFee=checkBaggage(Tclass, baggage);
        printTicket(Tclass, baggage, baseFare, excessFee);
    }
    else {
        printf("Invalid Class\n");
    }
    return 0;
}   
float calculateFare(char travelClass) {
    float fare=0;
    if (travelClass=='E' || travelClass=='e') {
        fare=2500.00;
    }
    else if (travelClass=='B' || travelClass=='b') {
        fare=6500.00;
    }    
    return fare;
}
float checkBaggage(char travelClass, float baggageWeight) {
    float baggage=baggageWeight;
    float excess=0;
    if (travelClass=='E' || travelClass=='e') {
        if (baggageWeight<=20) {
            excess=0;
        }
        else {
            excess=baggage-20;
            excess=excess*150;
        }
    }
    else if (travelClass=='B' || travelClass=='b') {
        if (baggageWeight<=40) {
            excess=0;
        }
        else {
            excess=baggage-40;
            excess=excess*150;
        }
    }    
    
    return excess;
}
void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    float total=baseFare+excessFee;
    printf("\n----- BOARDING SUMMARY -----\nTravel Class: %c\n", travelClass);
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.2fkg\n", baggageWeight);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n-----------------------------", total);
    
}
    
