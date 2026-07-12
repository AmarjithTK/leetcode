
# ---------------------- Group Anagrams Logic ----------------------
# sorted(word)
#   - Treats the string as an iterable of characters.
#   - Returns a NEW LIST containing the characters in alphabetical order.
#   - Example:
#         sorted("eat") -> ['a', 'e', 't']
#         sorted("tea") -> ['a', 'e', 't']
#   - Since anagrams contain the same letters, they produce the same sorted list.
#
# tuple(sorted(word))
#   - Converts the sorted list into a tuple.
#   - Tuples are immutable (cannot be changed) and are hashable,
#     so they can be used as dictionary keys.
#   - Lists are mutable and cannot be dictionary keys.
#   - Example:
#         tuple(sorted("eat")) -> ('a', 'e', 't')
#         tuple(sorted("tea")) -> ('a', 'e', 't')
#   - This tuple acts as a unique "signature" for every anagram group.
#
# maps[key].append(word)
#   - 'maps' is a dictionary where:
#         key   = sorted tuple (anagram signature)
#         value = list of words belonging to that anagram group
#   - Every word with the same key is appended to the same list.
#
# Example:
#     "eat" -> ('a','e','t') -> ['eat']
#     "tea" -> ('a','e','t') -> ['eat','tea']
#     "ate" -> ('a','e','t') -> ['eat','tea','ate']
#
# maps.values()
#   - Returns a dict_values object containing all the dictionary values.
#   - It is a dynamic view, not a normal Python list.
#   - Example:
#         dict_values([
#             ['eat','tea','ate'],
#             ['tan','nat'],
#             ['bat']
#         ])
#
# list(maps.values())
#   - Converts the dict_values view into a regular list.
#   - LeetCode expects List[List[str]], so this conversion is necessary.
#   - Final output:
#         [
#             ['eat','tea','ate'],
#             ['tan','nat'],
#             ['bat']
#         ]
# ---------------------------------------------------------------

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        maps =  defaultdict(list)

        for word in strs:


            keys = tuple(sorted(word))
            print(keys)
            maps[keys].append(word)


        return list(maps.values())