test_1 = [5, 2, 4, 6, 1, 3]
test_1_length = len(test_1)

def insert_sort(array, length):

    result = array

    for i in range(1, length):

        print(result)

        key = result[i]
        
        j = i - 1

        while (j >= 0) and (result[j] > key):

            result[j + 1] = result[j]
            j = j - 1

        result[j + 1] = key



    return result

print(insert_sort(test_1, test_1_length))