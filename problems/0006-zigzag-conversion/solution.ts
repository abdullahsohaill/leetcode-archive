const reverseString = (s:string): string => {

    let result:string = "";

    for (let i=s.length-1; i>=0; i--) {
        result += s[i];
    }

    return result;
}
function convert(s: string, numRows: number): string {
    let result:string = "";

    if (numRows === 1) {
        return s;
    }

    const rows:string[] = Array(numRows);

    for (let i=0; i<numRows; i++) {
        rows[i] = "";
    }

    let offset:number = numRows - 2;
    let position:number = 0;
    let movement:number = 0;

    for (let i=0; i<s.length; i++) {
        
        // down ==> (i+1) % (numRows + offset) < = numRows
        // ==> simply index i and put
        if (position===0) {
            movement = 1;
        }

        if (position===numRows-1) {
            movement = -1;
        }

        rows[position] += s[i];
        position += movement;
    }

    for (let i=0; i<numRows; i++) {
        result += rows[i];
    }
    
    return result;
    
};
