#include <iostream>

using namespace std;

// Function to convert CGPA to percentage
float convertCGPAToPercentage(float cgpa)
{
    // Formula to convert CGPA to percentage
    float percentage = (cgpa - 0.75) * 10;
    return percentage;
}

int main()
{
    float cgpa;

    cout << "Enter CGPA to convert to percentage: ";
    cin >> cgpa;

    if (cgpa >= 0.75 && cgpa <= 10)
    {
        float percentage = convertCGPAToPercentage(cgpa);
        cout << "Equivalent Percentage: " << percentage << "%" << endl;
    }
    else
    {
        cout << "Invalid CGPA. CGPA should be between 0.75 and 10." << endl;
    }

    return 0;
}
