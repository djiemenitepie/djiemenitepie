#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_ACTIVITIES 10
#define MAX_NAME_LENGTH 50

int main() {
    char activities[MAX_ACTIVITIES][MAX_NAME_LENGTH];
    bool isDone[MAX_ACTIVITIES];
    int numActivities = 0;
    int i;
    char password[20], name[20];
    //Login .Enter user name and password
    printf("please enter your User name and password\n");
    scanf("%s%s", &name, &password);
    //Input activities
    printf("%s please enter the activities (type 'done' to finish):\n", &name);

    for (i = 0; i < MAX_ACTIVITIES; i++) {
        printf("Activity %d: ", i + 1);
        fgets(activities[i], sizeof(activities[i]), stdin);

        // Remove newline character if present
        activities[i][strcspn(activities[i], "\n")] = '\0';

        if (strcmp(activities[i], "done") == 0) {
            break;
        }

        numActivities++;
    }

    // Check off activities
    printf("\nActivities:\n");

    for (i = 0; i < numActivities; i++) {
        printf("[%c] %s\n", isDone[i] ? 'X' : ' ', activities[i]);

        // Prompt for completion status
        printf("Mark as done? (y/n): ");
        char choice;
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            isDone[i] = true;
        }
    }

    // Display completed activities
    printf("\nCompleted activities:\n");

    for (i = 0; i < numActivities; i++) {
        if (isDone[i]) {
            printf("[X] %s\n", activities[i]);
        }
    }

    return 0;
}
