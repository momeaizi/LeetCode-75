class Solution:
    def reverseVowels(self, s: str) -> str:
        s_arr = [char for char in s]
        start = 0
        end = len(s) - 1

        while (start < end):
            while (start < end and s[start] not in 'aeiouAEIOU'):
                start += 1
            while (start < end and s[end] not in 'aeiouAEIOU'):
                end -= 1

            s_arr[start] = s[end]
            s_arr[end] = s[start]
            end -= 1
            start += 1

        return ''.join(s_arr)
        
