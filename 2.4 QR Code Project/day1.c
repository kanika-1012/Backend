#include <stdio.h>

// Structure to represent a complex number
struct Complex
{
    float real;
    float imag;
};

// Function to add two complex numbers (call by value)
struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to multiply two complex numbers (call by address)
void multiplyComplex(struct Complex *num1, struct Complex *num2)
{
    float real = num1->real * num2->real - num1->imag * num2->imag;
    float imag = num1->real * num2->imag + num1->imag * num2->real;
    num1->real = real;
    num1->imag = imag;
}

int main()
{
    struct Complex num1, num2, result;
    int choice;

    printf("Enter real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    printf("Menu:\n");
    printf("1. Add two complex numbers\n");
    printf("2. Multiply two complex numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = addComplex(num1, num2);
        printf("Result of addition: %.2f + %.2fi\n", result.real, result.imag);
        break;
    case 2:
        multiplyComplex(&num1, &num2);
        printf("Result of multiplication: %.2f + %.2fi\n", num1.real, num1.imag);
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
// insertion of elements in an array
#include <stdio.h>

// Function to insert an element at a specific position in the array
void insertElement(int arr[], int *n, int position, int element)
{
    if (position < 0 || position > *n)
    {
        printf("Invalid position for insertion.\n");
        return;
    }

    for (int i = *n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*n)++;
}

// Function to delete an element from a specific position in the array
void deleteElement(int arr[], int *n, int position)
{
    if (position < 0 || position >= *n)
    {
        printf("Invalid position for deletion.\n");
        return;
    }

    for (int i = position; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

// Function to perform linear search in the array
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1; // Element not found
}

// Function to traverse and display the array
void traverseArray(int arr[], int n)
{
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100], n, choice, position, element, key, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Linear search\n");
        printf("4. Traverse array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter position and element to insert: ");
            scanf("%d %d", &position, &element);
            insertElement(arr, &n, position, element);
            break;
        case 2:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteElement(arr, &n, position);
            break;
        case 3:
            printf("Enter element to search: ");
            scanf("%d", &key);
            index = linearSearch(arr, n, key);
            if (index != -1)
            {
                printf("Element found at position: %d\n", index);
            }
            else
            {
                printf("Element not found.\n");
            }
            break;
        case 4:
            traverseArray(arr, n);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
// perform the foloowing operations using functions in sll
//  count the no. of elements in sll
//  serch for an element in sll
// function to print sll in reverse order