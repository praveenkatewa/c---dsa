/* q-1
If the sum of 18 monthly expenses is greater than $5000, 
call a function that counts the number of months with expenses above $400.
If the sum is less than $5000, call a function that finds the first occurrence of a month with expenses below $200.
If the sum is exactly $5000, call a function that calculates the total number of months with expenses ending in zero.*/

#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of months with expenses above $400
int countMonthsAbove400(const vector<int>& expenses) {
    int count = 0;
    for(int expense : expenses) {
        if(expense > 400) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of a month with expenses below $200
int findFirstBelow200(const vector<int>& expenses) {
    for(int i = 0; i < expenses.size(); i++) {
        if(expenses[i] < 200) {
            return i + 1;  // Return month number (1-indexed)
        }
    }
    return -1;  // If no such month is found
}

// Function to calculate the total number of months with expenses ending in zero
int countMonthsEndingInZero(const vector<int>& expenses) {
    int count = 0;
    for(int expense : expenses) {
        if(expense % 10 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> expenses = {300, 450, 200, 600, 400, 350, 180, 210, 370, 580, 410, 390, 220, 410, 310, 430, 440, 250};
    
    int sum = 0;
    for(int expense : expenses) {
        sum += expense;
    }
    
    if(sum > 5000) {
        int countAbove400 = countMonthsAbove400(expenses);
        cout << "Number of months with expenses above $400: " << countAbove400 << endl;
    } else if(sum < 5000) {
        int firstBelow200 = findFirstBelow200(expenses);
        if(firstBelow200 != -1) {
            cout << "First month with expenses below $200: " << firstBelow200 << endl;
        } else {
            cout << "No month found with expenses below $200" << endl;
        }
    } else {
        int countEndingInZero = countMonthsEndingInZero(expenses);
        cout << "Number of months with expenses ending in zero: " << countEndingInZero << endl;
    }

    return 0;
}


/*q-2
If the product of 9 item diameters is greater than 1500 cm, call a function that separates diameters into multiples of 5 and non-multiples. 
If the product is less than 1500 cm, call a function that finds the first occurrence of a diameter below 20 cm. If the product is exactly 1500 cm,
 call a function that finds the last occurrence of a diameter above 50 cm.*/
 #include <iostream>
#include <vector>
using namespace std;

// Function to separate diameters into multiples of 5 and non-multiples
void separateMultiplesOf5(const vector<int>& diameters, vector<int>& multiplesOf5, vector<int>& nonMultiples) {
    for(int diameter : diameters) {
        if(diameter % 5 == 0) {
            multiplesOf5.push_back(diameter);
        } else {
            nonMultiples.push_back(diameter);
        }
    }
}

// Function to find the first occurrence of a diameter below 20 cm
int findFirstBelow20(const vector<int>& diameters) {
    for(int i = 0; i < diameters.size(); i++) {
        if(diameters[i] < 20) {
            return i + 1;  // Return the position (1-indexed)
        }
    }
    return -1;  // If no such diameter is found
}

// Function to find the last occurrence of a diameter above 50 cm
int findLastAbove50(const vector<int>& diameters) {
    for(int i = diameters.size() - 1; i >= 0; i--) {
        if(diameters[i] > 50) {
            return i + 1;  // Return the position (1-indexed)
        }
    }
    return -1;  // If no such diameter is found
}

int main() {
    vector<int> diameters = {25, 10, 55, 70, 15, 30, 45, 18, 22};
    
    // Calculate the product of all diameters
    long long product = 1;
    for(int diameter : diameters) {
        product *= diameter;
    }
    
    if(product > 1500) {
        vector<int> multiplesOf5, nonMultiples;
        separateMultiplesOf5(diameters, multiplesOf5, nonMultiples);
        
        // Output the separated lists
        cout << "Multiples of 5: ";
        for(int d : multiplesOf5) {
            cout << d << " ";
        }
        cout << endl;

        cout << "Non-multiples of 5: ";
        for(int d : nonMultiples) {
            cout << d << " ";
        }
        cout << endl;

    } else if(product < 1500) {
        int firstBelow20 = findFirstBelow20(diameters);
        if(firstBelow20 != -1) {
            cout << "First diameter below 20 cm is at position: " << firstBelow20 << endl;
        } else {
            cout << "No diameter found below 20 cm" << endl;
        }
    } else {
        int lastAbove50 = findLastAbove50(diameters);
        if(lastAbove50 != -1) {
            cout << "Last diameter above 50 cm is at position: " << lastAbove50 << endl;
        } else {
            cout << "No diameter found above 50 cm" << endl;
        }
    }

    return 0;
}
/*q-3
If the average number of hours worked per week over 4 weeks is greater than 40,
 call a function that counts the number of weeks with hours exceeding 45.
 If the average is less than 40, call a function that finds the first occurrence of a week with hours below 30.
  If the average is exactly 40, call a function that calculates the sum of the hours.*/

  #include <iostream>
#include <vector>
using namespace std;

// Function to count the number of weeks with hours exceeding 45
int countWeeksAbove45(const vector<int>& hours) {
    int count = 0;
    for(int h : hours) {
        if(h > 45) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of a week with hours below 30
int findFirstBelow30(const vector<int>& hours) {
    for(int i = 0; i < hours.size(); i++) {
        if(hours[i] < 30) {
            return i + 1;  // Return the week number (1-indexed)
        }
    }
    return -1;  // If no such week is found
}

// Function to calculate the sum of the hours
int sumHours(const vector<int>& hours) {
    int sum = 0;
    for(int h : hours) {
        sum += h;
    }
    return sum;
}

int main() {
    vector<int> hours = {42, 48, 38, 44};  // Example hours for 4 weeks
    
    // Calculate the average hours worked per week
    int totalHours = 0;
    for(int h : hours) {
        totalHours += h;
    }
    double average = static_cast<double>(totalHours) / hours.size();
    
    if(average > 40) {
        int countAbove45 = countWeeksAbove45(hours);
        cout << "Number of weeks with hours exceeding 45: " << countAbove45 << endl;
    } else if(average < 40) {
        int firstBelow30 = findFirstBelow30(hours);
        if(firstBelow30 != -1) {
            cout << "First week with hours below 30 is week: " << firstBelow30 << endl;
        } else {
            cout << "No week found with hours below 30" << endl;
        }
    } else {  // If average == 40
        int sum = sumHours(hours);
        cout << "Total hours worked: " << sum << endl;
    }

    return 0;
}
/* q-4
If the sum of 14 product ratings is greater than 65, call a function that counts the number of ratings above 4 stars. 
If the sum is less than 65, call a function that finds the number of occurrences of ratings below 3 stars. 
If the sum is exactly 65, call a function that returns an array of ratings where each rating is incremented by 0.5.*/

#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of ratings above 4 stars
int countRatingsAbove4(const vector<double>& ratings) {
    int count = 0;
    for(double rating : ratings) {
        if(rating > 4.0) {
            count++;
        }
    }
    return count;
}

// Function to count the number of occurrences of ratings below 3 stars
int countRatingsBelow3(const vector<double>& ratings) {
    int count = 0;
    for(double rating : ratings) {
        if(rating < 3.0) {
            count++;
        }
    }
    return count;
}

// Function to increment each rating by 0.5 and return a new array
vector<double> incrementRatingsByHalf(const vector<double>& ratings) {
    vector<double> incrementedRatings;
    for(double rating : ratings) {
        incrementedRatings.push_back(rating + 0.5);
    }
    return incrementedRatings;
}

int main() {
    vector<double> ratings = {4.2, 3.5, 2.8, 4.7, 5.0, 3.9, 2.4, 3.3, 4.1, 3.6, 4.9, 2.5, 3.8, 4.0};  // Example ratings
    
    // Calculate the sum of all ratings
    double sum = 0;
    for(double rating : ratings) {
        sum += rating;
    }
    
    if(sum > 65) {
        int countAbove4 = countRatingsAbove4(ratings);
        cout << "Number of ratings above 4 stars: " << countAbove4 << endl;
    } else if(sum < 65) {
        int countBelow3 = countRatingsBelow3(ratings);
        cout << "Number of ratings below 3 stars: " << countBelow3 << endl;
    } else {  // If sum == 65
        vector<double> incrementedRatings = incrementRatingsByHalf(ratings);
        cout << "Ratings incremented by 0.5: ";
        for(double rating : incrementedRatings) {
            cout << rating << " ";
        }
        cout << endl;
    }

    return 0;
}

/*q-5
If the product of 6 delivery times (in days) is greater than 100, 
call a function that separates delivery times into prime and non-prime numbers.
 If the product is less than 100, call a function that finds the first occurrence of a delivery time greater than 10 days.
  If the product is exactly 100, call a function that finds the last occurrence of a delivery time less than 5 days.*/
 #include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to separate delivery times into prime and non-prime numbers
void separatePrimes(const vector<int>& deliveryTimes, vector<int>& primes, vector<int>& nonPrimes) {
    for (int time : deliveryTimes) {
        if (isPrime(time)) {
            primes.push_back(time);
        } else {
            nonPrimes.push_back(time);
        }
    }
}

// Function to find the first occurrence of a delivery time greater than 10 days
int findFirstGreaterThan10(const vector<int>& deliveryTimes) {
    for (int i = 0; i < deliveryTimes.size(); i++) {
        if (deliveryTimes[i] > 10) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such delivery time is found
}

// Function to find the last occurrence of a delivery time less than 5 days
int findLastLessThan5(const vector<int>& deliveryTimes) {
    for (int i = deliveryTimes.size() - 1; i >= 0; i--) {
        if (deliveryTimes[i] < 5) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such delivery time is found
}

int main() {
    vector<int> deliveryTimes = {2, 3, 7, 4, 11, 6};  // Example delivery times
    
    // Calculate the product of all delivery times
    long long product = 1;
    for (int time : deliveryTimes) {
        product *= time;
    }
    
    if (product > 100) {
        vector<int> primes, nonPrimes;
        separatePrimes(deliveryTimes, primes, nonPrimes);
        
        // Output the separated lists
        cout << "Prime delivery times: ";
        for (int p : primes) {
            cout << p << " ";
        }
        cout << endl;

        cout << "Non-prime delivery times: ";
        for (int np : nonPrimes) {
            cout << np << " ";
        }
        cout << endl;

    } else if (product < 100) {
        int firstGreaterThan10 = findFirstGreaterThan10(deliveryTimes);
        if (firstGreaterThan10 != -1) {
            cout << "First delivery time greater than 10 days is at position: " << firstGreaterThan10 << endl;
        } else {
            cout << "No delivery time found greater than 10 days" << endl;
        }
    } else {  // If product == 100
        int lastLessThan5 = findLastLessThan5(deliveryTimes);
        if (lastLessThan5 != -1) {
            cout << "Last delivery time less than 5 days is at position: " << lastLessThan5 << endl;
        } else {
            cout << "No delivery time found less than 5 days" << endl;
        }
    }

    return 0;
}

/*q-6
If the average number of visitors per day over 20 days is greater than 500,
 call a function that counts the number of days with more than 600 visitors.
  If the average is less than 500, call a function that finds the first occurrence of a day with fewer than 300 visitors.
   If the average is exactly 500, call a function that calculates the total number of visitors over the 20 days.*/

   #include <iostream>
#include <vector>
using namespace std;

// Function to count the number of days with more than 600 visitors
int countDaysAbove600(const vector<int>& visitors) {
    int count = 0;
    for (int v : visitors) {
        if (v > 600) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of a day with fewer than 300 visitors
int findFirstBelow300(const vector<int>& visitors) {
    for (int i = 0; i < visitors.size(); i++) {
        if (visitors[i] < 300) {
            return i + 1;  // Return the 1-indexed day number
        }
    }
    return -1;  // If no such day is found
}

// Function to calculate the total number of visitors over 20 days
int totalVisitors(const vector<int>& visitors) {
    int sum = 0;
    for (int v : visitors) {
        sum += v;
    }
    return sum;
}

int main() {
    vector<int> visitors = {450, 620, 580, 610, 490, 510, 530, 600, 480, 700,
                            550, 495, 520, 680, 620, 610, 490, 500, 550, 525};  // Example visitors per day
    
    // Calculate the average number of visitors per day
    int totalVisitorsSum = 0;
    for (int v : visitors) {
        totalVisitorsSum += v;
    }
    double average = static_cast<double>(totalVisitorsSum) / visitors.size();
    
    if (average > 500) {
        int countAbove600 = countDaysAbove600(visitors);
        cout << "Number of days with more than 600 visitors: " << countAbove600 << endl;
    } else if (average < 500) {
        int firstBelow300 = findFirstBelow300(visitors);
        if (firstBelow300 != -1) {
            cout << "First day with fewer than 300 visitors is day: " << firstBelow300 << endl;
        } else {
            cout << "No day found with fewer than 300 visitors" << endl;
        }
    } else {  // If average == 500
        int total = totalVisitors(visitors);
        cout << "Total number of visitors over 20 days: " << total << endl;
    }

    return 0;
}
/*q-7
If the sum of 10 employee salaries is greater than $100,000, call a function that counts the number of employees earning more than $15,000. 
If the sum is less than $100,000, call a function that finds the first occurrence of a salary less than $8,000.
 If the sum is exactly $100,000, call a function that calculates the product of the digits of the salaries.*/
#include <iostream>
#include <vector>
using namespace std;

// Function to count the number of employees earning more than $15,000
int countSalariesAbove15000(const vector<int>& salaries) {
    int count = 0;
    for (int salary : salaries) {
        if (salary > 15000) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of a salary less than $8,000
int findFirstBelow8000(const vector<int>& salaries) {
    for (int i = 0; i < salaries.size(); i++) {
        if (salaries[i] < 8000) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such salary is found
}

// Function to calculate the product of the digits of all salaries
int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {  // Ignore multiplying by 0
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

int productOfAllDigits(const vector<int>& salaries) {
    int totalProduct = 1;
    for (int salary : salaries) {
        totalProduct *= productOfDigits(salary);
    }
    return totalProduct;
}

int main() {
    vector<int> salaries = {12000, 18000, 15000, 7500, 17000, 9000, 11000, 13000, 16000, 18000};  // Example salaries
    
    // Calculate the sum of all salaries
    int sum = 0;
    for (int salary : salaries) {
        sum += salary;
    }
    
    if (sum > 100000) {
        int countAbove15000 = countSalariesAbove15000(salaries);
        cout << "Number of employees earning more than $15,000: " << countAbove15000 << endl;
    } else if (sum < 100000) {
        int firstBelow8000 = findFirstBelow8000(salaries);
        if (firstBelow8000 != -1) {
            cout << "First salary less than $8,000 is at position: " << firstBelow8000 << endl;
        } else {
            cout << "No salary found less than $8,000" << endl;
        }
    } else {  // If sum == 100000
        int totalProduct = productOfAllDigits(salaries);
        cout << "Product of the digits of all salaries: " << totalProduct << endl;
    }

    return 0;
}
/*q-8
If the product of 7 item volumes (length × width × height) is greater than 2000, call a function that separates volumes into multiples of 25 and non-multiples.
 If the product is less than 2000, call a function that finds the first occurrence of a volume below 100. If the product is exactly 2000, 
 call a function that finds the last occurrence of a volume above 500.*/
#include <iostream>
#include <vector>
using namespace std;

// Function to separate volumes into multiples of 25 and non-multiples
void separateMultiplesOf25(const vector<int>& volumes, vector<int>& multiples, vector<int>& nonMultiples) {
    for (int volume : volumes) {
        if (volume % 25 == 0) {
            multiples.push_back(volume);
        } else {
            nonMultiples.push_back(volume);
        }
    }
}

// Function to find the first occurrence of a volume below 100
int findFirstBelow100(const vector<int>& volumes) {
    for (int i = 0; i < volumes.size(); i++) {
        if (volumes[i] < 100) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such volume is found
}

// Function to find the last occurrence of a volume above 500
int findLastAbove500(const vector<int>& volumes) {
    for (int i = volumes.size() - 1; i >= 0; i--) {
        if (volumes[i] > 500) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such volume is found
}

int main() {
    vector<int> volumes = {250, 400, 90, 150, 600, 800, 50};  // Example volumes (length × width × height)
    
    // Calculate the product of all volumes
    long long product = 1;
    for (int volume : volumes) {
        product *= volume;
    }
    
    if (product > 2000) {
        vector<int> multiples, nonMultiples;
        separateMultiplesOf25(volumes, multiples, nonMultiples);
        
        // Output the separated lists
        cout << "Multiples of 25: ";
        for (int m : multiples) {
            cout << m << " ";
        }
        cout << endl;

        cout << "Non-multiples of 25: ";
        for (int nm : nonMultiples) {
            cout << nm << " ";
        }
        cout << endl;

    } else if (product < 2000) {
        int firstBelow100 = findFirstBelow100(volumes);
        if (firstBelow100 != -1) {
            cout << "First volume below 100 is at position: " << firstBelow100 << endl;
        } else {
            cout << "No volume found below 100" << endl;
        }
    } else {  // If product == 2000
        int lastAbove500 = findLastAbove500(volumes);
        if (lastAbove500 != -1) {
            cout << "Last volume above 500 is at position: " << lastAbove500 << endl;
        } else {
            cout << "No volume found above 500" << endl;
        }
    }

    return 0;
}
/*q-9
If the average speed of 5 vehicles is greater than 60 mph, call a function that counts the number of vehicles exceeding 70 mph.
 If the average speed is less than 60 mph, call a function that finds the first occurrence of a vehicle traveling below 50 mph.
  If the average speed is exactly 60 mph, call a function that calculates the total distance traveled by all vehicles.*/

  #include <iostream>
#include <vector>
using namespace std;

// Function to count the number of vehicles exceeding 70 mph
int countVehiclesAbove70(const vector<int>& speeds) {
    int count = 0;
    for (int speed : speeds) {
        if (speed > 70) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of a vehicle traveling below 50 mph
int findFirstBelow50(const vector<int>& speeds) {
    for (int i = 0; i < speeds.size(); i++) {
        if (speeds[i] < 50) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such vehicle is found
}

// Function to calculate the total distance traveled by all vehicles
int totalDistanceTraveled(const vector<int>& distances) {
    int totalDistance = 0;
    for (int distance : distances) {
        totalDistance += distance;
    }
    return totalDistance;
}

int main() {
    vector<int> speeds = {65, 75, 55, 60, 85};  // Example speeds in mph
    vector<int> distances = {120, 200, 150, 180, 220};  // Example distances in miles

    // Calculate the average speed of the vehicles
    int sumSpeeds = 0;
    for (int speed : speeds) {
        sumSpeeds += speed;
    }
    double averageSpeed = static_cast<double>(sumSpeeds) / speeds.size();
    
    if (averageSpeed > 60) {
        int countAbove70 = countVehiclesAbove70(speeds);
        cout << "Number of vehicles exceeding 70 mph: " << countAbove70 << endl;
    } else if (averageSpeed < 60) {
        int firstBelow50 = findFirstBelow50(speeds);
        if (firstBelow50 != -1) {
            cout << "First vehicle traveling below 50 mph is at position: " << firstBelow50 << endl;
        } else {
            cout << "No vehicle found traveling below 50 mph" << endl;
        }
    } else {  // If averageSpeed == 60
        int totalDistance = totalDistanceTraveled(distances);
        cout << "Total distance traveled by all vehicles: " << totalDistance << " miles" << endl;
    }

    return 0;
}
/*q=10
If the sum of 8 temperatures over a week is greater than 250°C, call a function that counts the number of days with temperatures above 35°C.
 If the sum is less than 250°C, call a function that finds the first occurrence of a day with a temperature below 15°C.
  If the sum is exactly 250°C, call a function that returns an array of temperatures where each temperature is decreased by 5°C.*/

  #include <iostream>
#include <vector>
using namespace std;

// Function to count the number of days with temperatures above 35°C
int countDaysAbove35(const vector<int>& temperatures) {
    int count = 0;
    for (int temp : temperatures) {
        if (temp > 35) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of a day with a temperature below 15°C
int findFirstBelow15(const vector<int>& temperatures) {
    for (int i = 0; i < temperatures.size(); i++) {
        if (temperatures[i] < 15) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such day is found
}

// Function to return an array of temperatures decreased by 5°C
vector<int> decreaseTemperaturesBy5(const vector<int>& temperatures) {
    vector<int> decreasedTemperatures;
    for (int temp : temperatures) {
        decreasedTemperatures.push_back(temp - 5);
    }
    return decreasedTemperatures;
}

int main() {
    vector<int> temperatures = {30, 32, 28, 40, 36, 38, 34, 35};  // Example temperatures over a week (8 days)
    
    // Calculate the sum of all temperatures
    int sum = 0;
    for (int temp : temperatures) {
        sum += temp;
    }
    
    if (sum > 250) {
        int countAbove35 = countDaysAbove35(temperatures);
        cout << "Number of days with temperatures above 35°C: " << countAbove35 << endl;
    } else if (sum < 250) {
        int firstBelow15 = findFirstBelow15(temperatures);
        if (firstBelow15 != -1) {
            cout << "First day with a temperature below 15°C is at position: " << firstBelow15 << endl;
        } else {
            cout << "No day found with a temperature below 15°C" << endl;
        }
    } else {  // If sum == 250
        vector<int> decreasedTemperatures = decreaseTemperaturesBy5(temperatures);
        cout << "Temperatures decreased by 5°C: ";
        for (int temp : decreasedTemperatures) {
            cout << temp << " ";
        }
        cout << endl;
    }

    return 0;
}

/* q-11
 If the product of 7 transaction amounts is greater than $10,000,
  call a function that separates transactions into those above and below $1,000. 
  If the product is less than $10,000, call a function that finds the first occurrence of a transaction below $500.
   If the product is exactly $10,000, call a function that finds the last occurrence of a transaction above $2,000.*/

   #include <iostream>
#include <vector>
using namespace std;

// Function to separate transactions into those above and below $1,000
void separateAboveBelow1000(const vector<double>& transactions, vector<double>& above1000, vector<double>& below1000) {
    for (double transaction : transactions) {
        if (transaction > 1000) {
            above1000.push_back(transaction);
        } else {
            below1000.push_back(transaction);
        }
    }
}

// Function to find the first occurrence of a transaction below $500
int findFirstBelow500(const vector<double>& transactions) {
    for (int i = 0; i < transactions.size(); i++) {
        if (transactions[i] < 500) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such transaction is found
}

// Function to find the last occurrence of a transaction above $2,000
int findLastAbove2000(const vector<double>& transactions) {
    for (int i = transactions.size() - 1; i >= 0; i--) {
        if (transactions[i] > 2000) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such transaction is found
}

int main() {
    vector<double> transactions = {1200, 2500, 400, 1500, 5000, 300, 2000};  // Example transaction amounts
    
    // Calculate the product of all transaction amounts
    double product = 1;
    for (double transaction : transactions) {
        product *= transaction;
    }
    
    if (product > 10000) {
        vector<double> above1000, below1000;
        separateAboveBelow1000(transactions, above1000, below1000);
        
        // Output the separated lists
        cout << "Transactions above $1,000: ";
        for (double t : above1000) {
            cout << t << " ";
        }
        cout << endl;

        cout << "Transactions below $1,000: ";
        for (double t : below1000) {
            cout << t << " ";
        }
        cout << endl;

    } else if (product < 10000) {
        int firstBelow500 = findFirstBelow500(transactions);
        if (firstBelow500 != -1) {
            cout << "First transaction below $500 is at position: " << firstBelow500 << endl;
        } else {
            cout << "No transaction found below $500" << endl;
        }
    } else {  // If product == 10000
        int lastAbove2000 = findLastAbove2000(transactions);
        if (lastAbove2000 != -1) {
            cout << "Last transaction above $2,000 is at position: " << lastAbove2000 << endl;
        } else {
            cout << "No transaction found above $2,000" << endl;
        }
    }

    return 0;
}


/*q-12
If the average number of products sold per hour in a day is greater than 60,
 call a function that counts the number of hours with sales above 75. If the average is less than 60, 
 call a function that finds the first occurrence of an hour with sales below 30. If the average is exactly 60,
  call a function that calculates the difference between the highest and lowest sales in an hour.*/

  #include <iostream>
#include <vector>
#include <algorithm>  // For std::max_element and std::min_element
using namespace std;

// Function to count the number of hours with sales above 75
int countHoursAbove75(const vector<int>& sales) {
    int count = 0;
    for (int sale : sales) {
        if (sale > 75) {
            count++;
        }
    }
    return count;
}

// Function to find the first occurrence of an hour with sales below 30
int findFirstBelow30(const vector<int>& sales) {
    for (int i = 0; i < sales.size(); i++) {
        if (sales[i] < 30) {
            return i + 1;  // Return the 1-indexed position
        }
    }
    return -1;  // If no such hour is found
}

// Function to calculate the difference between the highest and lowest sales
int differenceBetweenMaxMin(const vector<int>& sales) {
    if (sales.empty()) return 0;
    int maxSale = *max_element(sales.begin(), sales.end());
    int minSale = *min_element(sales.begin(), sales.end());
    return maxSale - minSale;
}

int main() {
    vector<int> sales = {55, 80, 70, 85, 40, 20, 90};  // Example sales data per hour
    
    // Calculate the average number of products sold per hour
    int sumSales = 0;
    for (int sale : sales) {
        sumSales += sale;
    }
    double averageSales = static_cast<double>(sumSales) / sales.size();
    
    if (averageSales > 60) {
        int countAbove75 = countHoursAbove75(sales);
        cout << "Number of hours with sales above 75: " << countAbove75 << endl;
    } else if (averageSales < 60) {
        int firstBelow30 = findFirstBelow30(sales);
        if (firstBelow30 != -1) {
            cout << "First hour with sales below 30 is at position: " << firstBelow30 << endl;
        } else {
            cout << "No hour found with sales below 30" << endl;
        }
    } else {  // If averageSales == 60
        int difference = differenceBetweenMaxMin(sales);
        cout << "Difference between highest and lowest sales: " << difference << endl;
    }

    return 0;
}

/*q-13
 If the sum of 9 account balances is greater than $50,000, call a function that counts the number of accounts with balances above $10,000.
  If the sum is less than $50,000, call a function that finds the number of occurrences of balances below $5,000.
   If the sum is exactly $50,000, call a function that returns an array where each balance is incremented by $1,000.*/
   #include <iostream>
#include <vector>
using namespace std;

// Function to count the number of accounts with balances above $10,000
int countBalancesAbove10000(const vector<double>& balances) {
    int count = 0;
    for (double balance : balances) {
        if (balance > 10000) {
            count++;
        }
    }
    return count;
}

// Function to find the number of occurrences of balances below $5,000
int countBalancesBelow5000(const vector<double>& balances) {
    int count = 0;
    for (double balance : balances) {
        if (balance < 5000) {
            count++;
        }
    }
    return count;
}

// Function to return an array where each balance is incremented by $1,000
vector<double> incrementBalancesBy1000(const vector<double>& balances) {
    vector<double> incrementedBalances;
    for (double balance : balances) {
        incrementedBalances.push_back(balance + 1000);
    }
    return incrementedBalances;
}

int main() {
    vector<double> balances = {12000, 4500, 6000, 8000, 13000, 3000, 9000, 15000, 4000};  // Example account balances
    
    // Calculate the sum of all balances
    double sum = 0;
    for (double balance : balances) {
        sum += balance;
    }
    
    if (sum > 50000) {
        int countAbove10000 = countBalancesAbove10000(balances);
        cout << "Number of accounts with balances above $10,000: " << countAbove10000 << endl;
    } else if (sum < 50000) {
        int countBelow5000 = countBalancesBelow5000(balances);
        cout << "Number of occurrences of balances below $5,000: " << countBelow5000 << endl;
    } else {  // If sum == 50000
        vector<double> incrementedBalances = incrementBalancesBy1000(balances);
        cout << "Balances incremented by $1,000: ";
        for (double balance : incrementedBalances) {
            cout << balance << " ";
        }
        cout << endl;
    }

    return 0;
}
