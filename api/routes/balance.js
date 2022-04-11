const express = require('express');
const router = express.Router();
const account = require('../models/account_model');

router.get('/:id?',
 function(request, response) {
    account.getBalance(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        console.log(dbResult);
        response.json(dbResult);
      }
    });
});

module.exports = router;