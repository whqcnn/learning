def print_lol (the_list, level=0):
    for each_item in the_list:
        if isinstance(each_item, list):
            print_lol(each_item, level+1)
        else:
            for tab_stop in range(level):
                print "\t",
            print each_item

one = [12, 34, 5, 3456, [456, 4565, 98, [2345, 5234]]]

print_lol(one, 2)
