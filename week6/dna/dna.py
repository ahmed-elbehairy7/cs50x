from csv import DictReader
from sys import argv, exit


def main():

    if len(argv) != 3:
        print("Usage: python dna.py file.csv dnas.txt")
        exit()
    file, data = argv[1], argv[2]

    with open(file) as f:
        content = DictReader(f)
        people = [x for x in content]

    with open(data) as d:
        data = d.read()

    matches = {}
    for sequence in people[0].keys():
        if sequence == 'name':
            continue
        matches[sequence] = longest_match(data, sequence)

    for person in people:
        match = True
        for seq in matches:
            if int(person[seq]) != matches[seq]:
                match = False

        if match:
            print(person['name'])
            return

    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
