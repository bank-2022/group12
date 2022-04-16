const express = require('express');
const router = express.Router();
const account = require('../models/account_model');

router.get('/:id?',
 function(request, response) {
    account.getBalance(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        console.log(dbResult);
        response.json(dbResult);
      }
    });
});

router.put('/:id', 
function(request, response) {
  account.updateBalance(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;