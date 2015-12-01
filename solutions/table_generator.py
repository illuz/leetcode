#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        table_generator.py
# Create Date: 2015-02-02 11:03:32
# Descripton:  Generate markdown table code in readme.

import os
import operator
import re

solved = 0
total = 0
leetcode_book = [
    '156', '157', '158', '159', '161', '163',
    '167', '170', '186', '243', '244', '245',
    '246', '247', '248', '249', '250', '251',
    '252', '253', '254', '255', '256', '259',
    '261', '265', '266', '267', '269', '270',
    '271', '272', '276', '277', '280', '281',
    '285', '286', '288', '291', '293', '294',
    '296', '298'
    ]

def get_solution_types_by_files(files):
    solution_types = set()
    for file in files:
        if file[-3:] == 'cpp':
            solution_types.add('C++')
        elif file[-4:] == 'java':
            solution_types.add('Java')
        elif file[-2:] == 'py':
            solution_types.add('Python')
        elif file[-2:] == 'sh':
            solution_types.add('Shell')
        elif file[-3:] == 'sql':
            solution_types.add('Sql')
        elif file[-2:] == 'md':
            solution_types.add('Notes')
    return list(solution_types)

def get_problem_map():
    global solved
    global total
    global leetcode_book
    problem_map = {}
    for path, subdirs, files in os.walk('.'):
        # bypass .
        if len(path) < 2:
            continue
        # fix gdb file in mac
        if 'a.' in path:
            continue

        problem_name = path[2:]
        problem_map[problem_name] = get_solution_types_by_files(files)

        # bypass leetcode book
        if path[2:5] in leetcode_book:
            continue
        total += 1
        if problem_map[problem_name]:
            solved += 1
    # sort and generate
    return sorted(problem_map.items(), key = operator.itemgetter(0))

def print_table(problem_map):
    # global solved
    global total
    global leetcode_book

    # table head
    print ('There are {} problems ({} problems for a fee).  \n'.format(total+len(leetcode_book), len(leetcode_book)))
    print ('I have solved {} / {} problems.=w=  \n'.format(solved, total))
    print ('| \# | Problems | Solutions | Note |')
    print ('|----|----------|-----------|------|')

    for long_name, solutions in problem_map:
        link = 'https://leetcode.com/problems/'
        link += re.sub('_', '-', re.sub('\(|\)', '', long_name[4:])) + '/'

        problem_id = long_name[:3]
        problem_name = re.sub('_', ' ', long_name[4:])
        if len(problem_name) > 40:
            short_name = long_name[:36] + '...'
        else:
            short_name = long_name
        if problem_id in leetcode_book:
            short_name += ' $'

        p = '| ' + problem_id + ' | [' + short_name + '](' + link + ') | '

        # exclude leetcode book
        if problem_id in leetcode_book:
            p += '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Not Buy | &nbsp;&nbsp;&nbsp;&nbsp;Not Buy |'
        elif solutions != []:
            solution_string = '[' + ' '.join(solutions) + ']'
            solution_string = solution_string.rjust(15, ' ')
            p = p + re.sub(' ', '&nbsp;', solution_string) + '(./solutions/' + long_name + ') |'
            if 'Notes' in solutions:
                p += ' &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Notes](./solutions/' + long_name + ') |'
            else:
                p += ' Coming soon |'
        else:
            p += ' &nbsp;&nbsp;Coming soon | Coming soon |'
        print (p)

if __name__ == '__main__':
    problem_map = get_problem_map()
    print_table(problem_map)
