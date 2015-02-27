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

for root, dirs, files in os.walk('.'):
    # pass .
    if len(root) < 2:
        continue
    
    res[root[2:]] = []
    for file in files:
        if file[-3:] == 'cpp':
            res[root[2:]].append('C++')
        elif file[-4:] == 'java':
            res[root[2:]].append('Java')
        elif file[-2:] == 'py':
            res[root[2:]].append('Python')
        elif file[-3:] == 'sql':
            res[root[2:]].append('Sql')
        elif file[-2:] == 'md':
            res[root[2:]].append('Notes')
    
    total += 1
    if res[root[2:]]:
        solved += 1


# sort and generate
new_res = sorted(res.items(), key=operator.itemgetter(0))

# table head

print 'I have solved {} / {} problems.=w=  \n'.format(solved, total)
print '| \# | Link to leetcode | Solutions | Note |'
print '|----|------------------|-----------|------|'

for prb, cont in new_res:
    link = 'https://oj.leetcode.com/problems/'
    # sad that the 050.Pow(x, n) && 069.Sqrt(x) will not available
    if prb[:3] == '050':
        link += 'Powx-n'
    if prb[:3] == '069':
        link += 'Sqrtx'
    else:
        link += re.sub('_', '-', prb[4:]) + '/'

    p = '| ' + prb[:3] + ' | [' + re.sub('_', ' ', prb[4:]) + '](' + link + ') | '
    if cont != []:
        p += '['
        if 'C++' in cont:
            p += 'Cpp '
        if 'Java' in cont:
            p += 'Java '
        if 'Python' in cont:
            p += 'Py '
        if 'Sql' in cont:
            p += 'Sql '
        p = p[:-1] + '](./solutions/' + prb + ') |'
        if 'Notes' in cont:
            p += ' [✓](./solutions/' + prb + ') |'
        else:
            p += ' - |'
    else:
        p += '- | - |'

    print p
