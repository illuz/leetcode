SELECT a.Id
FROM Weather a, Weather b
WHERE TO_DAYS(a.Date) = TO_DAYS(b.Date) + 1 AND a.Temperature > b.Temperature
