function countStudents(students, sandwiches) {
    let circular = 0;
    let square = 0;

    for (let student of students) {
        if (student === 0) square++;
        else circular++;
    }

    for (let sandwich of sandwiches) {
        if (sandwich === 0) {
            if (square > 0) square--;
            else break; 
        } else {
            if (circular > 0) circular--;
            else break; 
        }
    }
    return circular + square;
}