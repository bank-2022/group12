const db = require('../database');

const customer = {
  getById: function(id, callback) {
    return db.query('select * from customer where id_customer=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from customer', callback);
  },
  add: function(customer, callback) {
    return db.query(
      'insert into customer (id_customer, name,adress,phone_number) values(?,?,?,?)',
      [customer.id_customer, customer.name, customer.adress, customer.phone_number],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from customer where id_customer=?', [id], callback);
  },
  update: function(id, customer, callback) {
    return db.query(
      'update customer set name=?,adress=?, phone_number=? where id_customer=?',
      [customer.name, customer.adress, customer.phone_number, id],
      callback
    );
  }
};
module.exports = customer;