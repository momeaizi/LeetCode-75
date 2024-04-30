function gcdOfStrings(str1: string, str2: string): string {
    function gcd(a: number, b: number): number {
        while (b != 0) {
            const temp: number = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    if (str1 + str2 == str2 + str1) {
        return str1.substring(0, gcd(str1.length, str2.length));
    } return "";
};