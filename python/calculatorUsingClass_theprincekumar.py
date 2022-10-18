class Calculator:
    def __init__(self, num1, num2):
        self.num1 = num1
        self.num2 = num2

    def add(self):
        return self.num1 + self.num2

    def sub(self):
        return self.num1 - self.num2

    def mul(self):
        return self.num1 * self.num2

    def div(self):
        return self.num1 / self.num2

if __name__ == '__main__':
    num1 = int(input('Enter first number: '))
    num2 = int(input('Enter second number: '))
    calc = Calculator(num1, num2)
    print('Addition: ', calc.add())
    print('Subtraction: ', calc.sub())
    print('Multiplication: ', calc.mul())
    print('Division: ', calc.div())
