private void quickSort(int[] nums, int low, int high) {
    if (low < high) {
        int pidx = partition(nums, low, high);
        quickSort(nums, low, pidx - 1);
        quickSort(nums, pidx + 1, high);
    }
}

private int partition(int[] nums, int low, int high) {
    int pivot = nums[low];
    int start = low + 1;
    int end = high;

    while (start <= end) {
        while (start <= end && nums[start] <= pivot) {
            start++;
        }
        while (start <= end && nums[end] > pivot) {
            end--;
        }
        if (start <= end) {
            swap(nums, start, end);
        }
    }
    swap(nums, low, end);
    return end;
}

private void swap(int[] nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
