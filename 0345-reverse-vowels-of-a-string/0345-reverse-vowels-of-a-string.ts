function reverseVowels(s: string): string {
    let str: string[] = s.split('');
    let start: number = 0;
    let end: number = s.length - 1;

    while (start < end) {
        while (start < end && 'aeiouAEIOU'.includes(s[start]) == false) ++start;
        while (start < end && 'aeiouAEIOU'.includes(s[end]) == false) --end;

        str[start] = s[end];
        str[end--] = s[start++];
    }

    return str.join('');
};