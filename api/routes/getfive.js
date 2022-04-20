const express = require('express');
const router = express.Router();
const actions = require('../models/actions_model');

router.get('/:id', function (request, response) {
    actions.getFive(request.params.id,function (err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(dbResult);
        }
    })
});

module.exports = router;