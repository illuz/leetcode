#!/bin/bash
# readme_generator.sh created by illuz at 2015-02-04 10:44:34
#  

# delete 'solved' to end
sed -i.bak '/for a fee/, $ d' readme.md

# generate table and append
cd solutions
python ./table_generator.py >> ../readme.md

exit 0

