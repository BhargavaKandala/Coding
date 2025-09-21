function countStudents(students, sandwiches) {
    let circular = 0;
    let square = 0;

    // Count the number of students preferring each type of sandwich
    for (let student of students) {
        if (student === 0) square++;
        else circular++;
    }

    // Iterate through the sandwiches and check if a student can eat
    for (let sandwich of sandwiches) {
        if (sandwich === 0) {
            if (square > 0) square--;
            else break; // No student left who prefers square sandwich
        } else {
            if (circular > 0) circular--;
            else break; // No student left who prefers circular sandwich
        }
    }

    // Return the remaining count of students who couldn't eat
    return circular + square;
}

