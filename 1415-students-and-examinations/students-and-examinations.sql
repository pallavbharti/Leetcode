SELECT
    r.student_id,
    r.student_name,
    r.subject_name,
    COUNT(e.subject_name) AS attended_exams
FROM (
    SELECT student_id, student_name, subject_name
    FROM Students
    CROSS JOIN Subjects
) AS r
LEFT JOIN Examinations e
    ON r.student_id = e.student_id
    AND r.subject_name = e.subject_name
GROUP BY r.student_id, r.student_name, r.subject_name
ORDER BY r.student_id ASC, r.subject_name ASC;