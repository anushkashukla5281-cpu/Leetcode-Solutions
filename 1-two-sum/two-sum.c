/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* arr, int n, int target, int* returnSize) {
    int num1,  num2;
    int* ans = malloc(2 * sizeof(int));

    for(int i = 0; i < n; i++){
        num1 = arr[i];

        for(int j = i + 1; j < n; j++){

            if(num1 + arr[j] == target){

                *returnSize = 2;
                ans[0] = i;
                ans[1] = j;

                return ans;
            }
        }
    }

    return NULL;
}