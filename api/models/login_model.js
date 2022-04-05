const db = require('../database');

const login = {
  getById: function(id, callback) {
    return db.query('select * from login where id_login=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from login', callback);
  },
  add: function(login, callback) {
    return db.query(
      'insert into login (id_login, name,adress,phone_number) values(?,?,?,?)',
      [login.id_login, login.name, login.adress, login.phone_number],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from login where id_login=?', [id], callback);
  },
  update: function(id, login, callback) {
    return db.query(
      'update login set name=?,adress=?, phone_number=? where id_login=?',
      [login.name, login.adress, login.phone_number, id],
      callback
    );
  }
};
module.exports = login;