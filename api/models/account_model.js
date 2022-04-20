const db = require('../database');

const account = {
  getById: function(id, callback) {
    return db.query('select * from account where id_account=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from account', callback);
  },
  getBalance: function(id, callback){
    return db.query(`SELECT balance FROM account 
    INNER JOIN tili_asiakas ON account.id_account=tili_asiakas.id_account
    INNER JOIN customer ON customer.id_customer=tili_asiakas.id_customer
    INNER JOIN card ON customer.id_customer=card.id_customer
    WHERE card.id_card=?`, [id], callback);
  },

  add: function(account, callback) {
    return db.query(
      'insert into account (id_account, account_number,balance) values(?,?,?)',
      [account.id_account, account.account_number, account.balance],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from account where id_account=?', [id], callback);
  },
  update: function(id, account, callback) {
    return db.query(
      'update account set account_number=?,balance=? where id_account=?',
      [account.account_number, account.balance, id],
      callback
    );
  },
  updateBalance: function(id, account, callback) {
    return db.query(
      'update account set balance=? where id_account=?',
      [account.balance, id],
      callback
    );
  }
};
module.exports = account;