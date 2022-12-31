# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

# Find the sum of all the multiples of 3 or 5 below 1000.

class Problem1:
    def __init__(self):
        self.sum = 0
        self.limit = 1000

    def solve(self):
        for i in range(self.limit):
            if i % 3 == 0 or i % 5 == 0:
                self.sum += i
        return self.sum

if __name__ == '__main__':
    p = Problem1()
    print(p.solve())
