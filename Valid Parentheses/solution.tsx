const character = {'[': ']', '{': '}', '(': ')'}

function isStartingChar(ch: string): boolean {
    return Object.keys(character).includes(ch)
}
function isValid(s: string): boolean {
    var array: string[] = []
     for (const ch of s) {
        if(isStartingChar(ch)) {
            array.unshift(ch)
        } else {
            if(ch === character[array[0]]) {
                array.shift()
            }
            else {
                return false
            }
        }
    }
    return array.length === 0
};