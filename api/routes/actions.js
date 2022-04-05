const express = require('express');
const router = express.Router();
const actions = require('../models/actions_model');

router.get('/:id?',
 function(request, response) {
  if (request.params.id) {
    actions.getById(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult.rows);
      }
    });
  } else {
    actions.getAll(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        console.log(dbResult.rows);
        response.json(dbResult.rows);
      }
    });
  }
});


router.post('/', 
function(request, response) {
  actions.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:id', 
function(request, response) {
  actions.delete(request.params.id, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:id', 
function(request, response) {
  actions.update(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;