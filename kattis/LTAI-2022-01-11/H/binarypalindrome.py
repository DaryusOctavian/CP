class BinaryPalindrome:
    @staticmethod
    def length_kth(n):
        accumulated_counts = [1]
        while n > accumulated_counts[-1]:
            accumulated_counts.append(accumulated_counts[-1] + (lambda l: 2**(
                (l-1)//2 if l % 2 else (l-2)//2))(len(accumulated_counts)+1))
        return len(accumulated_counts), 0 if n == 1 else n-accumulated_counts[-2]-1

    @staticmethod
    def nth_bin_palindrome(n):
        if n < 3:
            return int('1'*n, base=2)
        l, k = BinaryPalindrome.length_kth(n)
        if l % 2 == 0:
            return (lambda _b: int(f'1{_b}{_b[::-1]}1', base=2))((lambda b: ((l-2)//2 - len(b)) * '0' + b)(bin(k)[2:]))
        else:
            return (lambda _b: int(f'1{_b}{_b[:-1][::-1]}1', base=2))((lambda b: ((l-1)//2 - len(b)) * '0' + b)(bin(k)[2:]))


print(BinaryPalindrome.nth_bin_palindrome(int(input())))
