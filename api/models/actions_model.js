const db = require('../database');

const actions = {
  getById: function(id, callback) {
    return db.query(`SELECT date, action, total
    FROM actions INNER JOIN account ON account.id_account=actions.id_account 
    WHERE account.id_account=?`, [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from actions', callback);
  },
  add: function(actions, callback) {
    return db.query(
      'insert into actions (id_actions, date,action,total, id_account, id_card) values(?,?,?,?,?,?)',
      [actions.id_actions, actions.date, actions.action, actions.total, actions.id_account, actions.id_card],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from actions where id_actions=?', [id], callback);
  },
  update: function(id, actions, callback) {
    return db.query(
      'update actions set date=?,action=?, total=?, id_account=?, id_card=? where id_actions=?',
      [actions.date, actions.action, actions.total, actions.id_account, actions.id_card, id],
      callback
    );
  }
};
module.exports = actions;