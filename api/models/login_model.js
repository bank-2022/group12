const db = require('../database');

const login={
  checkpin: function(id, callback) {
      return db.query('SELECT pin FROM pankkiautomaatti.card where id_card=?;',[id], callback); 
    }
};
          
module.exports = login;