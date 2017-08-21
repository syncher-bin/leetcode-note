# leetcode-note
leetcode 刷题笔记

## [Two Sum](https://leetcode.com/problems/two-sum/description/)
### 问题描述
给定一个整数数组，返回包含和等于给定目标值的两个元素。

你可以假设每个输入都有一个确定的解，且一个元素不能使用两次。

```
Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

### 分析
- 简单思路 复杂度O(n^2)

	遍历两次数组，分别使用 i,j 两个计数器，**当下标不想等（i != j）**时判断两个数组元素之和是否为目标值，``nums[i] + nums[j] == target``?

JavaScript 示例代码：
```
var twoSum = function(nums, target) {
    let result = [];
    for (let i = 0; i < nums.length; i++) {
        for (let j = 0; j < nums.length; j++) {
            if (i != j && nums[i] + nums[j] == target) {
                result.push(i);
                result.push(j);
                return result; // 注意找到值以后立即返回
            }
        }
    }
};
```

- 改进思路 O(n)

	使用 hashMap，使用两次

```
var twoSum = function(nums, target) {
    let m = new Map();
    for (let k = 0; k < nums.length; k++) {
        m.set(nums[k],k);
    }

    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        if(m.has(complement)  && m.get(complement) != i) {
            return [i,m.get(complement)];
        }
    }
};
```

- 再次改进

91.52% 使用一次 hsah

```
var twoSum = function(nums, target) {
 	var obj = {};
    for (var i=0; i < nums.length; i++) {
        var diff = target - nums[i];
        if (obj[nums[i]] === undefined) {
            obj[diff] = i;

        } else {
            return [obj[nums[i]], i];
        }
    }
	console.log(obj)
}

### 总结
- Duff's Device 优化遍历

- HashMap