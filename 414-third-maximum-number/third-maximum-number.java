class Solution {
    public int thirdMax(int[] nums) {

        List<Integer> list = Arrays.stream(nums)
                .boxed()
                .distinct()
                .sorted(Comparator.reverseOrder())
                .toList();

        return list.size() >= 3 ? list.get(2) : list.get(0);
    }
}