SELECT DISTINCT b.Num
From (
    SELECT Num, (
        CASE
        WHEN @prev = Num THEN @count := @count + 1
        WHEN (@prev := Num) IS NOT NULL THEN @count := 1
        END
    ) n
    FROM Logs, (SELECT @count := 1, @prev := NULL) a
) b
WHERE b.n >= 3
