//Jeffrey Winters
//This program  takes starting and ending readings for gas and electric meters and calculates charges to the nearest cent.
#include <iostream>
using namespace std;
double charges(double, double, double, double);

int main()
    {
        double gasBeginningReading, gasEndReading, electricityBeginningReading, electricityEndReading, gasUsed, electricityUsed, baselineGas, baselineGasPrice, overBaselineGasPrice, baselineElectricity, baselineElectricityPrice, overBaselineElectricityPrice, gasPrice, electricityPrice, totalPrice;
        //These lines set the PG&E price parameters and prompt the user to input beginning and end meter readings to calculate their gas use
        baselineGas = 31;
        baselineGasPrice = 0.504;
        overBaselineGasPrice = 0.834;
        cout<<"Please enter the beginning gas meter reading\n";
        cin>>gasBeginningReading;
        cout<<"Please enter the end gas meter reading\n";
        cin>>gasEndReading;
        gasUsed = gasEndReading-gasBeginningReading;

        //These lines set the PG&E price parameters and prompt the user to input beginning and end meter readings to calculate their electric use
        baselineElectricity = 238.7;
        baselineElectricityPrice = 0.094;
        overBaselineElectricityPrice = 0.133;
        cout<<"Please enter the beginning electricity meter reading\n";
        cin>>electricityBeginningReading;
        cout<<"Please enter the end electricity meter reading\n";
        cin>>electricityEndReading;
        electricityUsed = electricityEndReading-electricityBeginningReading;

        //These lines set the decimal precision of the printed output to 2 places
        cout.setf(ios::fixed);
        cout.precision(2);
        //These lines call the charges function for gas use, then print the result
        gasPrice = charges(gasUsed, baselineGas, baselineGasPrice, overBaselineGasPrice);
        cout<<"Your gas bill is $"<<gasPrice<<".\n";
        //These lines call the charges function for electricity use, then print the result        
        electricityPrice = charges(electricityUsed, baselineElectricity, baselineElectricityPrice, overBaselineElectricityPrice);
        cout<<"Your electric bill is $"<<electricityPrice<<".\n";
        //These lines add the 2 charges() results and print the total bill
        totalPrice = gasPrice+electricityPrice;
        cout<<"Your total PG&E bill is $"<<totalPrice<<".\n";
        cout.unsetf(ios::fixed);
        return 0;        
    }
//This function calculates the tier one and tier 2 utility charges
double charges(double usage, double tierOneQuantity, double tierOnePrice, double tierTwoPrice)
    {
        double price;
        if(usage<tierOneQuantity)
            price = usage*tierOneQuantity;
        else
            price = (usage-tierOneQuantity)*tierTwoPrice + tierOneQuantity*tierOnePrice;
        return price;
    }