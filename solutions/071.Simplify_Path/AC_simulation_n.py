# Author:      illuz <iilluzen[at]gmail.com>
# File:        AC_simulation_n.py
# Create Date: 2015-02-04 09:59:44
# Descripton:   


class Solution:
    # @param path, a string
    # @return a string
    def simplifyPath(self, path):
        ps = path.split('/')
        res = []
        for d in ps:
            if d == '..':
                if res:
                    res.pop()
            elif d == '.' or d == '':
                pass
            else:
                res.append(d)
        return '/' + '/'.join(res)

