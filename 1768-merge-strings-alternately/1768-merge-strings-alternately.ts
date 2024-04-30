function mergeAlternately(word1: string, word2: string): string {

    let i: number = 0;
    let merged: string = '';

    for (; i < word1.length && i < word2.length; ++i) {
        merged += word1[i] + word2[i];
    }

    merged += word1.substring(i) + word2.substring(i)
    
    return merged;
};