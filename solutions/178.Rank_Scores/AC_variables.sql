SELECT Score, 
(
    CASE
    # if prev = curRow.Score then return rank
    WHEN @prev = Score THEN @rank
    # else let prev = curRow.Score, rank++, and return rank
    WHEN (@prev := Score) IS NOT NULL THEN @rank := @rank + 1
    END
)
FROM Scores,
# SELECT to initialize rank, prev. The 'a': Every derived table must have its own alias
(SELECT @rank := 0, @prev := NULL) a
ORDER BY Score DESC

