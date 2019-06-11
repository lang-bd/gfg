const fs = require('fs');

// Generate list.txt file from icons directory
// ls -a | sort > list.txt

const lineReader = require('readline').createInterface({
    input: require('fs').createReadStream('list.txt')
});

var readme = "";

lineReader.on('line', function (line) {
    readme = readme + '* [' + line + '](https://www.geeksforgeeks.org/' + line + '/)' + '\n';
}).on('close', function () {
    fs.writeFile('README.md', readme, function (err) {
        if (err) throw err;
    });
});