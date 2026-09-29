[README.md](https://github.com/user-attachments/files/32571592/README.md)
# Challenge 01 – Student Marks Card

**SRM University-AP | CSE 101 – Fundamentals of Computing and C Programming**
**30-Day C Programming Challenge**

## Problem Statement

Write a C program that reads the marks of a student in five subjects and prints the **total**, **average** and **percentage**. Each subject is out of 100, so the maximum total is 500.

## Algorithm

1. Start.
2. Declare integer variables `sub1` to `sub5` and `total`, and float variables `average` and `percentage`.
3. Read the marks of the five subjects from the user.
4. Calculate `total = sub1 + sub2 + sub3 + sub4 + sub5`.
5. Calculate `average = total / 5.0`.
6. Calculate `percentage = (total / 500.0) * 100.0`.
7. Display the total, average and percentage.
8. Stop.

## Source Code (`c1.c`)

```c
#include<stdio.h>
int main() {
int sub1,sub2,sub3,sub4,sub5,total;
float  average,percentage;
//print and scan five subjects marks//

printf("\n <<<<<<student marks card>>>>>>> ");

printf("\n enter subject1 marks");
scanf("%d",&sub1);
printf("\n enter subject2 marks");
scanf("%d",&sub2);
printf("\n enter subject3 marks");
scanf("%d",&sub3);
printf("\n enter subject4 marks");
scanf("%d",&sub4);
printf("\n enter subject5 marks");
scanf("%d",&sub5);

/*calculate the total of all five subjects
calculate the average
calculate the percentage*/

total=sub1+sub2+sub3+sub4+sub5;
printf("\n total marks of the student =%d",total);

average=total/5.0;
printf("\n average of the student =%.2f",average);

percentage=(total/500.0)*100.0;
printf("\n percentage of the student =%.2f",percentage);

return 0;
}
```

## How to Compile and Run

```bash
gcc c1.c -o c1
./c1
```

## Test Cases

| Test | Subject 1 | Subject 2 | Subject 3 | Subject 4 | Subject 5 | Total | Average | Percentage |
|------|-----------|-----------|-----------|-----------|-----------|-------|---------|------------|
| 1    | 80 | 75 | 90 | 85 | 70 | 400 | 80.00 | 80.00 |
| 2    | 65 | 72 | 68 | 75 | 80 | 360 | 72.00 | 72.00 |
| 3    | 95 | 85 | 92 | 90 | 85 | 447 | 89.40 | 89.40 |

## Sample Output

### Test Case 1

```
 <<<<<<student marks card>>>>>>> 
 enter subject1 marks80

 enter subject2 marks75

 enter subject3 marks90

 enter subject4 marks85

 enter subject5 marks70

 total marks of the student =400
 average of the student =80.00
 percentage of the student =80.00
```

### Test Case 2

```
 <<<<<<student marks card>>>>>>> 
 enter subject1 marks65

 enter subject2 marks72

 enter subject3 marks68

 enter subject4 marks75

 enter subject5 marks80

 total marks of the student =360
 average of the student =72.00
 percentage of the student =72.00
```

### Test Case 3

```
 <<<<<<student marks card>>>>>>> 
 enter subject1 marks95

 enter subject2 marks85

 enter subject3 marks92

 enter subject4 marks90

 enter subject5 marks85

 total marks of the student =447
 average of the student =89.40
 percentage of the student =89.40
```

## Author

- **Name:** JASWANTH . J
- **Registration No.:** AP26110090182




The input of the student marks card


<img width="556" height="789" alt="Screenshot 2026-09-23 235704" src="https://github.com/user-attachments/assets/3911dd39-7d88-4b75-a2b9-c2127c742d8d" />





The output of the student marks card




<img width="843" height="1005" alt="Screenshot 2026-09-23 235753" src="https://github.com/user-attachments/assets/3c818020-e0d5-4260-97a1-7cfb3b8ed8aa" />

---

# Challenge 02 – TripCalc: Fuel & Trip Cost Calculator

**SRM University-AP | CSE 101 – Fundamentals of Computing and C Programming**
**30-Day C Programming Challenge**

## Problem Statement

Write a C program to read the total distance to be travelled (in kilometres), the vehicle's mileage (kilometres per litre), and the current fuel price per litre. Calculate and display the amount of fuel required for the trip and the total fuel cost.

## Algorithm

1. Start.
2. Declare float variables `distance`, `mileage` and `price`, and float variables `fuel_required` and `total_cost`.
3. Read the total distance of the trip, the vehicle's mileage and the fuel price per litre from the user.
4. Calculate `fuel_required = distance / mileage`.
5. Calculate `total_cost = fuel_required * price`.
6. Display the fuel required and the total fuel cost.
7. Stop.

## Source Code (`c2.c`)

```c
#include<stdio.h>
int main() {
float distance,mileage,price;
float fuel_required,total_cost;
//print and scan the trip details//

printf("\n <<<<<<TripCalc>>>>>>> ");

printf("\n enter total distance of the trip (in km)");
scanf("%f",&distance);
printf("\n enter vehicle mileage (km per litre)");
scanf("%f",&mileage);
printf("\n enter fuel price per litre");
scanf("%f",&price);

/*calculate the fuel required for the trip
calculate the total fuel cost*/

fuel_required=distance/mileage;
printf("\n total fuel required for the trip =%.2f litres",fuel_required);

total_cost=fuel_required*price;
printf("\n total fuel cost of the trip =Rs.%.2f",total_cost);

return 0;
}
```

## How to Compile and Run

```bash
gcc c2.c -o c2
./c2
```

## Test Cases

| Test | Distance (km) | Mileage (km/L) | Price (Rs./L) | Fuel Required (L) | Total Cost (Rs.) |
|------|---------------|----------------|----------------|--------------------|-------------------|
| 1    | 240 | 20 | 100 | 12.00 | 1200.00 |
| 2    | 300 | 15 | 105 | 20.00 | 2100.00 |
| 3    | 180 | 18 | 95 | 10.00 | 950.00 |

## Sample Output

### Test Case 1

```
 <<<<<<TripCalc>>>>>>> 
 enter total distance of the trip (in km)240

 enter vehicle mileage (km per litre)20

 enter fuel price per litre100

 total fuel required for the trip =12.00 litres
 total fuel cost of the trip =Rs.1200.00
```

### Test Case 2

```
 <<<<<<TripCalc>>>>>>> 
 enter total distance of the trip (in km)300

 enter vehicle mileage (km per litre)15

 enter fuel price per litre105

 total fuel required for the trip =20.00 litres
 total fuel cost of the trip =Rs.2100.00
```

### Test Case 3

```
 <<<<<<TripCalc>>>>>>> 
 enter total distance of the trip (in km)180

 enter vehicle mileage (km per litre)18

 enter fuel price per litre95

 total fuel required for the trip =10.00 litres
 total fuel cost of the trip =Rs.950.00
```

## Author

- **Name:** JASWANTH . J
- **Registration No.:** AP26110090182
INPUT 
- <img width="498" height="459" alt="Screenshot 2026-09-29 192430" src="https://github.com/user-attachments/assets/612118c6-19d8-46d4-be3c-da382b8dfcfc" />

OUTPUT
<img width="725" height="645" alt="Screenshot 2026-09-29 192406" src="https://github.com/user-attachments/assets/4f05ed24-a7c2-40f3-bb6f-70735ed34cab" />


