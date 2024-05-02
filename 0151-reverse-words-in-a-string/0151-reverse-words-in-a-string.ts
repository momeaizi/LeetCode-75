function reverseWords(s: string): string {
    let words: string[] = s.split(/\s+/);

    words.reverse();

    return words.join(' ').trim();
};