$(document).ready(function() {
  var $numberContainer = $('.matrix');
  var numColumns = Math.ceil(window.innerWidth / 20);
  var numRows = Math.ceil(window.innerHeight / 20);

  for (var i = 0; i < numColumns; i++) {
    for (var j = 0; j < numRows; j++) {
      var $number = $('<span class="number">' + getRandomInt(0, 9) + '</span>');
      $number.css({
        left: i * 20,
        top: j * 20,
        opacity: 0,
        color: 'green'
      });
      $numberContainer.append($number);
    }
  }

  setInterval(function() {
    var $numbers = $numberContainer.find('.number');
    var randomIndex = Math.floor(Math.random() * $numbers.length);
    var $randomNumber = $numbers.eq(randomIndex);
    $randomNumber.animate({
      opacity: 1
    }, 1000, function() {
      $randomNumber.animate({
        opacity: 0
      }, 1000);
    });
  }, 50);

  function getRandomInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
  }
});
