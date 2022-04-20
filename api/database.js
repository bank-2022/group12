const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'pankkiuser',
  password: 'pankkiasiakaspass',
  database: 'pankkiautomaatti'
});
module.exports = connection;