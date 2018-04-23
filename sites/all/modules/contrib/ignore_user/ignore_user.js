
if (Drupal.jsEnabled) {
  $(document).ready(function () {
    $('div.ignore-user-container > div').hide();
    $('div.ignore-user-container > a.ignore-user-content-link').click(function() {
      $(this).next('div').slideToggle('fast');
      return false;
    });
  });
}
