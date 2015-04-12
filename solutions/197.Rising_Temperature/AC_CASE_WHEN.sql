# 1056 ms

SELECT Id
FROM (
    SELECT Id, (
        CASE
        WHEN (@prevDate + 1 = TO_DAYS(Date)) AND (@prevTemp < Temperature) THEN ((@prevTemp := Temperature) IS NOT NULL AND (@prevDate := TO_DAYS(Date)) IS NOT NULL)
        WHEN ((@prevTemp := Temperature) IS NOT NULL AND (@prevDate := TO_DAYS(Date)) IS NOT NULL) THEN FALSE
        END
    ) flag
    FROM Weather, (SELECT @prevTemp := NULL, @prevDate := NULL) a
    ORDER BY Date
) c
WHERE flag = TRUE
