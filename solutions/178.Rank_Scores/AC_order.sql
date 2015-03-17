SELECT A.Score Score, 
(
    SELECT COUNT(DISTINCT B.Score)
    FROM Scores B
    WHERE B.Score >= A.Score
) Rank
FROM Scores A
ORDER BY A.Score DESC

