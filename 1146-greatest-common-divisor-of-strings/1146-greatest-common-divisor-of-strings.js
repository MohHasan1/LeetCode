/**
 * @param {string} str1
 * @param {string} str2
 * @return {string}
 */
var gcdOfStrings = function (str1, str2) {
    if (str1 + str2 !== str2 + str1) {
        return '';
    }

    //
    function GCF(len1, len2) {
        let size = 1
        let retSize = 1;
        for (let i = 0; i < len2; i++) {
            if (len2 % size === 0 && len1 % size === 0) {
                retSize = size
            }
            size++

        }

        return retSize
    }

    return str1.substring(0, GCF(str1.length, str2.length))
};