// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s1[101], s2[101];

//     // Input strings
//     fgets(s1, sizeof(s1), stdin);
//     fgets(s2, sizeof(s2), stdin);

//     // Remove newline characters from the strings
//     s1[strcspn(s1, "\n")] = 0;
//     s2[strcspn(s2, "\n")] = 0;

//     int freq[26] = {0};

//     // Calculate character frequencies in s1
//     for(int i = 0; i < strlen(s1); i++) {
//         if(s1[i] >= 'a' && s1[i] <= 'z') {
//             freq[s1[i] - 'a']++;
//         }
//     }

//     int commonCount = 0;

//     // Check and count common characters in s2
//     for(int i = 0; i < strlen(s2); i++) {
//         if(s2[i] >= 'a' && s2[i] <= 'z' && freq[s2[i] - 'a'] > 0) {
//             commonCount++;
//             freq[s2[i] - 'a'] = 0; // Mark as visited
//         }
//     }

//     printf("%d\n", commonCount);

//     return 0;
// }
