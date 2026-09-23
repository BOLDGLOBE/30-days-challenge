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


<img width="843" height="1005" alt="Screenshot 2026-09-23 235753" src="https://github.com/user-attachments/assets/60fd356d-31c9-4cd8-af6d-20b2af385f0d" />




<img width="556" height="789" alt="Screenshot 2026-09-23 235704" src="https://github.com/user-attachments/assets/7f1c587f-0272-4873-9e63-31fbca959c99" />

