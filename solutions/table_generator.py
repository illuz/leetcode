# Author:      illuz <iilluzen[at]gmail.com>
# File:        table_generator.py
# Create Date: 2015-02-02 11:03:32
# Descripton:  Generate markdown table code in readme.

import os
import operator
import re

res = {}

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
    

# sort and generate
new_res = sorted(res.items(), key=operator.itemgetter(0))

for prb, lan in new_res:
    link = 'https://oj.leetcode.com/problems/'
    # sad that the 050.Pow(x, n) will not available
    if prb[:3] == '050':
        link += 'Powx-n'
    else:
        link += re.sub('_', '-', prb[4:]) + '/'

    p = '| ' + prb[:3] + ' | [' + prb[4:] + '](' + link + ') | '
    if lan != []:
        p += '['
        if 'C++' in lan:
            p += 'C++ '
        if 'Java' in lan:
            p += 'Java '
        if 'Python' in lan:
            p += 'Python '
        if 'Sql' in lan:
            p += 'Sql '
        p = p[:-1] + '](./solutions/' + prb + ') |'
    else:
        p += '- |'

    print p
