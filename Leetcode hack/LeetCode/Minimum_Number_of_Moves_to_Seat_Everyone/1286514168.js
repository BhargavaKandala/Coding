/**
 * @param {number[]} seats
 * @param {number[]} students
 * @return {number}
 */
var minMovesToSeat = function(seats, students) {
   // let count = 0;
   let sum =0;
   seats.sort((a,b)=>a-b);
   students.sort((a,b)=>a-b);

    for(let i=0;i<seats.length;i++)
    {
        if(seats[i]==students[i]){
            continue;
        }
        else if(seats[i]>students[i]){
            sum += (seats[i]-students[i]);
        }
        else{
            sum +=(students[i]-seats[i]);
        }
    }
    return sum
};