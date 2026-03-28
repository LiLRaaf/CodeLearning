def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b ==0:
        return "Error: can't divide by zero!"
        return a / b

def calculator():
    print("=== Simple Calculator ===")

    while True:
        print("\nOperations: + | * | /")
        print("Type 'quit' to exit")

        choice = input("\nChoose operation: ")

        if choice = "quit":
            print("Bye!")
            break

        if choice not in ["+", "-", "*", "/"]:
            print("Invalid operation, try again.")
            continue

        try:

            a = float(input("Enter first number: "))
            b = float(input("Enter second number: "))
        except ValueError:
            print("That's not a number, try again.")
            continue

        if choice == "+":
            result = add(a, b)
        elif choice == "-":
            result = subtract(a, b)
        elif choice == "*":
            result = multiply(a, b)
            elif choice == "/":
                result = divide(a,b)

        print(f"Result: {a} {choice} {b} = {result}")

calculator ()