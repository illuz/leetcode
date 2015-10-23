#!/usr/bin/python
# -*- coding: utf-8 -*-
# Author:      illuz <iilluzen[at]gmail.com>
# File:        table_generator.py
# Create Date: 2015-02-02 11:03:32
# Descripton:  Generate markdown table code in readme.

import os
import operator
import re

res = {}
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
    '296'
    ]

for root, dirs, files in os.walk('.'):
    # pass .
    if len(root) < 2:
        continue
    # fix gdb file in mac
    if 'a.' in root:
        continue
    res[root[2:]] = []
    for file in files:
        if file[-3:] == 'cpp':
            res[root[2:]].append('C++')
        elif file[-4:] == 'java':
            res[root[2:]].append('Java')
        elif file[-2:] == 'py':
            res[root[2:]].append('Python')
        elif file[-2:] == 'sh':
            res[root[2:]].append('Shell')
        elif file[-3:] == 'sql':
            res[root[2:]].append('Sql')
        elif file[-2:] == 'md':
            res[root[2:]].append('Notes')
    
    if root[2:5] in leetcode_book:
        continue
    total += 1
    if res[root[2:]]:
        solved += 1


# sort and generate
new_res = sorted(res.items(), key=operator.itemgetter(0))

# table head

print ('There are {} problems ({} problems for a fee).  \n'.format(total+len(leetcode_book), len(leetcode_book)))
print ('I have solved {} / {} problems.=w=  \n'.format(solved, total))
print ('| \# | Problems | Solutions | Note |')
print ('|----|----------|-----------|------|')

for prb, cont in new_res:
    link = 'https://leetcode.com/problems/'
    link += re.sub('_', '-', re.sub('\(|\)', '', prb[4:])) + '/'

    if len(prb[4:]) > 40:
        prb = prb[:37] + '...'
    if prb[:3] in leetcode_book:
        prb += ' $'

    p = '| ' + prb[:3] + ' | [' + re.sub('_', ' ', prb[4:]) + '](' + link + ') | '

    # exclude leetcode book
    if prb[:3] in leetcode_book:
        p += '&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Not Buy | &nbsp;&nbsp;&nbsp;&nbsp;Not Buy |'
    elif cont != []:
        sol = '['
        if 'C++' in cont:
            sol += 'C++ '
        if 'Java' in cont:
            sol += 'Java '
        if 'Python' in cont:
            sol += 'Python '
        if 'Shell' in cont:
            sol += 'Shell Script '
        if 'Sql' in cont:
            sol += 'SQL '
        sol = sol[:-1] + ']'
        sol = sol.rjust(15, ' ')
        p = p + re.sub(' ', '&nbsp;', sol) + '(./solutions/' + prb + ') |'
        if 'Notes' in cont:
            p += ' &nbsp;&nbsp;&nbsp;[Note Here](./solutions/' + prb + ') |'
        else:
            p += ' Coming soon |'
    else:
        p += ' &nbsp;&nbsp;Coming soon | Coming soon |'

    print (p)
