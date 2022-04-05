var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');

var indexRouter = require('./routes/index');
var customerRouter = require('./routes/customer');
var cardRouter = require('./routes/card');
var accountRouter = require('./routes/account');
var actionsRouter = require('./routes/actions');

var app = express();



app.use(helmet());
app.use(cors());

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/customer', customerRouter);
app.use('/card', cardRouter);
app.use('/account', accountRouter);
app.use('/actions', actionsRouter);


module.exports = app;
