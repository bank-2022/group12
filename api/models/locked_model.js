const db = require('../database');

const locked = {
  getById: function(id, callback) {
    return db.query('select locked from card where id_card=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from customer', callback);
  },

  delete: function(id, callback) {
    return db.query('delete from customer where id_customer=?', [id], callback);
  },
  update: function(id, card, callback) {
    return db.query(
      'update card set locked=? where id_card=?',
      [card.locked, id],
      callback
    );
  }
};
module.exports = locked;