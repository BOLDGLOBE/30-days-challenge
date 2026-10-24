#include <stdio.h>

int main() {
    int N;
    int arr[12];
    do {
        printf("Enter the number of readings (5 to 12): ");
        scanf("%d", &N);
        if (N < 5 || N > 12) {
            printf("Invalid input! N must be between 5 and 12.\n");
        }
    } while (N < 5 || N > 12);

    for (int i = 0; i < N; i++) {
        do {
            printf("Enter reading %d (0 to 1000): ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] < 0 || arr[i] > 1000) {
                printf("Invalid reading! Must be between 0 and 1000.\n");
            }
        } while (arr[i] < 0 || arr[i] > 1000);
    }


    printf("\n--- Task 1: Original Readings ---\n");
    printf("Readings: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\n--- Task 2: Basic Statistics ---\n");
    int sum = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < N; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    double average = (double)sum / N;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    printf("\n--- Task 3: Second-Largest Distinct Value ---\n");
    int second_max = -1;
    int found_second = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] < max) {
            if (!found_second || arr[i] > second_max) {
                second_max = arr[i];
                found_second = 1;
            }
        }
    }

    if (found_second) {
        printf("Second-largest distinct value: %d\n", second_max);
    } else {
        printf("No second-largest distinct value exists.\n");
    }

    printf("\n--- Task 4: Local Peaks ---\n");
    int peak_count = 0;
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peak_count++;
        }
    }
    printf("Total local peaks: %d\n",peak_count);

    printf("\n--- Task 5: Longest Increasing Run ---\n");
    int max_run = 1;
    int current_run = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[i - 1]) {
            current_run++;
        } else {
            if (current_run > max_run) {
                max_run = current_run;
            }
            current_run = 1;
        }
    }
    if (current_run > max_run) {
        max_run = current_run;
    }
    printf("Length of the longest strictly increasing run: %d\n", max_run);

    printf("\n--- Task 6: In-place Array Rotation ---\n");
    int K;
    printf("Enter integer K to rotate: ");
    scanf("%d", &K);

    int eff_K = (K % N + N) % N;

    if (eff_K > 0) {
        // Step 1: Reverse the entire array
        for (int i = 0; i < N / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[N - 1 - i];
            arr[N - 1 - i] = temp;
        }
        // Step 2: Reverse the first eff_K elements
        for (int i = 0; i < eff_K / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[eff_K - 1 - i];
            arr[eff_K - 1 - i] = temp;
        }
        // Step 3: Reverse the remaining N - eff_K elements
        for (int i = 0; i < (N - eff_K) / 2; i++) {
            int temp = arr[eff_K + i];
            arr[eff_K + i] = arr[N - 1 - i];
            arr[N - 1 - i] = temp;
        }
    }

    printf("Rotated array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("\n--- Task 7: Registration Divisibility Check ---\n");
    int R;
    printf("Enter the last two digits of your registration number: ");
    scanf("%d", &R);

    int D = (R % 9) + 1;
    int divisible_count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] % D == 0) {
            divisible_count++;
        }
    }
    printf("Calculated Value D = %d\n", D);
    printf("Count of values divisible by D in the rotated array: %d\n", divisible_count);

    return 0;
}
