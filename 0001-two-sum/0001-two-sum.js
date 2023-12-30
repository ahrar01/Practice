/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const map = {};
    for(let i=0;i<nums.length;i++){
        const findNo = target - nums[i];
        if(map[findNo] != undefined){
            return [map[findNo],i];
        }
        map[nums[i]] = i;
    }
    return [-1,-1]
};