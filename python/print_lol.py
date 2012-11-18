def print_lol (the_list):
    for each_item in the_list:
        if isinstance(each_item, list):
            print_lol(each_item)
        else:
            print(each_item)

one = [12, 34, 5, 3456, [456, 4565, 98, [2345, 5234]]]

print_lol(one)
