cmake_minimum_required(VERSION 3.10)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(include /usr/local/include)

#用于将当前目录下的所有源文件的名字保存在变量 DIR_SRCS 中
aux_source_directory(. DIR_SRCS)

link_directories(/usr/local/lib)

#add_executable(LeetCode src/main.cpp)

#add_executable(unit_test src/unit_test.cpp include/7ReverseInteger.h include/9PalindromeNumber.h include/13RomantoInteger.h include/12IntegertoRoman.h include/14LongestCommonPrefix.h include/20ValidParentheses.h include/22GenerateParentheses.h "include/21MergeTwoSorted Lists.h" "include/26RemoveDuplicatesromSortedArray.h" include/27RemoveElement.h include/203RemoveLinkedListElements.h "include/237DeleteNodeinaLinked List.h" include/28ImplementstrStr.h include/459RepeatedSubstringPattern.h include/35SearchInsertPosition.h include/catch.h include/53MaximumSubarray.h include/58LengthofLastWord.h include/66PlusOne.h include/67AddBinary.h "include/69Sqrt(x).h" include/70ClimbingStairs.h "include/83RemoveDuplicatesfromSorted List.h" include/88MergeSortedArray.h include/100SameTree.h include/TreeNode.h include/101SymmetricTree.h include/104MaximumDepthofBinaryTree.h include/110BalancedBinaryTree.h include/559MaximumDepthofN-aryTree.h include/637AverageofLevelsinBinaryTree.h include/107BinaryTreeLevelOrderTraversalII.h include/111MinimumDepthofBinaryTree.h include/112PathSum.h include/113PathSumII.h include/437PathSumIII.h include/118Pascal'sTriangle.h include/119Pascal'sTriangleII.h include/121BestTimetoBuyandSellStock.h include/122BestTimetoBuyandSellStockII.h include/127WordLadder.h include/125ValidPalindrome.h)

add_executable(unit_test2 src/unit_test2.cpp)

#target_link_libraries(unit_test boost_unit_test_framework)