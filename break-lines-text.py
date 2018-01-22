# Insert a newline character every 2048 characters
# Tested on Python 3.4

# define function change_file
def change_file(input_filename, output_filename):
    import re

    # open file or throw error if not found
    error = False
    try:
        infile = open(input_filename)
    except FileNotFoundError:
        error = True
        print('\nInput file error: File not found.')

    # save file contents in variable file_string
    file_string = ''
    if error == False:
        for line in infile:
            file_string += line

        infile.close()

    # print file contents
    print('\n===INPUT===\n')
    for line in file_string:
        print(line, end='')

    # print changed file contents
    print('\n===OUTPUT===\n')
    new_file_string = re.sub("(.{2048})", "\\1\n", file_string, 0, re.DOTALL)
    print(new_file_string)

    # write changed contents to output file
    outfile = open(output_filename, 'w')
    outfile.write(new_file_string)

    outfile.close()


# function call
change_file('testin', 'testout')
